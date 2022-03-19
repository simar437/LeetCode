class FreqStack {
    vector<vector<int>> v;
    unordered_map<int, int> m;
public:
    void push(int val) {
        int t = m[val]++;
        if (t >= size(v)) {
            v.emplace_back(1, val);
        }
        else {
            v[t].push_back(val);
        }
    }

    int pop() {
        int num = v.back().back();
        m[num]--;
        v.back().pop_back();
        if (size(v.back()) == 0) {
            v.pop_back();
        }
        return num;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */