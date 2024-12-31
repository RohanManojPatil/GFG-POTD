*******************************GFG POTD*************************
*	               T.C = O(maxi)							                * 
*	               							                        * 
*	               S.C = O(maxi)                                           * 
*	                                                                * 
*********************************************************************
class Solution {
  public:
    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr) {
        int maxi = *max_element(arr.begin(), arr.end());
        vector<int> presence(maxi+1, 0);
        int consecutiveCount = 0;
        int maxConsecutiveCount = 0;
        
        for(int i = 0; i<arr.size(); i++)
        {
            int currentElement = arr[i];
            presence[currentElement] = 1;
        }
        
        for(int i = 0; i<=maxi; i++)    
        {
            if(presence[i] == 1)
            {
                consecutiveCount++;
                maxConsecutiveCount = max(maxConsecutiveCount, consecutiveCount);
            }
            else
            {
                consecutiveCount = 0;
            }
        }
        
        return maxConsecutiveCount;
    }
};