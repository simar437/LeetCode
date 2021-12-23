class MyCircularDeque {
    vector<int> v;
    int k;
public:
    MyCircularDeque(int _k) :k{_k} {
        v.reserve(_k);
    }
    
    bool insertFront(int value) {
        if (size(v) == k)
            return false;
        v.insert(begin(v), value);
        return true;
    }
    
    bool insertLast(int value) {
        if (size(v) == k)
            return false;
        v.push_back(value);
        return true;
    }
    
    bool deleteFront() {
        if (size(v) == 0)
            return false;
        v.erase(begin(v));
        return true;
    }
    
    bool deleteLast() {
        if (size(v) == 0)
            return false;
        v.pop_back();
        return true;
    }
    
    int getFront() {
        if (isEmpty())
            return -1;
        return v.front();        
    }
    
    int getRear() {
        if (isEmpty())
            return -1;
        return v.back();
    }
    
    bool isEmpty() {
        return v.empty();
    }
    
    bool isFull() {
        return size(v) == k;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */