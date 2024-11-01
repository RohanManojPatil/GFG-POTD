
******************************* GFG POTD*************************
*	               T.C = O(nlogn)							                * 
*	               							                        * 
*	               S.C = O(N)                                           * 
*	                                                                * 
*********************************************************************
class Solution {
  public:
    long long maxSum(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        int i = 0, j = n-1;
        long long maximizedSum = 0;
        vector<int> ans;
        
        while(i<=j)
        {
            ans.push_back(arr[i++]);
            
            if(i<=j)
            {
                ans.push_back(arr[j--]);
            }
        }
        
        for(int i = 0; i<n-1; i++)
        {
            maximizedSum += abs(ans[i]-ans[i+1]);
        }
        
        maximizedSum += abs(ans[n-1]-ans[0]);
        
        return maximizedSum;
    }
};