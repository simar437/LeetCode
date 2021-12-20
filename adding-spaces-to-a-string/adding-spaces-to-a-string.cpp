class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string ans(size(s) + size(spaces), '\0');
        for (int i{}; i < size(spaces); i++)
        {
            ans[spaces[i] + i] = ' ';
        }
        for (int x{}; auto& i : ans)
        {
            if (i == '\0')
            {
                i = s[x++];
            }
        }
        return ans;
    }
};