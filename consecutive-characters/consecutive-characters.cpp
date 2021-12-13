class Solution {
public:
    int maxPower(string& s) {
        unordered_multimap<char, int> m;
        char prev{};
        unordered_multimap<char, int>::iterator it;
        for (auto& i : s)
        {
            if (prev == i)
            {
                it->second++;
            }
            else
            {
                it = m.insert({ i, 1 });    
            }
            prev = i;
        }
        return max_element(begin(m), end(m), [](const auto& a, const auto& b) {
            return a.second < b.second;
            })->second;
    }
};