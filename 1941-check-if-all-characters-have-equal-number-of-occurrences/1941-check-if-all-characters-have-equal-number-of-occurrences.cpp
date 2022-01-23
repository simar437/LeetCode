class Solution {
public:
    bool areOccurrencesEqual(const string& s) {
        unordered_map<char, int> m;
        for (const auto& i : s)
        {
            m[i]++;
        }
        int check = m[s.front()];
        for (const auto& [_, count] : m)
        {
            if (count != check)
                return false;
        }
        return true;
    }
};