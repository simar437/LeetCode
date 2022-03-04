class Solution {
public:
    int minimumSum(const int num) {
        auto x = to_string(num);
        sort(begin(x), end(x));
        return stoi(x.substr(0, 1) + x[2]) + stoi(x.substr(1, 1) + x[3]);
    }
};