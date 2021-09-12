class Solution {
public:
    string customSortString(string& order, string& s) {
        map<char, int> m;
        for (int x{1}; auto& i : order)
        {
            m[i] = x++;
        }
        sort(begin(s), end(s), [&] (const auto& a, const auto& b) {
            int x = m[a], y = m[b];
            x = x == 0 ? INT_MAX : x;
            y = y == 0 ? INT_MAX : y;
            return x < y;
        });
        return s;
    }
};