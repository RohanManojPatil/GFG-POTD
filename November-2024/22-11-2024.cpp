*******************************LEETCODE POTD*************************
*	               T.C = O(n)							                * 
*	               							                        * 
*	               S.C = O(1)                                           * 
*	                                                                * 
*********************************************************************
class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        // code here
        int maxCount = 0;
        int buyPrice = prices[0];
        for(int i = 1;i<prices.size();i++) {
            if(prices[i] > buyPrice) {
                maxCount =  max(prices[i] - buyPrice,maxCount);
            } else {
                buyPrice =  prices[i];
            } 
        }
        
        return maxCount;
    }
};