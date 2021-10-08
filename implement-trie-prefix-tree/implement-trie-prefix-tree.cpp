class Trie {
    set<string> s;
public:    
    void insert(string&& word) {
        s.insert(word);
    }
    
    bool search(string&& word) {
        return s.find(word) != s.end();
    }
    
    bool startsWith(string&& prefix) {
        auto x = s.lower_bound(prefix);
        auto y = *x;
        int n = prefix.size();
        return x != s.end() &&
            y.size() >= n &&
            string_view(&y[0], n) == prefix;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */