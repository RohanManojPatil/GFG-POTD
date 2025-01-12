*******************************GFG POTD*************************
*	               T.C = 							                * 
*	               							                        * 
*	               S.C =                                            * 
*	                                                                * 
*********************************************************************
class Solution {
  public:
    int maxWater(vector<int> &arr) {
        int i = 0, j = arr.size() - 1;
        int leftMax = 0, rightMax = 0;
        int totalWater = 0;
        
        while(i < j)
        {
            leftMax = max(leftMax, arr[i]);
            rightMax = max(rightMax, arr[j]);
            
            if(arr[i] <= arr[j])
            {
                totalWater += leftMax - arr[i];
                i++;
            }
            else
            {
                totalWater += rightMax - arr[j];
                j--;
            }
        }
        
        return totalWater;
    }
};