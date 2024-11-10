
*******************************GFG POTD*************************
*	               T.C = O(max(N, M))							                * 
*	               							                        * 
*	               S.C = O(N+M)                                           * 
*	                                                                * 
*********************************************************************
class Solution {
  public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        unordered_map<int, bool> presence;
        int i = 0, j = 0;
        int n = a.size(), m = b.size();
        vector<int> ans;
        
        while(i<n && j<m)
        {
            if(a[i]<b[j])
            {
                if(presence.find(a[i]) == presence.end())
                {
                    ans.push_back(a[i]);
                    presence[a[i]] = true;
                }
                
                i++;
            }
            else
            {
                if(presence.find(b[j]) == presence.end())
                {
                    ans.push_back(b[j]);
                    presence[b[j]] = true;
                }
                
                j++;
            }
        }
        
        while(i<n)
        {
            if(presence.find(a[i]) == presence.end())
            {
                ans.push_back(a[i]);
                presence[a[i]] = true;
            }
            
            i++;
        }
        
        while(j<m)
        {
            if(presence.find(b[j]) == presence.end())
            {
                ans.push_back(b[j]);
                presence[b[j]] = true;
            }
            
            j++;
        }
        
        return ans;
    }
};