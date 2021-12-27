class Solution {
public:
    string reverseStr(string& s, int k) {
        for (int i{}; i < size(s); i += 2 * k)
        {
            auto start = begin(s) + i;
            auto finish = start + k < end(s) ? start + k : end(s);
            reverse(start, finish);
        }
        return s;
    }
};