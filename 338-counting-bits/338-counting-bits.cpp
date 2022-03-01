class Solution {
public:
    vector<int> countBits(const int n) {
        vector<int> ans(n + 1);
        for (int x{}; auto& i : ans) {
            i = bitset<17>(x++).count();
        }
        return ans;
    }
};