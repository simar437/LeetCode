class Solution {
public:
    char nextGreatestLetter(const vector<char>& letters, const char target) {
        auto x = upper_bound(begin(letters), end(letters), target);
        return x != end(letters) ? *x : letters.front();
    }
};