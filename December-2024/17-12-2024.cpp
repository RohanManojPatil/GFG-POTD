*******************************GFG POTD*************************
*	               T.C = O(nlogn)							                * 
*	               							                        * 
*	               S.C = O(1)                                           * 
*	                                                                * 
*********************************************************************
// User function Template for C++

class Solution {
  public:
    bool ok(int mid, vector<int>stalls,int k ){
           int last = stalls[0]; 
           k--; 
           for(int i= 1; i< stalls.size(); i++){
               if((stalls[i]-last)>= mid){
                   if(k>0){
                    k--;   
                   }
                    
                   last = stalls[i]; 
               }
           }
           
           return k<=0; 
       }

    int aggressiveCows(vector<int> &stalls, int k) {

        sort(stalls.begin(),stalls.end()); 
        int ans  = 0 ; 
        int n = stalls.size(); 
        int i = 0; 
        int j = stalls[n-1]-stalls[0]; 
        int mid ; 
        
        while(i<=j){
            mid = i+(j-i)/2; 
             
            
            if(ok(mid,stalls,k)){
                ans = mid;
                i = mid+1; 
            }else{
                j = mid-1; 
            }
            
        }
        
        return ans; 
        
    }
};