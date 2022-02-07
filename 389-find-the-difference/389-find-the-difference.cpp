class Solution {
public:
    char findTheDifference(const string& s, const string& t) {
        unordered_map<char, int> m;
        for (const auto& i : s)
            m[i]++;
        for (const auto& i : t)
            if (--m[i] < 0)
                return i;
        return {};
    }
};