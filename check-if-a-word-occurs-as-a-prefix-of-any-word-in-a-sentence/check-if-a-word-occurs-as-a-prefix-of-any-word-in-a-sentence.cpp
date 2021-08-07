class Solution {
public:
    int isPrefixOfWord(string& sentence, string& searchWord) {
        stringstream ss(sentence);
        string word;
        int i{1};
        int n = searchWord.size();
        for (; ss >> word; i++) {
            if (word.size() < n)
                continue;
            bool b{true};
            for (int j{}; j < n; j++)
            {
                if (word[j] != searchWord[j])
                {
                    b = false;
                    break;
                }
            }
            if (b)
                return i;
        }
        return -1;
    }
};