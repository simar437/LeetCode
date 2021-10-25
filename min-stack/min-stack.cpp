class MinStack {
    vector<int> v;
    int m{INT_MAX};
    
public:
    void push(int val) {
        v.push_back(val);
        m = min(m, val);
    }
    
    void pop() {
        bool b = v.back() == m;
        v.pop_back();
        if (v.empty())
            m = INT_MAX;
        else if (b)
            m = *min_element(begin(v), end(v));
    }
    
    int top() {
        return v.back();
    }
    
    int getMin() {
        return m;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */