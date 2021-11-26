class Solution {
    int m, n;
    random_device r;
    uniform_int_distribution<int> d1, d2;
    set<pair<int, int>> s;
public:
    Solution(int _m, int _n) 
    : m{_m}, n{_n}, d1(0, _m - 1), d2(0, _n - 1) {}
    
    vector<int> flip() {
        int i{d1(r)}, j{d2(r)};
        while (s.find({i, j}) != s.end())
        {
            i = d1(r);
            j = d2(r);
        }
        s.emplace(i, j);
        return {i, j};
    }
    
    void reset() {
        s.clear();
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(m, n);
 * vector<int> param_1 = obj->flip();
 * obj->reset();
 */