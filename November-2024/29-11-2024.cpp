*******************************GFG POTD*************************
*	               T.C = O(N)							                * 
*	               							                        * 
*	               S.C = O(1)                                          * 
*	                                                                * 
*********************************************************************
// User function template for C++
class Solution {
  public:
    string addBinary(string& s1, string& s2) {
        int i =s1.size()-1 ;
         
         int j = s2.size()-1;
          int carry =0 ;
           
        
       string result = "";

    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) sum += s1[i--] - '0';
        if (j >= 0) sum += s2[j--] - '0';
        result += (sum % 2) + '0';
        carry = sum / 2;
    }


    int n = result.size()-1;
   while(result[n]=='0'){
       
       result.pop_back();
        n--;
        
   }

    reverse(result.begin(), result.end());
   
    
    return result;
    }
};