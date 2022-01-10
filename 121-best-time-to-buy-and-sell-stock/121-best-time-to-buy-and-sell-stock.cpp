class Solution {
public:
    int maxProfit(const vector<int>& prices) {
        int profit{};
        int lowest{INT_MAX};
        for (const auto& i : prices)
        {
            profit = max(profit, i - lowest);
            lowest = min(lowest, i);
        }
        return profit;
    }
};