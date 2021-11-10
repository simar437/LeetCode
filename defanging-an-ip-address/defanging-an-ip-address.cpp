class Solution {
public:
    string defangIPaddr(string& address) {
        regex r{R"(\.)"};
        return regex_replace(address, r, "[.]");
    }
};