class Solution {
public:
    string kthLargestNumber(vector<string>& nums, int k) {
        auto m = begin(nums) + size(nums) - k;
        nth_element(begin(nums), m, end(nums), [](const auto& a, const auto& b){
            if (a.size() == b.size())
                return a < b;
            return a.size() < b.size();
        });
        return *m;
    }
};