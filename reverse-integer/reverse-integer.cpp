class Solution {
public:
    int reverse(int x) {
        bool negative = x < 0;
        auto num{to_string(x)};
        std::reverse(begin(num), end(num));
        int zeros{};
        for (int i{}; i < num.size() && num[i] == 0; i++, zeros++);
        num.erase(0, zeros);
        if (negative)
            num.pop_back();
        try
        {
            x = stoi(num);
        }
        catch (out_of_range&)
        {
            x = 0;
        }
        x = negative ? -x : x;
        return x;
    }      
};