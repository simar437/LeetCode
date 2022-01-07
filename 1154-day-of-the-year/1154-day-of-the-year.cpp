class Solution {
public:
    int dayOfYear(const string& date) {
        tm t{};
        strptime(date.c_str(), "%F", &t);
        mktime(&t);
        return t.tm_yday + 1;
    }
};