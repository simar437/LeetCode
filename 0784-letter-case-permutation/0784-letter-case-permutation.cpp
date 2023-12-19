class Solution {
    set<string> s;
    void permutation(string str, bool cap = false, int index = 0) {
        s.insert(str);
        if (index >= size(str)) {
            return;
        }
        if (isalpha(str[index])) {
            if (!cap) {
                auto copy = str;
                copy[index] = islower(str[index]) ? 
                    toupper(copy[index]) : tolower(copy[index]);
                
                permutation(copy, true, index);
                permutation(copy, false, index + 1);
            }
        }
        permutation(str, cap, index + 1);
    }
public:
    vector<string> letterCasePermutation(string str) {
        permutation(str);
        return {begin(s), end(s)};
    }
};