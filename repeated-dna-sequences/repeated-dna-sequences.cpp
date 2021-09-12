class Solution {
public:
    vector<string> findRepeatedDnaSequences(string_view s) {
        map<string_view, int> m;
        int n = s.size() - 9;
        for (int i{}; i < n; i++)
        {
            m[{&s[i], 10}]++;
        }
        vector<string> v;
        for (auto& [key, val] : m)
        {
            if (val > 1)
            {
                v.emplace_back(key);
            }
        }
        return v;
    }
};