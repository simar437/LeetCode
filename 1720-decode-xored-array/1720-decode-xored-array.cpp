class Solution {
public:
    vector<int>& decode(vector<int>& encoded, int first) {
        encoded.insert(begin(encoded), first);
        first = 0;
        for (auto& i : encoded) {
            i ^= first;
            first = i;
        }
        return encoded;
    }
};