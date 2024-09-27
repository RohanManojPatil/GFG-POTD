// User function template for C++

class Solution {
  public:
    // Function to find maximum of each subarray of size k.
    vector<int> max_of_subarrays(int k, vector<int> &arr) {
        deque<int> dq;  // Deque to store indices
        vector<int> ans;  // Result to store max of each window
        int n = arr.size();
    
        for (int i = 0; i < n; i++) {
            // Remove elements from the front that are outside the window
            if (!dq.empty() && dq.front() == i - k) {
                dq.pop_front();
            }
    
            // Remove elements from the back that are smaller than the current element
            while (!dq.empty() && arr[dq.back()] <= arr[i]) {
                dq.pop_back();
            }
    
            // Add the current element's index to the deque
            dq.push_back(i);
    
            // The front of the deque contains the largest element for the current window
            if (i >= k - 1) {
                ans.push_back(arr[dq.front()]);
            }
        }

        return ans;
    }
};