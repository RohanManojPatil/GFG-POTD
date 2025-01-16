*******************************GFG POTD*************************
*	               T.C = O(N)							                * 
*	               							                        * 
*	               S.C = O(1)                                           * 
*	                                                                * 
*********************************************************************
class Solution {
  public:
    int maxLen(vector<int> &arr) {
        int n = arr.size();
        unordered_map<int, int> prefixSumIndex; // Stores first occurrence of each sum
        int sum = 0;  // To track the cumulative sum
        int maxLength = 0; // To store the result

        for (int i = 0; i < n; ++i) {
            // Replace 0 with -1 for balance checking
            sum += (arr[i] == 0 ? -1 : 1);

            // If the cumulative sum is zero, the subarray from the start is balanced
            if (sum == 0) {
                maxLength = max(maxLength, i + 1);
            }

            // If sum already exists in the map, a balanced subarray is found
            if (prefixSumIndex.find(sum) != prefixSumIndex.end()) {
                maxLength = max(maxLength, i - prefixSumIndex[sum]);
            } else {
                // Store the first occurrence of the sum
                prefixSumIndex[sum] = i;
            }
        }

        return maxLength;
    }
};