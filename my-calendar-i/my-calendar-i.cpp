class MyCalendar {
    vector<pair<int, int>> v;
public:
    bool book(int start, int end) {
       for (auto& [prevStart, prevEnd] : v)
       {
           if ((start >= prevStart && start < prevEnd) || 
               (end > prevStart && start < prevStart))
               return false;
       }
       v.emplace_back(start, end);
       return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */