
enum CAR_CONST {
    ID_LEN = 20,
    MAX_SPEED = 200,
    FUEL_STEP = 2,
    ACC_STEP = 10,
    BRK_STEP = 10
};



class Car { // 구조체는 접근제어자를 선언하지 않으면 public이지만 class는 private이다.

    private:
        char gamerId[CAR_CONST::ID_LEN];
        int fuelGauge;
        int curSpeed;
    public:
        Car() {};
        void initMembers(char *ID, int fuel);
        void showCarState();
        void Accel();
        void Break();

    
};



