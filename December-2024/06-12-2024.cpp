*******************************GFG POTD*************************
*	               T.C = O(nlogn)							                * 
*	               							                        * 
*	               S.C = O(1)                                           * 
*	                                                                * 
*********************************************************************
// User function Template for C++
class Solution {
  public:
    int hIndex(vector<int>& a) {
        auto ok = [&](int m){
            int cnt=0;
            for(auto it:a){
                if(it>=m) cnt++;
            }
            
            return cnt>=m;
        };
        
        int l=0,h=1e9;
        int ans = 0;
        while(l<=h){
            int m = l + (h-l)/2;
            if(ok(m)){
                ans = m;
                l=m+1;
            }
            else h=m-1;
        }
        
        return ans;
    }
};