class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        sort(words[0].begin(), words[0].end());
        string s(words[0]);
        for (int i{1}; i < words.size(); i++)
        {
            auto& x = words[i];
            string t;
            sort(x.begin(), x.end());
            set_intersection(s.begin(), s.end(), x.begin(), x.end(), back_inserter(t));
            if (t == "")
                return vector<string>();
            s = t;
        }
        vector<string> v;
        for (auto& i : s)
            v.emplace_back(1, i);
        return v;
    }
};