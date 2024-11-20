*******************************GFG POTD*************************
*	               T.C = O(N)							                * 
*	               							                        * 
*	               S.C = O(N)                                           * 
*	                                                                * 
*********************************************************************
class Solution {
  public:
    // Function to find the majority elements in the array
    vector<int> findMajority(vector<int>& arr) {
        unordered_map<int, pair<int, bool>> mp;
        int n = arr.size();
        int requiredMajority = abs(n/3);
        vector<int> winningCandidates;
        
        for(int i = 0; i<n; i++)
        {
            int currentElement = arr[i];
            mp[currentElement].first++;
            
            if(mp[currentElement].first > requiredMajority && mp[currentElement].second != true)
            {
                winningCandidates.push_back(currentElement);
                mp[currentElement].second = true;
            }
        }
        
        sort(winningCandidates.begin(), winningCandidates.end());
        return winningCandidates;
    }
};