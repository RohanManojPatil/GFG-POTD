*******************************GFG POTD*************************
*	               T.C = O(N)							                * 
*	               							                        * 
*	               S.C = O(1)                                           * 
*	                                                                * 
*********************************************************************
// User function template for C++
class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        int i = 0;
        for(int j = 0; j<arr.size(); j++){
            if(arr[j] != 0) {
                swap(arr[i], arr[j]);
                i++;
            }
        }
    }
};