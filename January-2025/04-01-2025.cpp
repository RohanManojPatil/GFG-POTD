*******************************GFG POTD*************************
*	               T.C = O(N^2)							                * 
*	               							                        * 
*	               S.C = O(N)                                           * 
*	                                                                * 
*********************************************************************
class Solution {
  public:
    int countTriplets(vector<int> &arr, int target) {
        // Code Here
        int n = arr.size();
        int count = 0;
        
        unordered_map<int,int>mp;
        mp[arr[0]]++;
        
        for(int i=1;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                int new_target=arr[i]+arr[j];
                
                int rem_sum=target-new_target;
                if(mp.find(rem_sum)!=mp.end()) 
                count+=mp[rem_sum];
            }
            
            mp[arr[i]]++;
        }
        
        return count;
}

};