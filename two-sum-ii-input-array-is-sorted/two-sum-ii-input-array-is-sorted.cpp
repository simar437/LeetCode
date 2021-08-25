class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       map<int, int> m;
       for (int x{}; auto& i : nums)
       {
           if (m.count(i))
           {
               return {m[i] + 1, x + 1};
           }
           m[target - i] = x++;
       }
        return {0, 0};
    }
};