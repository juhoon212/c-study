#include <iostream>
#include <vector>

int main(void) {
    
    std::vector<int> a;

    a.reserve(10);

    for (int i=0; i<10; ++i) {
        a.emplace_back(i);
    }

    std::cout << a[5] << std::endl;

    // push_back: LValue = copy,  RValue = move
    // emplace_back: LValue = copy, RValue = move, construct(객체 생성 가능)
}