class Solution {
public:
    string dayOfTheWeek(const int day, const int month, const int year) {
        constexpr array arr{"Sunday", "Monday", "Tuesday", "Wednesday",
                         "Thursday", "Friday", "Saturday"};
        tm start{};
        start.tm_year = year - 1900;
        start.tm_mon = month - 1;
        start.tm_mday = day;
        mktime(&start);
        return arr[start.tm_wday];
    }
};