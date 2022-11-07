class Solution {
public:
    int maximum69Number (int num) {
        string s{to_string(num)};
        if (auto x = s.find('6'); x != string::npos)
            s.replace(x, 1, "9");
        return stoi(s);
    }
};