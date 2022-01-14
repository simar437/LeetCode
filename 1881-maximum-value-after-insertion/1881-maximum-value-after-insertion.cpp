class Solution {
public:
    string& maxValue(string& str, int x) {
        int n = size(str);     
        bool isNegative = str.front() == '-';
        for (int i = isNegative; i < n; i++)
            {
                if (
                    (!isNegative && str[i] - '0' < x) || 
                    (isNegative && str[i] - '0' > x)
                   )
                {
                    str.insert(i, to_string(x));
                    break;
                }
            }
            if (n == size(str))
                str += to_string(x);
        return str;
    }
};