class Solution {
    unordered_multimap<int, int> m;
    random_device rd{};
public:
    Solution(const vector<int>& nums) {
        for (int x{}; const auto& i : nums)
        {
            m.insert({i, x++});
        }
    }
    
    int pick(int target) {
        auto [begin, end] = m.equal_range(target);
        uniform_int_distribution<int> dist(0, distance(begin, end) - 1);
        return next(begin, dist(rd))->second;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */