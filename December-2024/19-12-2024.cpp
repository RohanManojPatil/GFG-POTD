*******************************GFG POTD*************************
*	               T.C = O(N)							                * 
*	               							                        * 
*	               S.C = O(1)                                           * 
*	                                                                * 
*********************************************************************
class Solution {
  public:
    int kthMissing(vector<int> &arr, int k) {
    int expected = 1; // The next expected number
    for (int current : arr) {
        int diff = current - expected; // Count of missing numbers up to 'current'
        
        if (k <= diff) {
            // The k-th missing number lies between expected and current-1
            return expected + k - 1;
        }
        
        // Update k and expected
        k -= diff;
        expected = current + 1;
    }
    
    // If not found within the array, the missing number lies after the last element
    return expected + k - 1;
}
};