class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        array primes{2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
        int ans{};
        for (int i{left}; i <= right; i++)
        {
            ans += binary_search(begin(primes), end(primes), bitset<31>(i).count());
        }
        return ans;
    }
};