class Solution {
public:
    int calPoints(const vector<string>& ops) {
        vector<int> v;
        for (const auto& i : ops) {
            if (isdigit(i[0]) || i[0] == '-') {
                v.push_back(stoi(i));
            }
            else if (i == "C") {
                v.pop_back();
            }
            else if (i == "D") {
                v.push_back(v.back() * 2);
            }
            else {
                int n = size(v);
                v.push_back(v[n - 1] + v[n - 2]);
            }
        }
        return accumulate(begin(v), end(v), 0);
    }
};