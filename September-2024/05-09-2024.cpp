// User function template for C++
class Solution {
  public:

    // Note that the size of the array is n-1
    int missingNumber(int n, vector<int>& arr) {
        
         // Your code goes here
        int actualsum = (n*(n+1))/2;
        int arrsum = accumulate(arr.begin(), arr.end(), 0);
        int missing = actualsum - arrsum;
        
        return missing;
    }
};