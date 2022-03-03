class SnapshotArray {
    vector<unordered_map<int, int>> snapshort;
    unordered_map<int, int> arr;
public:
    SnapshotArray(int length) {}
    
    void set(int index, int val) {
        arr[index] = val;
    }
    
    int snap() {
        snapshort.push_back(arr);
        return size(snapshort) - 1;
    }
    
    int get(int index, int snap_id) {
        return snapshort[snap_id][index];
    }
};

/**
 * Your SnapshotArray object will be instantiated and called as such:
 * SnapshotArray* obj = new SnapshotArray(length);
 * obj->set(index,val);
 * int param_2 = obj->snap();
 * int param_3 = obj->get(index,snap_id);
 */