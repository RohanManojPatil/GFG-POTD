
*******************************GFG POTD*************************
*	               T.C = O(N)							                * 
*	               							                        * 
*	               S.C = O(N)                                           * 
*	                                                                * 
********************************************************************
// User function template for C++

class Solution {
  public:

    bool checkDuplicatesWithinK(vector<int>& arr, int k) {
        int n = arr.size();
        unordered_map<int, int> elementPosition;
        
        for(int i = 0; i<n; i++)
        {
            int currentElement = arr[i];
            if(elementPosition.find(currentElement) != elementPosition.end())
            {
                if(i - elementPosition[currentElement] <= k)
                {
                    return true;
                }
            }
            
            elementPosition[currentElement] = i;
        }
        
        return false;
    }
};