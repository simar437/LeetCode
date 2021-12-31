class Solution {
public:
    vector<int>& relativeSortArray(vector<int>& arr1, const vector<int>& arr2) {
        unordered_map<int, int> m;
        for (int i{}; i < size(arr2); i++)
        {
            m[arr2[i]] = i;
        }
        sort(begin(arr1), end(arr1),
             [&](const auto& a, const auto& b){
                 auto it1 = m.find(a);
                 auto it2 = m.find(b);
                 if (it1 != end(m) && it2 != end(m))
                 {
                     return it1->second < it2->second;
                 }
                 if (it1 != end(m))
                 {
                     return true;
                 }
                 if (it2 != end(m))
                 {
                     return false;
                 }
                 return a < b;
             });
        return arr1;
    }
};