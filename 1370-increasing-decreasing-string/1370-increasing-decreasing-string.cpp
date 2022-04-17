class Solution {
    map<char, int> m;
    string ans;
    template <typename It>
    void helper(It start, It finish) {
        vector<char> v;
        for (auto i = start; i != finish; i++) {
                ans += i->first;
                if (--i->second == 0) {
                    v.push_back(i->first);
                }
        }
        for (const auto& i : v) {
                m.erase(i);
        }
    }
public:
    string sortString(const string& s) {
        
        for (const auto& i : s) {
            m[i]++;
        }
        while (!m.empty()) {
            helper(begin(m), end(m));
            helper(rbegin(m), rend(m));
        }
        return ans;
    }
};