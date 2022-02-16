class Solution {
public:
    bool areNumbersAscending(string& s) {
        regex r{"[0-9]+"};
        const auto start = sregex_iterator(begin(s), end(s), r);
        const auto finish = sregex_iterator();
        int num{-1};
        for (auto i{start}; i != finish; i++)
        {
            int x = stoi(i->str());
            if (x <= num)
                return false;
            num = x;
        }
        return true;
    }
};