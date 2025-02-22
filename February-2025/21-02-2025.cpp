*******************************GFG POTD*************************
*	               T.C = O(N)							                * 
*	               							                        * 
*	               S.C = O(N)                                           * 
*	                                                                * 
*********************************************************************

class Solution {
  public:
    bool isBalanced(string& s) {
        stack<char> st;
        
        for(char ch : s)
        {
            if(ch == '[' || ch == '{' || ch == '(')
            {
                st.push(ch);
            }
            else
            {
                char top;
                if(st.size() > 0)
                {
                    top = st.top();
                }
                else
                {
                    return false;
                }
                if((ch == ']' && top == '[') || (ch == '}' && top == '{') || (ch == ')' && top == '('))
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
        }
        
        return st.size() == 0 ? true : false;
    }
};