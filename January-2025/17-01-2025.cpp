*******************************GFG POTD*************************
*	               T.C = 							                * 
*	               							                        * 
*	               S.C =                                            * 
*	                                                                * 
*********************************************************************
// User function template for C++

class Solution {
  public:
    vector<int> productExceptSelf(vector<int>& arr) {
        // code here
        
        int n = arr.size();
        vector<int> prefix(n),suffix(n);
        
        
        prefix[0] = arr[0];
        suffix[n-1] = arr[n-1];
        
        for(int i=1; i<n; i++){
            prefix[i] = prefix[i-1] * arr[i];
        }
        for(int i=n-2; i>=0; i--){
            suffix[i] = suffix[i+1] * arr[i];
        }
        arr[0] = suffix[1];
        arr[n-1] = prefix[n-2];
        
        for(int i=1; i<n-1; i++){
            arr[i] = prefix[i-1] * suffix[i+1];
        }
        return arr;
    }
};