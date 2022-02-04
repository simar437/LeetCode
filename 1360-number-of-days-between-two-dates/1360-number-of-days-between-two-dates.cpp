class Solution {
public:
    int daysBetweenDates(const string& date1, const string& date2) {
        tm t1{}, t2{};
        strptime(date1.c_str(), "%F", &t1);
        strptime(date2.c_str(), "%F", &t2);
        return abs(difftime(mktime(&t1), mktime(&t2)) / 86400);
    }
};