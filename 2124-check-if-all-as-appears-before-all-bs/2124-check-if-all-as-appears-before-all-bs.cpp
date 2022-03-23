class Solution {
public:
    bool checkString(const string& s) {
        bool bEncountered{};
        for (const auto& i : s) {
            if (i == 'a' && bEncountered)
                return false;
            if (i == 'b')
                bEncountered = true;
        }
        return true;
    }
};