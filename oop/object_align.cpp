#include <iostream>

class Cat {
    public:
        void speak();
    private:
        double d8; // 순서에 따라서 메모리 크기가 달라짐
        int i4a;
        int i4b; // => 16 byte

        // int i4a;
        // double d8;
        // int i4b; => 24 byte padding 때문에(가장 큰 멤버변수의 크기의 배수에서 메모리는 끝나야 한다!)
};


int main() {

    Cat stackCat;
    std::cout << sizeof(stackCat) << std::endl;

    return 0;  
}