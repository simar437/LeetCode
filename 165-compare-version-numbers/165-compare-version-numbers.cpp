class Solution {
    vector<int> func(const string& s) {
        vector<int> v;
        string str;
        stringstream ss{s};
        while(getline(ss, str, '.'))
        {
            v.push_back(stoi(str));
        }
        while (size(v) > 0 && v.back() == 0)
            v.pop_back();
        return v;
    }
public:
    int compareVersion(const string& version1, const string& version2) {
        auto v1{func(version1)}, v2{func(version2)};
        if (v1 > v2)
            return 1;
        if (v1 < v2)
            return -1;
        return 0;
    }
};