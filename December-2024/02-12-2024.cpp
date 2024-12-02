*******************************GFG POTD*************************
*	               T.C = O(N)							                * 
*	               							                        * 
*	               S.C = O(N)                                           * 
*	                                                                * 
*********************************************************************
class Solution {
  public:
    vector<int> search(string& pat, string& txt) {
        vector<int> indices;
        size_t pos = txt.find(pat); // Start searching for the pattern

        while (pos != string::npos) { // Until no more matches are found
        indices.push_back(pos);        // Store the position
        pos = txt.find(pat, pos + 1);  // Search for the next occurrence
        }

        return indices;
    }
};