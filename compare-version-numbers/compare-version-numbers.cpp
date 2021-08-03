class Solution {
    vector<int> func(string& s)
    {
        vector<int> v;
        string str;
        stringstream ss{s};
        while(getline(ss, str, '.'))
        {
            v.push_back(stoi(str));
        }
        while (v.size() > 0 && v.back() == 0)
            v.pop_back();
        return v;
    }
public:
    int compareVersion(string& version1, string& version2) {
        auto v1{func(version1)}, v2{func(version2)};
        if (v1 > v2)
            return 1;
        if (v1 < v2)
            return -1;
        return 0;
    }
};