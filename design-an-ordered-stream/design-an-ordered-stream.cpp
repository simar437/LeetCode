class OrderedStream {
public:
    vector<string> v;
    int index{};
    OrderedStream(int n)
        :v(n) {}

    vector<string> insert(int idKey, string value) {
        v[idKey - 1] = value;
        if (v[index].empty())
            return {};
        vector<string> ans;
        while (index < v.size() && !v[index].empty())
        {
            ans.push_back(v[index++]);
        }
        return ans;
    }
};

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(idKey,value);
 */