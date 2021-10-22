class Solution {
public:
    string frequencySort(string& s) {
        map<char, int> m;
        for (auto& i : s)
            m[i]++;
        vector<pair<char, int>> v(begin(m), end(m));
        sort(begin(v), end(v), [] (const auto& a, const auto& b) {
            return a.second > b.second;
        });
        string ans;
        for (auto& [ch, count] : v)
        {
            ans += string(count, ch);
        }
        return ans;
    }
};