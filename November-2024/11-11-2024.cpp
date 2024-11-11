*******************************GFG POTD*************************
*	               T.C = O(nlogn)							                * 
*	               							                        * 
*	               S.C = O(1)                                           * 
*	                                                                * 
*********************************************************************
// User function Template for C++

class Solution {
  public:
    int minIncrements(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        int minIncrement = 0;
        
        for(int i = 1; i<n; i++)
        {
            if(arr[i] <= arr[i-1])
            {
                int val = arr[i-1] - arr[i] + 1;
                minIncrement += val;
                arr[i] += val;
            }
        }
        
        return minIncrement;
    }
};