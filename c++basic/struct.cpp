#include <iostream>

using namespace std;

struct Car {
    char gamerID[6];
    int fuelGauge;
    int curSpeed;

    void ShowCarState() {
        cout << "소유자ID: " << gamerID << endl;
        cout << "연료량: " << fuelGauge << "%" << endl;
        cout << "현재속도: " << curSpeed << "km/s" << endl << endl;
    }

    enum {
        ID_LEN = 20,
        MAX_SPD = 200,
        FUEL_STEP = 2,
        ACC_STEP = 10,
        BRK_STEP = 10
    };
};

int main() {
    
        Car run99 = {"run99", 100, 0};
        run99.ShowCarState();
    
        return 0;
}