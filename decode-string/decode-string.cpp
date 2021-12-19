class Solution {

    string repeat(string_view s, int n)
    {
        string ans;
        while (n--)
        {
            ans += s;
        }
        return ans;
    }
public:
    string decodeString(string& str) {
        stack<pair<int, string>> s; // index, num
        string tempDigit;
        for (int i{}; i < size(str); i++)
        {
            if (isdigit(str[i]))
            {
                tempDigit += str[i];
            }
            if (str[i] == '[')
            {
                s.push({ i - size(tempDigit), tempDigit });
                tempDigit.clear();
            }
            if (str[i] == ']')
            {
                auto &[index, num] = s.top();
                str.replace(begin(str) + index,
                    begin(str) + i + 1,
                    repeat({ 
                        &str[index + size(num) + 1],
                        static_cast<size_t>(i - index - size(num) - 1)
                    },
                        stoi(num))
                );
                i = index;
                s.pop();
            }
        }
        return str;
    }
};