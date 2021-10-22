class Solution {
public:
    string removeDuplicates(string& s) {
        for (int i{}; i < s.size() - 1 && !s.empty(); i++)
        {
            if (s[i] == s[i + 1])
            {
                s.erase(i, 2);
                i = i < 2 ? -1 : i - 2;
            }
        }
        return s;
    }
};