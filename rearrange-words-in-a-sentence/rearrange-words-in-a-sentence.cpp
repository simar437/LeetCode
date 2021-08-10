class Solution {
public:
    string arrangeWords(string& word) {
        auto compare = [] (auto& a, auto& b){
            return a.size() < b.size();
        };
        std::multiset<std::string, decltype(compare)> m{compare};
        stringstream ss(word);
        while (ss >> word) 
        {
            m.insert(word);
        }
        word.clear();
        for (auto& i : m)
        {
            auto t = i;
            if (isupper(i[0])) 
                t[0] += 32;
            word += t + ' ';
        }
        word[0] = toupper(word[0]);
        word.pop_back();
        return word;
    }
};