class Solution {
    array<int, 5> arr{6, 28, 496, 8128, 33550336};
public:
    bool checkPerfectNumber(int num) {
        return binary_search(begin(arr), end(arr), num);
    }
};