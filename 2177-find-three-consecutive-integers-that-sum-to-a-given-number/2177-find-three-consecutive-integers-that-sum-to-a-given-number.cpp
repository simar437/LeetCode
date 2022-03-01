class Solution {
public:
    vector<long long> sumOfThree(const long long num) {
        auto x = num / 3;
        if (num / 3.0 != x)
            return {};
        return {x - 1, x, x + 1};
    }
};