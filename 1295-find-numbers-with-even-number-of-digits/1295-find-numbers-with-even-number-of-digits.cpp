class Solution {
public:
    int findNumbers(const vector<int>& nums) {
        int ans{};
        for (const auto& i : nums) {
            ans += to_string(i).size() % 2 == 0;
        }
        return ans;
    }
};