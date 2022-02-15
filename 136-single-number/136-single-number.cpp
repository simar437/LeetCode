class Solution {
public:
    int singleNumber(const vector<int>& nums) {
        int ans{};
        for (const auto& i : nums)
        {
            ans ^= i;
        }
        return ans;
    }
};