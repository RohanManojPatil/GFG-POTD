*******************************GFG POTD*************************
*	               T.C = O(N)							                * 
*	               							                        * 
*	               S.C = O(N)                                           * 
*	                                                                * 
*********************************************************************
class Solution {
  public:
    int countPairs(vector<int>& arr, int target) {
    unordered_map<int, int> valueCount;
    int pairCount = 0;

    for (const int& x : arr) {
        int complement = target - x;

        if (valueCount.count(complement)) {
            pairCount += valueCount[complement];
        }

        valueCount[x]++;
    }

    return pairCount;
}
};