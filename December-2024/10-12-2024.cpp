*******************************GFG POTD*************************
*	               T.C = O(nlogn)							                * 
*	               							                        * 
*	               S.C = O(1)                                          * 
*	                                                                * 
*********************************************************************
class Solution {
  public:
    int minRemoval(vector<vector<int>> &intervals) {
        // code here
        sort(intervals.begin() , intervals.end() , [](vector<int> &a,vector<int> &b){
            return a[1]<b[1];
        });
        int e=0;
        int ans=0;
        
        int n=intervals.size();
        for(int i=0;i<n;i++){
            if(e>intervals[i][0])
                ans++;
            else
                e=intervals[i][1];
        }
        
        return ans;
    }
};