*******************************GFG POTD*************************
*	               T.C = O(logn)							                * 
*	               							                        * 
*	               S.C = O(1)                                           * 
*	                                                                * 
*********************************************************************
// User function Template for C++
class Solution {
  public:
    double solve(double x, int y)
    {
        if(y == 0)
        {
            return 1.0;
        }
        if(y == 1)
        {
            return x;
        }
        
        double ans = solve(x, y/2);
        ans = ans * ans;
        
        if(y&1)
        {
            return ans * x;
        }
        else
        {
            return ans;
        }
    }
    double power(double b, int e) {
        if(e == 0)
        {
            return 1.0;
        }
        if(e<0)
        {
           b = 1/b;
           e=-e;
        }
        
        return solve(b, e);
    }
};