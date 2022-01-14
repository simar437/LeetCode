class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        map<int, int, greater<int>> m;
        for (int i{1}; i < size(arr); i++)
        {
            m[arr[i]] = i;
        }
        auto it = begin(m);
        for (int i{}; i < size(arr) - 1 && it != end(m); i++)
        {
            while (i >= it->second)
                advance(it, 1);
            arr[i] = it->first;
        }
        arr[size(arr) - 1] = -1;
        return arr;
    }
};