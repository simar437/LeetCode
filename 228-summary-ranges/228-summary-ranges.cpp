class Solution {
public:
    vector<string> summaryRanges(const vector<int>& nums) {
    vector<string> v;
    for (int i{}; i < size(nums); i++)
    {
        stringstream s;
        long int num{ nums[i] };
        int j{ i };
        s << num;
        for (; j < size(nums); j++)
        {
            if (nums[j] != num++)
                break;
        }
        if (i != j - 1)
        {
            s << "->" << nums[j - 1];
            i = j - 1;
        }
        v.push_back(s.str());
    }
    return v;
}
};