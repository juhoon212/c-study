#include <iostream>

class SoSimple {
    private:
        int num1;
        int num2;
    
    public:
        SoSimple() {};
        SoSimple(const int n1, const int n2): num1(n1), num2(n2) {}
        void showSimple() {
            std::cout << num1 << std::endl;
            std::cout << num2 << std::endl;
        }

        //copy constructor
        SoSimple(const SoSimple &copy): num1(copy.num1), num2(copy.num2) {}
};

int main() {

    SoSimple ex1(15, 30);
    SoSimple ex2 = ex1;
    ex2.showSimple();

    SoSimple ex3(ex1);
    ex3.showSimple();

    return 0;
}

