class Solution {
    map<char, int> helper(string& s)
    {
        map<char, int> m;
        for (auto& i : s)
            m[i]++;
        return m;
    }
public:
    bool canConstruct(string& ransomNote, string& magazine) {
        auto m1{helper(ransomNote)}, m2{helper(magazine)};
        for (auto& i : m1)
        {
            if (int x = m2[i.first]; x == 0 || i.second > x)
                return false;
        }
        return true;
    }
};