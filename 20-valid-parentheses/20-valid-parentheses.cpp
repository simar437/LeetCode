class Solution {
public:
    bool isValid(const string& s) {
        stack<char> p;
        p.push('0');
        for (const auto& i : s)
        {
            if (i == '(' || i == '{' || i == '[')
                p.push(i);
            else if (
                     i == ')' && p.top() == '(' ||
                     i == '}' && p.top() == '{' ||
                     i == ']' && p.top() == '['
                    ) 
                p.pop();
            else
                return false;
        }
        return size(p) == 1;
    }
};