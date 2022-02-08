class Solution {
public:
    int addDigits(int num) {
        if (num < 10)
            return num;
        int sum{};
        while (num)
        {
            sum += num % 10;
            num /= 10;
        }
        return addDigits(sum);
    }
};