class Solution {
public:
    bool isPrefixString(const string& s, const vector<string>& words) {
        const int n = size(s);
        string temp;
        for (const auto& i : words)
        {
            if (size(temp) + size(i) > n)
                return false;
            temp += i;
            if (size(temp) == n)
                return temp == s;
        }
        return false;
    }
};