*******************************GFG POTD*************************
*	               T.C = O(N+M)							                * 
*	               							                        * 
*	               S.C = O(N+M)                                          * 
*	                                                                * 
*********************************************************************
// User function template in C++
class Solution {
  public:
    // Function to return the count of number of elements in union of two arrays.
    int findUnion(vector<int>& a, vector<int>& b) {
        int uniqueCount = 0;
        unordered_map<int, bool> mp;
        
        for(int i = 0; i<a.size(); i++)
        {
            int currentElement = a[i];
            if(mp.find(currentElement) == mp.end())
            {
                uniqueCount++;
                mp[currentElement] = true;
            }
        }
        
        for(int i = 0; i<b.size(); i++)
        {
            int currentElement = b[i];
            if(mp.find(currentElement) == mp.end())
            {
                uniqueCount++;
                mp[currentElement] = true;
            }
        }
        
        return uniqueCount;
    }
};