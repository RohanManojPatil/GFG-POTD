
*******************************GFG POTD******************************
*	               T.C = O(N)							                * 
*	               							                        * 
*	               S.C = O(1)                                           * 
*	                                                                * 
*********************************************************************
#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
    string roundToNearest(string str) {
        int n = str.length();
        unordered_map<char, char> nextDigit = {
            {'0', '1'}, {'1', '2'}, {'2', '3'}, {'3', '4'}, {'4', '5'}, 
            {'5', '6'}, {'6', '7'}, {'7', '8'}, {'8', '9'}, {'9', '0'}
        };

        // If last digit is between 0 and 5, round down to '0'
        if (str[n - 1] >= '0' && str[n - 1] <= '5') {
            str[n - 1] = '0';
        } else {
            // Round the last digit to '0' and propagate carry
            str[n - 1] = '0';
            bool carry = true;

            // Iterate from second-last digit to the first
            for (int i = n - 2; i >= 0 && carry; --i) {
                if (str[i] != '9') {
                    carry = false; // Stop propagation if it's not '9'
                }
                str[i] = nextDigit[str[i]]; // Increment current digit
            }

            // If carry still remains after propagating through all digits
            if (carry) {
                str = '1' + str;
            }
        }

        return str;
    }
};
