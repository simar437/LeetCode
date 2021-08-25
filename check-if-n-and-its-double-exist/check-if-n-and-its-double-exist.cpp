class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        set<int> s;
        for (auto& i : arr)
        {
            if (s.count(i * 2) || (i % 2 == 0 && s.count(i / 2)))
            {
                return true;
            }
            s.insert(i);
        }
        return false;
    }
};