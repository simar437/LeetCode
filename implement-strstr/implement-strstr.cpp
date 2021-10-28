class Solution {
public:
    int strStr(string& haystack, string& needle) {
        auto x = haystack.find(needle);
        return x != string::npos ? x : -1;
    }
};