class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int, int, greater<int>> m;
        int ans{-1};
        for (auto& i : arr)
            m[i]++;
        for (auto& [key, val] : m)
            if (key == val)
                return key;
        return -1;
    }
};