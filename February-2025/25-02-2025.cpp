*******************************GFG POTD*************************
*	               T.C = O(N^2)							                * 
*	               							                        * 
*	               S.C = O(N)                                           * 
*	                                                                * 
*********************************************************************

class Solution {
  public:
    int getMaxArea(vector<int> &arr) {
         // Your code here
        stack<int> st;
        int maxArea = 0;
        int n = arr.size(); 

        for (int i = 0; i < n; i++) {
           while (!st.empty() && arr[st.top()] > arr[i]) {
            int element = st.top();
            st.pop();
            int x = i;   // x is Next smallest element and y is previous smallest element
            int y = st.empty() ? -1 : st.top();
            maxArea = max(arr[element] * (x - y - 1), maxArea);
         }
        st.push(i);
     }

      while (!st.empty()) {
        int element = st.top();
        st.pop();
        int x = n;
        int y = st.empty() ? -1 : st.top();
        maxArea = max(maxArea, (x - y- 1) * arr[element]);
    }

    return maxArea;
    }
};

