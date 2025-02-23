*******************************GFG POTD*************************
*	               T.C = O(N)							                * 
*	               							                        * 
*	               S.C = O(N)                                           * 
*	                                                                * 
*********************************************************************
class Solution {
  public:
    // Function to find the next greater element for each element of the array.
    vector<int> nextLargerElement(vector<int>& arr) {
        stack<int> st;
        int n = arr.size();
        vector<int> ans(n, 0);
        
        for(int i = n-1; i>=0; i--)
        {
            int element = arr[i];
            
            if(st.empty())
            {
                ans[i] = -1;
            }
            else
            {
                while(!st.empty() && st.top() <= element)
                {
                    st.pop();
                }
                
                if(st.empty())
                {
                    ans[i] = -1;
                }
                else
                {
                    ans[i] = st.top();
                }
            }
            
            st.push(element);
        }
        
        return ans;
    }
};