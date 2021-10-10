class Solution {
    int n;
    map<int, int> m;
    int helper(vector<int>& cost, int current)
    {
        if (auto it = m.find(current); it != m.end())
            return it->second;
        if (current == n)
        {
            return 0;
        }
        if (current > n)
        {
            return INT_MAX;
        }
        m[current] = min(helper(cost, current + 1), helper(cost, current + 2)) + cost[current];
        return m[current];
    }
public:
    int minCostClimbingStairs(vector<int>& cost) {
        n = cost.size();
        return min(helper(cost, 0), helper(cost, 1));
    }
};