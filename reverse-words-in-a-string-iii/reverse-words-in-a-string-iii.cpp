class Solution {
public:
    string reverseWords(string& s) {
        stringstream ss(s);
        string ans;
        string word;
        while (ss >> word) 
        {
            for (int i = word.size() - 1; i >= 0; i--)
                ans += word[i];
            ans += ' ';
        }
        ans.pop_back();
        return ans;
    }
};