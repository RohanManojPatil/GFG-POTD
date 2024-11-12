
*******************************LEETCODE POTD*************************
*	               T.C = O(n + nlogn)							                * 
*	               							                        * 
*	               S.C = O(1)                                           * 
*	                                                                * 
*********************************************************************
// User function Template for C++
class Solution {
  public:
    bool canAttend(vector<vector<int>> &arr) {
        sort(arr.begin(), arr.end());
        int endTime = arr[0][1];
        
        for(int i = 1; i<arr.size(); i++)
        {
            int startTime = arr[i][0];
            
            if(startTime<endTime)
            {
                return false;
            }
            
            endTime = arr[i][1];
        }
        
        return true;
    }
};