*******************************GFG POTD*************************
*	               T.C = O(nlogn)							                * 
*	               							                        * 
*	               S.C = O(1)                                           * 
*	                                                                * 
*********************************************************************
class Solution {
  public:
    vector<vector<int>> mergeOverlap(vector<vector<int>>& arr) {
        // Code here
        sort(arr.begin(),arr.end());
        vector<vector<int>>ans;
        int start=arr[0][0];
        int end=arr[0][1];
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i][0]<=end)
            {
                end=max(arr[i][1],end);
                // ans.push_back({start,end});
            }
            else{
                ans.push_back({start,end});
                start=arr[i][0];
                end=arr[i][1];
            }
        }
        ans.push_back({start,end});
        return ans;
    }
};