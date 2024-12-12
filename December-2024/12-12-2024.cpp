*******************************GFG POTD*************************
*	               T.C = O(nlogn)							                * 
*	               							                        * 
*	               S.C = O(1)                                           * 
*	                                                                * 
*********************************************************************
class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        return upper_bound(arr.begin(), arr.end(), target) - lower_bound(arr.begin(), arr.end(), target);
    }
};