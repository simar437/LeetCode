class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        deque<pair<int, int>> d;
        {
            map<int, int> m;
            for (auto& i : arr)
                m[i]++;
            d = deque<pair<int, int>>(begin(m), end(m));
        }
        sort(begin(d), end(d), [] (const auto& a, const auto& b){
                return a.second < b.second;
            });
        int x = d[0].second;
        while (x <= k)
        {
            k -= x;
            d.pop_front();
            if (d.empty())
                break;
            x = d[0].second;
        }
        return d.size();
    }
};