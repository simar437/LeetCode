class Solution {
public:
    bool isSubsequence(const string& s, const string& t) {
        int i{};
        for (int j{}; i < size(s) && j < size(t); j++)
        {
            if (s[i] == t[j])
                i++;
        }
        return i == size(s);
    }
};