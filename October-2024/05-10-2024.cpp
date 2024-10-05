
*******************************GFG POTD******************************
*	               T.C = O(n)							                * 
*	               							                        * 
*	               S.C = O(1)                                          * 
*	                                                                * 
*********************************************************************
// User function template for C++

class Solution {
  public:
    long long findSmallest(vector<int> &arr) {
        long long requiredNum = 1, sum = 0;
        int n = arr.size();
        
        for(int i = 0; i<n; i++)
        {
            if(arr[i]>requiredNum)
            {
                break;
            }
            else
            {
                sum += arr[i];
                requiredNum = sum+1;
            }
        }
        
        return requiredNum;
    }
};
