class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int bestBuy=prices[0], maxProfit=0;
        int profit;
        for(int i=1; i<n; i++) {
            if(prices[i] > bestBuy) {
                profit = prices[i] - bestBuy;
                maxProfit = max(profit,maxProfit);
            }
            bestBuy = min(bestBuy,prices[i]);
        }
        return maxProfit;
    }
};