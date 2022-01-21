class Solution {
public:
    int nextGreaterElement(int n) {
        auto num = to_string(n);
        bool b = next_permutation(begin(num), end(num));
        auto x = stoull(num);
        if (
                !b ||
                x == n ||
                x > INT_MAX
           )
            return -1;
        return x;
    }
};