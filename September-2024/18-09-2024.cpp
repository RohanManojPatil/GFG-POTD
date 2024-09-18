
class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack<char> st;
        
        for(int i = 0; i<x.length(); i++)
        {
            char ch = x[i];
            
            if(ch == '{' || ch == '(' || ch == '[')
            {
                st.push(ch);
            }
            
            else if(ch == '}' && !st.empty() && st.top() == '{')
            {
                st.pop();
            }
            else if(ch == ']' && !st.empty() && st.top() == '[')
            {
                st.pop();
            }
            else if(ch == ')' && !st.empty() && st.top() == '(')
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }
        
        return st.empty();
    }

};