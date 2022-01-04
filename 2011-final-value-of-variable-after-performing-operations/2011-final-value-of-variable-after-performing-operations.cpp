class Solution {
public:
    int finalValueAfterOperations(const vector<string>& operations) {
        int x{};
        for (const auto& i : operations)
        {
            if (i.front() == '+' || i.back() == '+')
                x++;
            else
                x--;
        }
        return x;
    }
};