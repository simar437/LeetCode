class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int ans{};
        int n = nums.size();
        vector<bool> b(n - 1);
        for (auto& i : nums)
        {
            if (b[i - 1] == true)
                ans = i;
            b[i - 1] = true;
        }
        for (int i{}; i < n - 1; i++)
        {
            if (!b[i])
            {
                return {ans, i + 1};
            }
        }
        return {ans, n};
    }
};