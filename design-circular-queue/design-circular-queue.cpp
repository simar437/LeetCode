class MyCircularQueue {
    vector<int> v;
    int k;
public:
    MyCircularQueue(int _k) 
    :k{_k} 
    {
        v.reserve(_k);
    }
    
    bool enQueue(int value) {
        if (isFull())
            return false;
        v.push_back(value);
        return true;
    }
    
    bool deQueue() {
        if (isEmpty())
            return false;
        v.erase(begin(v));
        return true;
    }
    
    int Front() {
        if (isEmpty())
            return -1;
        return v.front();   
    }
    
    int Rear() {
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
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */