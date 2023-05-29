class ParkingSystem {
    vector<int> parking;
public:
    ParkingSystem(int big, int medium, int small) {
        parking.resize(4);
        parking[1]= big;
        parking[2]= medium;
        parking[3]= small;
    }
    
    bool addCar(int carType) {
        if (parking[carType]) {
            parking[carType]--;
            return true;
        }
        return false;
    }
};
