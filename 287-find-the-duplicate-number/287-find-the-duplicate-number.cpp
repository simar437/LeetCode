class Solution {
public:
    int findDuplicate(const vector<int>& nums) {
        unordered_set<int> s;
        for (const auto& i : nums) {
            if (!s.insert(i).second)
                return i;
        }
        return {};
    }
};