
*******************************GFG POTD*************************
*	               T.C = O(N^2)							                * 
*	               							                        * 
*	               S.C = O((N-2)*3)                                          * 
*	                                                                * 
*********************************************************************
// User function Template for C++
class Solution {
  public:
    vector<vector<int>> findTriplets(vector<int> &arr) {
        vector<vector<int>> ans;
        int n = arr.size();
        unordered_map<int, set<int>> elementIndex;
        
        for(int i = 0; i<n; i++)
        {
            elementIndex[arr[i]].insert(i);
        }
        
        for(int i = 0; i<n; i++)
        {
            for(int j = i+1; j<n; j++)
            {
                int sum = arr[i] + arr[j];
                int target;
                
                if(sum==0)
                {
                    target = 0;
                }
                else if(sum<0)
                {
                    target = abs(sum);
                }
                else
                {
                    target = -sum;
                }
                
                
                if(elementIndex.find(target) != elementIndex.end())
                {
                    for(auto it = elementIndex[target].begin(); it != elementIndex[target].end(); it++)
                    {
                        int position = *it;
                        if(position > i && position > j)
                        {
                            ans.push_back({i, j, position});
                        }
                    }
                }
            }
        }
        
        return ans;
    }
};