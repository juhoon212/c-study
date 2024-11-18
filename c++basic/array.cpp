#include <iostream>

int main() {
    // c style arr

    int a[3] = {1,2,3}; // 1 ~ 2MB 

    int* ap = new int[5];
    delete[] ap;

    // std type c++
    std::array<int, 3> b = {1,2,3}; // 속도가 vector보다 빠르다 왜? stack에 선언되어져서 compile time에 사이즈가 정해진다.
    
    std::vector<int> c(5); // sound or image , 용량이 크게 필요할떄
}