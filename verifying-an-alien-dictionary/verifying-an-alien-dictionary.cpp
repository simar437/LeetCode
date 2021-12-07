class Solution {
public:
    bool isAlienSorted(vector<string>& words, string& order) {
        unordered_map<char, int> m;
        for (int x{}; auto& i : order)
            m[i] = x++;
        return is_sorted(begin(words), end(words), [&](const auto& a, const auto& b) {
            return lexicographical_compare(begin(a), end(a),
                begin(b), end(b), [&](const auto& x, const auto& y) {
                    return m[x] < m[y];
                });
            }
        );
    }
};