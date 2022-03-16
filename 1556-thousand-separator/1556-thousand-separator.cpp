class Solution {
public:
    string thousandSeparator(int n) {
        string num = to_string(n);;
        for (int i = size(num) - 1, x{}; i >= 0; i--, x++) {
            if (x % 3 == 0 && x != 0) {
                num.insert(begin(num) + i + 1, '.');
            }
        }
        return num;
    }
};