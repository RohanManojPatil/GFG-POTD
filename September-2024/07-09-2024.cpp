// User function Template for C++

class Solution {
  public:
    long long findNth(long long n) {
        long long result=0;
        long long place=1;
        while(n>0){
            result+=(n%9)*place;
            n /=9;
            place*=10;
        }
        return result;
    }
};