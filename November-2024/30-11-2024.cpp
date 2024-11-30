*******************************GFG POTD*************************
*	               T.C = O(n)							                * 
*	               							                        * 
*	               S.C = O(1)                                           * 
*	                                                                * 
*********************************************************************
class Solution {
  public:
    // Function is to check whether two strings are anagram of each other or not.
    bool areAnagrams(string& s1, string& s2) {
        if(s1.length() != s2.length())
        {
            return false;
        }
        
        unordered_map<char, int> frequency1;
        unordered_map<char, int> frequency2;
        
        for(int i = 0; i<s1.length(); i++)
        {
            frequency1[s1[i]]++;
            frequency2[s2[i]]++;
        }
        
        if(frequency1.size() != frequency2.size())
        {
            return false;
        }
        
        for(auto it : frequency1)
        {
            if(frequency2[it.first] != it.second)
            {
                return false;
            }
        }
        
        return true;
    }
};