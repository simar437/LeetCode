class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        nth_element(begin(points), begin(points) + k, end(points), 
                    [](const auto& a, const auto& b){
                        auto first = pow(a[0], 2) +  pow(a[1], 2);
                        auto second = pow(b[0], 2) +  pow(b[1], 2);
                        return sqrt(first) < sqrt(second);
                    });
        return vector<vector<int>>(begin(points), begin(points) + k);
    }
};