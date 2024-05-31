#include <iostream>

int Adder(const int &num1, const int &num2);

int main() {

    const int &ref1 = 30; // const 키워드를 통해서 literal도 참조할 수 있다.
    const int &ref2 = 20;

    int result = Adder(ref1, ref2);
    
    std::cout << "result = " << result << std::endl;
    
    return 0;
}

int Adder(const int &num1, const int &num2) {
    return num1 + num2;
}