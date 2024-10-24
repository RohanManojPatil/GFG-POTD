
*******************************GFG POTD******************************
*	               T.C = O(N)							                * 
*	               							                        * 
*	               S.C = O(N)                                           * 
*	                                                                * 
*********************************************************************
// User function Template for C++

class Solution {
  public:
    vector<int> modifyAndRearrangeArray(vector<int> &arr) {
        int n = arr.size(), start = 0, i;
        vector<int> res(n);
        for( i=1; i<n; i++ )
            if( arr[i-1] ) {
                if( arr[i] == arr[i-1] ) {
                    res[start++] = 2 * arr[i-1];
                    i++;
                } else
                    res[start++] = arr[i-1];
            }
        if( i == n && arr[n-1] )
            res[start++] = arr[n-1];
        while( start < n )
            res[start++] = 0;
        return res;
    }
};