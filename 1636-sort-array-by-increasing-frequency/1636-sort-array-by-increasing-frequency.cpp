class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> m;
        for (const auto& i : nums)
            m[i]++;
        sort(begin(nums), end(nums), [&](const auto& a, const auto& b){
            int x = m[a], y = m[b];
            if (x == y)
                return a > b;
            return x < y;
        });
        return nums;
    }
};