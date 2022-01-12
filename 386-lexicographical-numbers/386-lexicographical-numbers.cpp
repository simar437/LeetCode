class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<int> ans(n);
        iota(begin(ans), end(ans), 1);
        sort(begin(ans), end(ans), [](const auto& a, const auto& b){
            return to_string(a) < to_string(b);
        });
        return ans;
    }
};