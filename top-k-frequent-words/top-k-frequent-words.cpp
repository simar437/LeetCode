class Solution {
    
public:
    vector<string> topKFrequent(const vector<string>& words, const int k) {
        unordered_map<string_view, int> m;
        for (const auto& i : words)
        {
            m[i]++;
        }
        const auto cmp = [&](const auto& a, const auto& b){
            if (m[a] == m[b])
                return a < b;
            return m[a] > m[b];
        };
        const set<string_view, decltype(cmp)> s(begin(words), end(words), cmp);
        return vector<string>(begin(s), next(begin(s), k));
    }
};