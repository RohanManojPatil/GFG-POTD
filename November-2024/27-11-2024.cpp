*******************************GFG POTD*************************
*	               T.C = O(nlogn)							                * 
*	               							                        * 
*	               S.C = O(1)                                           * 
*	                                                                * 
*********************************************************************

class Solution {
  public:
    // Function to find the smallest positive number missing from the array.
    int missingNumber(vector<int> &arr) {
        sort(arr.begin(), arr.end());
        int target = 1;
        
        for(int i = 0; i<arr.size(); i++)
        {
            if(arr[i] <= 0)
            {
                continue;
            }
            
            if(arr[i] == target)
            {
                target = arr[i] + 1;
            }
        }
        
        return target;
    }
};