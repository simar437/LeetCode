class Solution {
public:
    string reversePrefix(string word, char ch) {
        auto start = begin(word), finish = end(word);
        auto x = find(start, finish, ch);
        if (x == finish) {
            return word;
        }
        reverse(start, x + 1);
        return word;
    }
};