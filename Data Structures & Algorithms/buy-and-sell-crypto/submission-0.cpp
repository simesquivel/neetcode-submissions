class Solution {
public:
    void solve(vector<int>& prices, int i, int &minPrice, int &maxProfit){
        if(i == prices.size()) return;

        if(prices[i] < minPrice) minPrice = prices[i];

        int currProfit = prices[i] -  minPrice;

        if(currProfit > maxProfit) maxProfit = currProfit;

        solve(prices, i+1, minPrice, maxProfit);
    }

    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProfit = 0;

        solve(prices, 0, minPrice, maxProfit);

        return maxProfit;
    }
};
