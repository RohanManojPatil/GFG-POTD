
*******************************GFG POTD******************************
*	               T.C = O(n)							                * 
*	               							                        * 
*	               S.C =  O(1)                                          * 
*	                                                                * 
*********************************************************************

class Solution {
  public:
    int rotateDelete(vector<int> &arr) {
        int z=arr.size();
        int count=0;
        while(count<(z/2)){
            int x=arr[arr.size()-1];
            arr.insert(arr.begin()+0,x);
            arr.pop_back();
            arr.erase(arr.begin()+(arr.size()-count-1));
            count++;
        }
        return arr[0];
    }
};