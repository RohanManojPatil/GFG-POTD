
*******************************GFG POTD*************************
*	               T.C = O(N)							                * 
*	               							                        * 
*	               S.C = O(1)                                           * 
*	                                                                * 
*********************************************************************
// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        int first = arr[0];
        int second = -1;
        
        for(int i = 1; i<arr.size(); i++)
        {
            if(arr[i]>first)
            {
                second = first;
                first = arr[i];
            }
            else if(arr[i]<first && arr[i]>second)
            {
                second = arr[i];
            }
        }
        
        return second;
    }
};