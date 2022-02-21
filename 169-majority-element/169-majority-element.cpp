class Solution {
public:
    int majorityElement(const vector<int>& nums) {
        unordered_map<int, int> m;
        for (const auto& i : nums)
            m[i]++;
        return max_element(begin(m), end(m), [](const auto& a, const auto& b){
            return a.second < b.second;
            })->first;
    }
};