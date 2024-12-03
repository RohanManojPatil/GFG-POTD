*******************************GFG POTD*************************
*	               T.C = O(N)							                * 
*	               							                        * 
*	               S.C = O(N)                                           * 
*	                                                                * 
*********************************************************************
class Solution {
  public:
    int minChar(string& s) {
        // Write your code here
        string rev = s;
        reverse(rev.begin(),rev.end());
        string combine = s + '#'+rev;
        vector<int>lps(combine.size(),0);
        int i = 0, j = 1;
        while(j<combine.size()){
            if(combine[j] == combine[i])lps[j++] = ++i;
            else if(i) i =lps[i-1];
            else j++;
        }
        string temp = s.substr(i);
        return temp.size();
    }
};