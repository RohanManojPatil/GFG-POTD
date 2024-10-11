
*******************************GFG POTD******************************
*	               T.C = O(n)							                * 
*	               							                        * 
*	               S.C = O(1)                                           * 
*	                                                                * 
*********************************************************************
class Solution {
  public:
    vector<int> rearrange(const vector<int>& arr) {
        int n = arr.size();
        vector<int> reorganizedArray(n, -1);
        
        for(int i = 0; i<n; i++)
        {
            int currentElement = arr[i];
            if(currentElement != -1)
            {
                reorganizedArray[currentElement] = currentElement;
            }
        }
        
        return reorganizedArray;
    }
};