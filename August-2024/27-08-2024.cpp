class Solution {
  public:
    /*You are required to complete this method */
    int findMaxDiff(vector<int> &arr) {
      
      
      stack<int>st;
      
      int n=arr.size();
        vector<int>rs(n,0);
        
      
     for(int i=n-1;i>=0;i--){
         
         
         while(!st.empty() && arr[i]<=st.top()){
             
             st.pop();
         }
         
         if(st.empty()){
             
             st.push(arr[i]);
             
             rs[i]=0;
         }
         
             if(arr[i]>st.top()){
             
               rs[i]=st.top();
             st.push(arr[i]);
           
         
         }
         
     }
     
        vector<int>ls(n,0);
   
   
  while(!st.empty()){
      st.pop();
  }
        
     for(int i=0;i<n;i++){
         
         
         while(!st.empty() && arr[i]<=st.top()){
             
             st.pop();
         }
         
         if(st.empty()){
             
             st.push(arr[i]);
             
             ls[i]=0;
         }
         
             if(arr[i]>st.top()){
             
               ls[i]=st.top();
             st.push(arr[i]);
           
         
         }
         
     }

     int maxi=INT_MIN;
     for(int i=0;i<n;i++){
 
      maxi=max(maxi,abs(ls[i]-rs[i]));
      
     }
   
     
     return maxi;
    }
};