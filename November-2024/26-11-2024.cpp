*******************************GFG POTD*************************
*	               T.C = O(n)							                * 
*	               							                        * 
*	               S.C = O(1)                                           * 
*	                                                                * 
*********************************************************************
class Solution {
  public:
    // arr: input array
    // Function to find maximum circular subarray sum.
    int circularSubarraySum(vector<int> &arr) {
        // your code here
        int n=arr.size();
        int maxi1=0,sum1=0,total=0;
        for(int i=0;i<n;i++){
            sum1+=arr[i];
            total+=arr[i];
            if(sum1>maxi1) maxi1=max(sum1,maxi1);
            if(sum1<0) sum1=0;
        }
        
        int maxi2=0,sum2=0;
        for(int i=0;i<n;i++){
            sum2+=arr[i];
            maxi2=min(maxi2,sum2);
            if(sum2>0) sum2=0;
        }
        
        return max(maxi1,total-maxi2);
    }
};