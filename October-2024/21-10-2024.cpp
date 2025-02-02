
*******************************GFG POTD******************************
*	               T.C = O(N)							                * 
*	               							                        * 
*	               S.C = O(1)                                           * 
*	                                                                * 
*********************************************************************
// User function template for C++
class Solution {
  public:
    int countgroup(vector<int>& arr) {
        // Complete the function
        int mod=1e9+7;
        int x=arr[0];
        for(int i=1;i<arr.size();i++){
            x^=arr[i];
        }
        if(x!=0){
            return 0;
        }
        int ans=1;
        for(int i=0;i<arr.size()-1;i++){
            ans=(2*ans)%mod;
        }
        return ans-1;
    }
};