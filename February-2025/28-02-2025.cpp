*******************************GFG POTD*************************
*	               T.C = O(N)							                * 
*	               							                        * 
*	               S.C = O(N)                                           * 
*	                                                                * 
*********************************************************************

class Solution {
  public:
    int evaluate(vector<string>& arr) {
        stack<string> st;
        
        for(string str : arr)
        {
            if(str == "+" || str == "-" || str == "*" || str == "/")
            {
                int val1 = stoi(st.top());
                st.pop();
                int val2 = stoi(st.top());
                st.pop();
                
                if(str == "+")
                {
                    st.push(to_string(val2 + val1));
                }
                else if(str == "-")
                {
                    st.push(to_string(val2 - val1));
                }
                else if(str == "*")
                {
                    st.push(to_string(val2 * val1));
                }
                else
                {
                    st.push(to_string(val2 / val1));
                }
            }
            else
            {
                st.push(str);
            }
        }
        
        return stoi(st.top());
    }
};