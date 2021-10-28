class Solution {
public:
    string reverseVowels(string& s) {
        vector<int> v;
        array vowels{ 'a', 'e', 'i', 'o', 'u' };
        auto start{ begin(vowels) }, finish{ end(vowels) };
        for (int i{}; i < s.size(); i++)
        {
            if (find(start, finish, tolower(s[i])) != finish)
            {
                v.push_back(i);
            }
        }
        for (int i{}, j = v.size() - 1; i < j; i++, j--)
        {
            swap(s[v[i]], s[v[j]]);
        }
        return s;
    }
};