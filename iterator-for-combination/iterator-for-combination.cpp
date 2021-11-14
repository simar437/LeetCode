class CombinationIterator {
    vector<int> v;
    string chars;
    int size;
public:
    CombinationIterator(string characters, int combinationLength)
        :chars{ characters }, v(combinationLength), size{ combinationLength } {
        iota(begin(v), end(v), 0);
    }

    string next() {
        string ans;
        for (auto& i : v)
            ans += chars[i];
        int n = chars.size();
        if (v[size - 1] == n - 1)
        {
            bool b{ true };
            for (int i{ size - 1 }, j{ 1 }; i >= 0; i--, j++)
            {
                if (v[i] != n - j)
                {
                    b = false;
                    v[i]++;
                    j = 0;
                    while (i + j < size)
                    {
                        v[i + j] = v[i] + j;
                        j++;
                    }
                    break;
                }
            }
            if (b)
            {
                v[0] = -1;
            }
        }
        else
        {
            v[size - 1]++;
        }
        return ans;
    }

    bool hasNext() {
        return v[0] != -1;
    }
};
/**
 * Your CombinationIterator object will be instantiated and called as such:
 * CombinationIterator* obj = new CombinationIterator(characters, combinationLength);
 * string param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */