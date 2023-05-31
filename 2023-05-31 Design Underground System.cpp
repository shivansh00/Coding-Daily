class UndergroundSystem {
    map<pair<string, string>, vector<int>> travelTime;
    map<int, pair<string, int>> passenger;
    double findAvg(vector<int> &times) {
        double avg= accumulate(times.begin(), times.end(), 0);
        avg/= times.size();
        return avg;
    }
public:
    void checkIn(int id, string stationName, int t) {
        passenger[id]= {stationName, t};
    }
    
    void checkOut(int id, string stationName, int t) {
        travelTime[{passenger[id].first, stationName}].push_back(t - passenger[id].second);
    }
    
    double getAverageTime(string startStation, string endStation) {
        return findAvg(travelTime[{startStation, endStation}]);
    }
};
