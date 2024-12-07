*******************************GFG POTD*************************
*	               T.C = O(nlogn)							                * 
*	               							                        * 
*	               S.C = O(1)                                           * 
*	                                                                * 
*********************************************************************
class Solution {
  public:
    int count=0;
     
     void merge(vector<int>&arr, int l, int m, int r) {
      
      int j=m+1;
      for(int i=l;i<=m;i++){
          while(j<=r && arr[i]>arr[j]){
              j++;
          }
          
          count+=(j-(m+1));
          
      }
      sort(arr.begin()+l,arr.begin()+r+1);
    }
    
    void mergeSort(vector<int>&arr, int s,int  e){
        if(s>=e){
            return;
        }
        // cout<<"hi";
        int  mid=s+(e-s)/2;
      //  cout<<"hi";
        mergeSort(arr,s,mid);
        mergeSort(arr,mid+1,e);
        merge(arr,s,mid,e);
        
    }
     int inversionCount(vector<int>&arr)
    {
        
        int start=0;
        int end=arr.size()-1;
       mergeSort(arr,start,end); 
       return count;
    }
};