*******************************GFG POTD*************************
*	               T.C = O(N)							                * 
*	               							                        * 
*	               S.C = O(1)                                           * 
*	                                                                * 
*********************************************************************
// User function Template for C++

class Solution {
  public:
    void nextPermutation(vector<int>& arr) {
        int n=arr.size();
        for(int i=n-2;i>=0;i--)
        {
            if(arr[i]<arr[i+1])
            {
                reverse(arr.begin()+i+1,arr.end());
                int index=upper_bound(arr.begin()+i+1,arr.end(),arr[i])-arr.begin();
                swap(arr[i],arr[index]);
                for(int j=index;j<n-1;j++)
                {
                    if(arr[j]>arr[j+1])
                    swap(arr[j],arr[j+1]);
                }
                break;
                
            }
            else if(i==0)
            {
                reverse(arr.begin(),arr.end());
            }
        }
    }
};