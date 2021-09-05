class Solution {
public:
    string toHex(int num) {
        stringstream ss;
        ss << hex << num;
        return ss.str();
    }
};