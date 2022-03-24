class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(begin(people), end(people));
        int ans{};
        int start{}, end = size(people) - 1;
        while (start <= end) {
            if (people[start] + people[end] <= limit) {
                start++;
                end--;
            }
            else {
                end--;
            }
            ans++;
        }
        return ans;
    }
};