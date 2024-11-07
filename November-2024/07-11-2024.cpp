
*******************************GFG POTD*************************
*	               T.C = 							                * 
*	               							                        * 
*	               S.C =                                            * 
*	                                                                * 
*********************************************************************
// User function Template for C++
//  Class Solution to contain the method for solving the problem.
class Solution {
  public:
    // Function to determine if array arr can be split into three equal sum sets.
    vector<int> findSplit(vector<int>& arr) {
        int n = arr.size();
        vector<int> prefixSum(n, 0);
        prefixSum[0] = arr[0];
        
        for(int i = 1; i<n; i++)
        {
            prefixSum[i] = arr[i] + prefixSum[i-1];
        }
        
        for(int i = 0; i<n; i++)
        {
            int firstPart = prefixSum[i];
            for(int j = i+1; j<n; j++)
            {
                int secondPart = prefixSum[j] - prefixSum[i];
                int thirdPart = prefixSum[n-1] - prefixSum[j];
                
                if(firstPart == secondPart && secondPart == thirdPart)
                {
                    return {i, j};
                }
            }
        }
        
        return {-1, -1};
    }
};