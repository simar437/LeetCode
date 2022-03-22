class Solution {
public:
    string getSmallestString(int n, int k) {
        string ans(n, 'a');
        k -= n;
        while (k) {
            int x = min(25, k);
            ans[--n] += x;
            k -= x;
        }
        return ans;
    }
};