class UndergroundSystem {
    unordered_map<int, pair<string, int>> person;
    unordered_map<string, unordered_map<string, vector<int>>> trainTimes;
public:    
    void checkIn(int id, string stationName, int t) {
        person[id] = {stationName, t};
    }
    
    void checkOut(int id, string endStation, int t) {
        const auto& [startStation, startTime] = person[id];
        int timeTaken = t - startTime;
        trainTimes[startStation][endStation].push_back(timeTaken);
    }
    
    double getAverageTime(string startStation, string endStation) {
        const auto& x = trainTimes[startStation][endStation];
        return accumulate(begin(x), end(x), 0.0) / size(x);
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */