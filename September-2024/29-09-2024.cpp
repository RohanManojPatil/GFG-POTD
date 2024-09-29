// User function template for C++

class Solution {
  public:
    int totalCount(int k, vector<int>& arr) {
        int ans = 0;
        
        for(auto num : arr)
        {
            ans = ans + (num/k);
            if(num%k)
            {
                ans++;
            }
        }
        
        return ans;
    }
};