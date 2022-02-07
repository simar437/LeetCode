class MyHashMap {
    const size_t size{100000};
    const hash<int> h;
    vector<int> v;
public:   
    MyHashMap() :v(size, -1) {}
    
    void put(int key, int value) {
        v[h(key) % size] = value;
    }
    
    int get(int key) {
        return v[h(key) % size];
    }
    
    void remove(int key) {
        v[h(key) % size] = -1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */