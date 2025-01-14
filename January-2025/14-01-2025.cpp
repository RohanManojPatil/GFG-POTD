*******************************GFG POTD*************************
*	               T.C = O(N)							                * 
*	               							                        * 
*	               S.C = O(1)                                           * 
*	                                                                * 
*********************************************************************
class Solution {
  public:

    int findEquilibrium(vector<int>& arr) {
        int n = arr.size();
        int totalSum = 0, leftSum = 0;
        
        // Calculate total sum of the array
        for (int num : arr) {
            totalSum += num;
        }
        
        // Iterate through the array and check for equilibrium
        for (int i = 0; i < n; i++) {
            // Calculate right sum as totalSum - leftSum - arr[i]
            int rightSum = totalSum - leftSum - arr[i];
            
            // Check if left sum equals right sum
            if (leftSum == rightSum) {
                return i;
            }
            
            // Update left sum
            leftSum += arr[i];
        }
        
        return -1; // No equilibrium point found
    }

};