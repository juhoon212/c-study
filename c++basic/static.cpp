#include <iostream>

class SoSimple
{
    private:
        static int num1;
    public:
        SoSimple() {}

        static void print() {
            std::cout << num1 << std::endl;
        }
};


int SoSimple::num1 = SoSimple::num1 - 1;

int main(void) {
    SoSimple::print();
}