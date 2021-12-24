class KthLargest {
    int k;
    vector<int>& arr;
public:
    KthLargest(int _k, vector<int>& nums) 
        :k{_k}, arr{nums} 
    {
        sort(begin(nums), end(nums));
    }
    
    int add(int val) {
        auto it = lower_bound(begin(arr), end(arr), val);
        arr.insert(it, val);
        return arr[size(arr) - k];
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */