#include <iostream>

void swapByRef(int &ref1, int &ref2) {
    int temp = ref1;
    ref1 = ref2;
    ref2 = temp;
}

int& RefRetFuncOne(int &ref) {
    ref++;
    return ref;
}

int main() {

    int val1 = 10;
    int val2 = 20;

    swapByRef(val1, val2);
    std::cout << "val1: " << val1 << std::endl;
    std::cout << "val2: " << val2 << std::endl;

    int num1 = 1;
    int& result = RefRetFuncOne(num1); // 참조형 변수에 담으면 num1의 메모리 공간이 저장됨
    result++;

    std::cout << "result: " << result << std::endl;


    return 0;
}