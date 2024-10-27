
*******************************GFG POTD******************************
*	               T.C = O(N^2)							                * 
*	               							                        * 
*	               S.C = O(1)                                           * 
*	                                                                * 
*********************************************************************
class Solution {
  public:
    bool findTriplet(vector<int>& arr) {
        int n = arr.size();
        
        for(int i = 0; i<n; i++)
        {
            for(int j = i+1; j<n; j++)
            {
                for(int k = 0; k<n; k++)
                {
                    if((arr[i] + arr[j]) == arr[k])
                    {
                        return true;
                    }
                }
            }
        }
        
        return false;
    }
};