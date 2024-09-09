class Solution {
  public:
    void sort012(vector<int>& arr) {
        int zero=0,one=0,two=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0){
                zero++;
            }
            else if(arr[i]==1){
                one++;
            }
            else{
                two++;
            }
        }
        for(int i=0;i<arr.size();i++){
            if(zero!=0){
                arr[i]=0;
                zero--;
            }
            else if(zero==0 && one!=0){
                arr[i]=1;
                one--;
            }
            else{
                arr[i]=2;
                two--;
            }
        }
        
    }
};