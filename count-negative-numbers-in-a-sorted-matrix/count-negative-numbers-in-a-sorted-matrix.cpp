class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int ans{};
        for (const auto& i : grid)
        {
            for (int j = size(i) - 1; j >= 0; j--)
            {
                if (i[j] < 0)
                    ans++;
                else
                    break;
            }
        }
        return ans;
    }
};