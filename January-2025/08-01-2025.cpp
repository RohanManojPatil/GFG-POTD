*******************************GFG POTD*************************
*	               T.C = O(N^2)							                * 
*	               							                        * 
*	               S.C = O(1)                                           * 
*	                                                                * 
*********************************************************************
class Solution {
  public:
    // Function to count the number of possible triangles.
    int countTriangles(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        int count = 0;
        
        for(int i = n-1; i>=0; i--)
        {
            int temp = arr[i];
            
            int j = 0, k = i-1;
            
            while(j<k)
            {
                if(arr[j] + arr[k] > temp)
                {
                    count += k - j;
                    k--;
                }
                else
                {
                    j++;
                }
            }
        }
        
        return count;
    }
};