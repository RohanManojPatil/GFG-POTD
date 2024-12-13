*******************************GFG POTD*************************
*	               T.C = O(n)							                * 
*	               							                        * 
*	               S.C = O(1)                                           * 
*	                                                                * 
*********************************************************************
class Solution {
  public:
    int findMin(vector<int>& arr) {
         // complete the function here
        int min = arr[0];
        for(int i=0;i<arr.size(); i++){
            if(arr[i]<min){
                min = arr[i];
            }
        }
        return min;
    }
};