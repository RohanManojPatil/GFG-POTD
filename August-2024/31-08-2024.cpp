// Function to find three numbers in the given array
// such that arr[smaller[i]] < arr[i] < arr[greater[i]]

class Solution {
  public:
    vector<int> find3Numbers(vector<int> &arr) {
        int n=arr.size();
        vector<int>a(n,0),b(n,0);
        a[0]=arr[0];
        for(int i=1;i<n;i++){
            a[i]=min(a[i-1],arr[i]);
        }
        b[n-1]=arr[n-1];
        for(int i=n-2;i>=0;i--){
            b[i]=max(b[i+1],arr[i]);
        }
        for(int i=1;i<n-1;i++){
             
            if(a[i-1]<arr[i] && arr[i]<b[i+1]){
                return {a[i-1],arr[i],b[i+1]};
            }
        }
        return {};
    }
};