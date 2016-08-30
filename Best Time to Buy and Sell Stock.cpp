//Best Time to Buy and Sell Stock
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = prices.size();
        int MIN = INT_MAX;
        int result = 0;
        for(int i = 0;i<l;i++)
        {
            if(prices[i]<MIN)
            {
                MIN = prices[i];
               
            }
            if(result<prices[i]-MIN)
            {
                result = prices[i]-MIN;
            }
        }
        return result;
    }
};