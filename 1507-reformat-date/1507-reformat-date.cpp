class Solution {
public:
    string reformatDate(string& date) {
        tm t{};
        date.erase(find_if(begin(date), end(date), [](const auto& x){
            return isalpha(x);
        }) - begin(date), 2);
        strptime(date.c_str(), "%d %b %Y", &t);
        stringstream ss;
        ss << put_time(&t, "%F");
        return ss.str();
    }
};