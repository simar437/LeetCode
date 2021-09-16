class Solution {
    map<string, int> m;
    void helper(string& s)
    {
        stringstream ss(s);
        string word;
        while (ss >> word) 
        {
            m[word]++;
        }
    }
public:
    vector<string> uncommonFromSentences(string& s1, string& s2) {
        helper(s1);
        helper(s2);
        vector<string> v;
        for (auto& i : m)
        {
            if (i.second == 1)
                v.emplace_back(i.first);
        }
        return v;
    }
};