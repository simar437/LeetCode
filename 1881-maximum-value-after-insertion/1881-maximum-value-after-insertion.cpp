class Solution {
public:
    string& maxValue(string& str, int x) {
        int n = size(str);
        if (str.front() != '-')
        {
            for (int i{}; i < n; i++)
            {
                if (str[i] - '0' < x)
                {
                    str.insert(i, to_string(x));
                    break;
                }
            }
            if (n == size(str))
                str += to_string(x);
        }
        else
        {
            for (int i{1}; i < n; i++)
            {
                if (str[i] - '0' > x)
                {
                    str.insert(i, to_string(x));
                    break;
                }
            }
            if (n == size(str))
                str += to_string(x);
        }
        return str;
    }
};