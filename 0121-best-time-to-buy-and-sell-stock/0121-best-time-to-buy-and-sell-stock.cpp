class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minimum = INT_MAX;
        int maxprofit = 0;
        for(int price : prices){
            minimum = min(price, minimum);
            maxprofit = max(maxprofit, price-minimum);
        }
        return maxprofit;
    }
};