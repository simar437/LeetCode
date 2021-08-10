class Solution {
public:
    string arrangeWords(string& word) {
        auto compare = [] (auto& a, auto& b){
            return a.size() < b.size();
        };
        std::multiset<std::string, decltype(compare)> m{compare};
        word[0] = tolower(word[0]);
        stringstream ss(word);
        while (ss >> word) 
        {
            m.insert(word);
        }
        word.clear();
        for (auto& i : m)
        {
            word += i + ' ';
        }
        word[0] = toupper(word[0]);
        word.pop_back();
        return word;
    }
};