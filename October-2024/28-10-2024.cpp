
*******************************GFG POTD******************************
*	               T.C = O(N)							                * 
*	               							                        * 
*	               S.C = O(N)                                          * 
*	                                                                * 
*********************************************************************
class Solution {
  public:
    vector<int> removeDuplicate(vector<int>& arr) {
       vector<int> ans;
       unordered_map<int, bool> presence;
       int n = arr.size();
       
       for(int i = 0; i<n; i++)
       {
           int currentElement = arr[i];
           if(presence.find(currentElement) == presence.end())
           {
               presence[currentElement] = true;
               ans.push_back(currentElement);
           }
       }
       
       return ans;
    }
};