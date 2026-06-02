class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int ans = 0;
        int cost = prices[0];
        for(int i = 1; i<n; i++){
            int profit = prices[i]-cost;
            ans = max(profit,ans);
            cost = min(cost,prices[i]);
        }
        return ans;
    }
};
