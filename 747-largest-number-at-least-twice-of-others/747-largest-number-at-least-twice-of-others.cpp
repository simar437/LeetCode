class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int max{}, secMax{}, index{};
        for (int x{}; const auto& i : nums) {
            if (i > max) {
                secMax = max;
                max = i;
                index = x;
            }
            else if (i > secMax) {
                secMax = i;
            }
            x++;
        }
        if (max / 2.0 >= secMax)
            return index;
        return -1;
    }
};