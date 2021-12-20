class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        if (m * n != size(original))
            return {};
        vector<vector<int>> ans(m, vector<int>(n));
        for (int x{}; auto& i : ans)
        {
            for (auto& j : i)
            {
                j = original[x++];
            }
        }
        return ans;
    }
};