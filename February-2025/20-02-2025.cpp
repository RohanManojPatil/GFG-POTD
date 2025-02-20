*******************************GFG POTD*************************
*	               T.C = O(N)							                * 
*	               							                        * 
*	               S.C = O(N)                                           * 
*	                                                                * 
*********************************************************************
class Solution {
  public:
    vector<double> getMedian(vector<int> &arr) {
        // code here
        vector<double>ans;
        priority_queue<int> sh;
        priority_queue<int, vector<int>, greater<int> > lh;
    
        for(auto i : arr){
            sh.push(i);
            if((sh.size() - lh.size() > 1 || sh.size() - lh.size() < -1)){
                if(!sh.empty() && (sh.size() > lh.size())){
                    auto t = sh.top();
                    sh.pop();
                    lh.push(t);    
                }
                if(!lh.empty() && (lh.size() > sh.size()) ){
                    auto t = lh.top();
                    lh.pop();
                    sh.push(t);    
                }
            }
            if(!sh.empty() && !lh.empty() && (sh.top() > lh.top())){
                auto t = sh.top();
                sh.pop();
                lh.push(t);
            }
  
            if(sh.size() > lh.size()){
 
                ans.emplace_back(sh.top());
            }
            else if(sh.size() < lh.size()){
                ans.emplace_back(lh.top());

            }
            else{
                
                auto s = sh.top(),l = lh.top();
 
                ans.emplace_back((s+l) / 2.0);
            }
     
        }
        
        return ans;
    }
};