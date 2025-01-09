*******************************GFG POTD*************************
*	               T.C = O(N)							                * 
*	               							                        * 
*	               S.C = O(1)                                           * 
*	                                                                * 
*********************************************************************
class Solution {
  public:
    vector<int> subarraySum(vector<int>& arr, int target) {
    int i = 0, j = 0, n = arr.size();
    int sum = 0;
    
    while (j < n) {
        sum += arr[j];
    
        while (i <= j && sum > target) {
            sum -= arr[i];
            i++;  
        }
            
        if(sum == target) {
            return {i + 1, j + 1};  
        } 
        
        j++;  
    }
    
    return {-1};  
}
};