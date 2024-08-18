class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        int totalSum = 0, sum = 0, n = arr.size();
        
        for(int i = 0; i<n; i++)
        {
            totalSum += arr[i];
        }
        
        for(int i = 0; i<n-1; i++)
        {
            sum += arr[i];
            
            if(totalSum - sum == sum)
            {
                return true;
            }
        }
        
        return false;
    }
};