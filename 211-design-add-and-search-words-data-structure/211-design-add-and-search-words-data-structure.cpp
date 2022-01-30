class WordDictionary {
    struct trie {
        array<shared_ptr<trie>, 26> arr{};
        bool isEnd{};
    };
    shared_ptr<trie> words = make_shared<trie>();
    string_view str;
    bool helper(shared_ptr<trie> node, int index = 0)
    {
        if (node == nullptr)
            return false;
        if (index == size(str))
            return node->isEnd;
        if (str[index] == '.')
        {
            for (const auto& i : node->arr)
            {
                if (i != nullptr && helper(i, index + 1))
                    return true;
            }
            return false;
        }
        return helper(node->arr[str[index] - 'a'], index + 1);
    }
public:
    void addWord(const string& word) {
        auto temp = words;
        for (const auto& i : word)
        {
            auto& ch = temp->arr[i - 'a'];
            if (ch == nullptr)
            {
                ch = make_shared<trie>();
            }
            temp = ch;
        }
        temp->isEnd = true;
    }
    
    bool search(const string& word) {
        str = word;
        return helper(words);
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */