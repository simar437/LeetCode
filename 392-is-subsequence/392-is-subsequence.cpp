class Solution {
public:
    bool isSubsequence(const string& s, const string& t) {
        int i{};
        const int n1 = size(s), n2 = size(t);
        for (int j{}; i < n1 && j < n2; j++)
        {
            if (s[i] == t[j])
                i++;
        }
        return i == n1;
    }
};