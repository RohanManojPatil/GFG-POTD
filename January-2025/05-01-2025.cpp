*******************************GFG POTD*************************
*	               T.C = O(nlogn)							                * 
*	               							                        * 
*	               S.C = O(1)                                          * 
*	                                                                * 
*********************************************************************
// User function Template for C++
class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        sort(arr.begin(), arr.end());
        
        int i = 0, j = arr.size() - 1;
        int count = 0;
        
        while(i < j)
        {
            int sum = arr[i] + arr[j];
            
            if(sum < target)
            {
                count += (j-i);
                i++;
            }
            else if(sum >= target)
            {
                j--;
            }
        }
        
        return count;
    }
};