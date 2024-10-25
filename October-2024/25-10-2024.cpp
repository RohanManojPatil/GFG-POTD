
*******************************GFG POTD******************************
*	               T.C = O(N)							                * 
*	               							                        * 
*	               S.C = O(N)                                           * 
*	                                                                * 
*********************************************************************
class Solution {

  public:
    vector<int> alternateSort(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        vector<int> ans;
        int i = 0, j = arr.size()-1;
        
        while(i<=j)
        {
            ans.push_back(arr[j--]);
            if(i<=j)
            {
                ans.push_back(arr[i++]);
            }
            
        }
        
        return ans;
    }
};