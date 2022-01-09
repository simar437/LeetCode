class Solution {
public:
    int numDifferentIntegers(const string& word) {
        set<string_view> s;        
        for (int i{}; i < size(word); i++)
        {
            if (isdigit(word[i]))
            {
                
                int j{i + 1};
                for (; j < size(word) && isdigit(word[j]); j++);
                string_view t(&word[i], j - i);
                t.remove_prefix(min(t.find_first_not_of('0'), size(t)));
                s.insert(t.empty() ? "0" : t);
                i = j;
            }
        }
        return size(s);
    }
};