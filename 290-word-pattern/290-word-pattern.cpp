class Solution {
public:
    bool wordPattern(const string& pattern, const string& s) {
        unordered_map<char, string_view> m1;
        unordered_map<string_view, char> m2;
        int i{}, j{}, k{};
        auto foo = [&](const string_view& str) {
            auto it1 = m1.find(pattern[k]);
            auto it2 = m2.find(str);
            if (
                        (
                            it1 != end(m1) && 
                            it1->second != str
                        )
                    ||
                        (
                            it2 != end(m2) && 
                            it2->second != pattern[k]
                        )
                   )
                    return false;
            return true;
        };
        for (; i < size(s) && k < size(pattern); i++)
        {
            if (s[i] == ' ')
            {
                string_view str(&s[j], i - j);
                if (!foo(str))
                    return false;
                m1[pattern[k]] = str;
                m2[str] = pattern[k++];
                j = ++i;
            }
        }
        string_view str(&s[j], i - j);
        return i == size(s) &&
            k == size(pattern) - 1 &&
            foo(str);
    }
};