
*******************************LEETCODE POTD*************************
*	               T.C = O(N)							                * 
*	               							                        * 
*	               S.C = O(1)                                           * 
*	                                                                * 
*********************************************************************
class Solution {
  public:

    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(vector<int>& arr, int d) {
        int n = arr.size();
        d = d % n;
        // Step 1: Reverse the first d elements
        reverse(arr.begin(), arr.begin() + d);
    
        // Step 2: Reverse the remaining elements from d to end
        reverse(arr.begin() + d, arr.end());
    
        // Step 3: Reverse the whole array
        reverse(arr.begin(), arr.end());
    }
};