// User function Template for C++
class Solution {
  public:
    // Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(vector<int> &arr) {
        long long sum = 0, maxi = INT_MIN;
        
        for(int i = 0; i<arr.size(); i++)
        {
            sum += arr[i];
            maxi = max(maxi, sum);
            
            if(sum < 0)
            {
                sum = 0;
            }
        }
        
        return maxi;
    }
};