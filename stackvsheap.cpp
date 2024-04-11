
#include <iostream>

class Cat {
    public:
    private:
        int m_age;
};

int main() {

    // c++ 에서 객체를 생성할때는 그 객체의 크기가 kb 미만이라면 stack에 할당하고 kb 이상이면 heap에 할당한다.
    std::array<int,300> a; // 1.2kb 
    std::array<int, 500000> b; // 2mb stack
    std::vector<int>c (50000) ; // 2mb heap => mb 부터는 heap에 할당하는것이 유리

    return 0;
}