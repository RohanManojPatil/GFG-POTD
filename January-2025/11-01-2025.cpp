*******************************GFG POTD*************************
*	               T.C = O(N)							                * 
*	               							                        * 
*	               S.C = O(1)                                            * 
*	                                                                * 
*********************************************************************
class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        unordered_map<char,int>freq;
        int j=0;
        int ans=0;
        for(int i=0;i<s.size();i++){
            freq[s[i]]++;
            
            while(freq[s[i]]>1)freq[s[j++]]--;
            
            ans=max(ans,i-j+1);
        }
        return ans;

    }
};