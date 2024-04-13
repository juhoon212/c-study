#include <iostream>

// 메모리는 타입에 따라 패딩이 중간에 들어갈 수 있다.
// 구조체 안의 가장 큰 타입의 배수로 메모리는 끝나야 한다.
class Cat {
    public:
        void printCat(); // 함수는 클래스 사이즈와는 전혀 상관 x
    private:
        int age; // 4
        float weight; // 4
};


// struct ST
// {
//     int a; // 64비트 환경 8
//     long b; // 4
//     char c; // 2
// };


int main() {

    // std::cout << sizeof(ST) << std::endl; 
    std::cout << sizeof(Cat) << std::endl;
    Cat cat1;
    Cat cat2;

    Cat * catPtr = &cat1;
    std::cout << sizeof(catPtr) << std::endl;

    return 0;
}