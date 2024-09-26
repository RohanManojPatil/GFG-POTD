class Solution {
  public:
    // Function to find maximum number of consecutive steps
    // to gain an increase in altitude with each step.
    int maxStep(vector<int>& arr) {
        int ans = 0, prev = arr[0], cnt = 0;
        
        for(int i = 1; i<arr.size(); i++)
        {
            if(arr[i] > prev)
            {
                cnt++;
            }
            else
            {
                cnt = 0;
            }
            
            prev = arr[i];
            ans = max(ans, cnt);
        }
        
        return ans;
    }
};