class Solution {
public:
    int thirdMax(const vector<int>& nums) {
        set<int> s(begin(nums), end(nums));
        if (size(s) < 3)
            return *prev(end(s), 1);
        return *next(begin(s), size(s) - 3);
    }
};