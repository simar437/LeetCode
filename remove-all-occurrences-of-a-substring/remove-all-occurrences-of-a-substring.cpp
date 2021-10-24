class Solution {
public:
    string removeOccurrences(string& s, string& part) {
        auto n = part.size();
        while (true)
        {
            auto x = s.find(part);
            if (x == string::npos)
                break;
            s.erase(x, n);
        }
        return s;
    }
};