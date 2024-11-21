*******************************GFG POTD*************************
*	               T.C = O(n)							                * 
*	               							                        * 
*	               S.C = O(1)                                           * 
*	                                                                * 
*********************************************************************

class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        int profit=0;
        int i=0;
        while(i<prices.size()-1){
            //Find the local minimum (buy point)
            while(i<prices.size()-1 && prices[i]>=prices[i+1]){
                i++;
            }
            int buy=i;
            //Find the local maximum (sell point)
            while(i<prices.size()-1 && prices[i]<=prices[i+1]){
                i++;
            }
            int sell=i;
            //Calculate profit if a valid transaction exists
            profit+=prices[sell]-prices[buy];
        }
        return profit;
    }
};