*******************************GFG POTD*************************
*	               T.C = O(N)							                * 
*	               							                        * 
*	               S.C = O(1)                                           * 
*	                                                                * 
*********************************************************************

class Solution {
  public:
    // Function to find the first non-repeating character in a string.
    char nonRepeatingChar(string &s) {
        int arr[256]={0};
        for(char c:s) {
             arr[c]++;
        }
        char ans;
        for(char c:s) {
            if(arr[c]==1) {
                return c;
            }
        }
        return '$';
    }
};