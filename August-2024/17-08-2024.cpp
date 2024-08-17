// User function template for C++

class Solution {
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums) {
        int n = nums.size() - 1;
        
        vector<long long int> ans;
        if(n == 0)
        {
            ans.push_back(1);
            return ans;
        }
        
        vector<long long int> prefix(n+1, 0), postfix(n+1, 0);
        
        prefix[0] = nums[0];
        postfix[n] = nums[n];
        
        for(int i = 1; i<=n; i++)
        {
            prefix[i] = prefix[i-1] * nums[i];
            postfix[n-i] = postfix[n-i+1] * nums[n-i];
        }
        
        for(int i = 0; i<=n; i++)
        {
            if(i == 0)
            {
                ans.push_back(postfix[i+1]);
            }
            else if(i == n)
            {
                ans.push_back(prefix[i-1]);
            }
            else
            {
                long long int temp = prefix[i-1] * postfix[i+1];
                ans.push_back(temp);
            }
        }
        
        return ans;
    }
};