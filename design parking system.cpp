class ParkingSystem {
public:
    vector<int> v;
    ParkingSystem(int big, int medium, int small) {
        v={big,medium,small};
    }
    
    bool addCar(int carType) {
        if(v[carType-1]!=0){
            int n=v[carType-1];
            v[carType-1]=n-1;
            return true;
        }
        
        return false;
    }
};
