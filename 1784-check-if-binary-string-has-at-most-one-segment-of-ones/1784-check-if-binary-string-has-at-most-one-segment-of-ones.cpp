class Solution {
public:
    bool checkOnesSegment(const string& s) {
        bool isPrevTrue{}, firstSegmentStarted{};
        for (const auto& i : s)
        {
            if (i == '1')
            {
                
                if (!isPrevTrue && firstSegmentStarted)
                    return false;
                firstSegmentStarted = true;
                isPrevTrue = true;
            }
            else
            {
                isPrevTrue = false;
            }
        }
        return true;
    }
};