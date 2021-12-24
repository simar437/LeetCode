class MagicDictionary {
    vector<string> v;
public:
        
    void buildDict(const vector<string>& dictionary) {
        v =  dictionary;
    }
    
    bool search(const string& word) {
        int n = size(word);
        for (auto& i : v)
        {
            if (size(i) == n)
            {
                bool b{true}, ans{true};
                for (int j{}; j < n; j++)
                {
                    if (i[j] != word[j])
                    {
                        if (!b)
                        {
                            ans = false;
                            break;
                        }
                        b = false;
                    }
                }
                if (ans && !b)
                    return true;
            }
        }
        return false;
    }
};

/**
 * Your MagicDictionary object will be instantiated and called as such:
 * MagicDictionary* obj = new MagicDictionary();
 * obj->buildDict(dictionary);
 * bool param_2 = obj->search(searchWord);
 */