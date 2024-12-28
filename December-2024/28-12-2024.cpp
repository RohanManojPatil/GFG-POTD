*******************************GFG POTD*************************
*	               T.C = O(N^2)							                * 
*	               							                        * 
*	               S.C = O(N^2)                                           * 
*	                                                                * 
*********************************************************************
// User function Template for C++
// User function Template for C++
class Solution {
  public:
    vector<vector<int>> findTriplets(vector<int> &arr) {
         // Code here
        unordered_map<int,vector<pair<int,int>>>mpp;
        set<vector<int>>st;
        
        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                int sum=arr[i]+arr[j];
                mpp[sum].push_back({i,j});
            }
        }
        
        for(int i=0;i<arr.size();i++){
            
            int req=-arr[i];
            if(mpp.find(req)!=mpp.end()){
            for(auto it:mpp[req]){
                   if(i!=it.first && i!=it.second) {
                    vector<int>curr={i,it.first,it.second};
                    sort(curr.begin(),curr.end());
                    st.insert(curr);
                }
            }
        }
    }
        vector<vector<int>>ans(st.begin(),st.end());
        return ans;
    }
};