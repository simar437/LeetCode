class MyStack {
    queue<int> q;
public:    
    void push(int x) {
        q.push(x);
        int n = size(q);
        while (n --> 1) {
            q.push(q.front());
            q.pop();
        }
    }
    
    int pop() {
        auto x = q.front();
        q.pop();
        return x;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */