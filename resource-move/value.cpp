#include <string>
#include <iostream>

// l value => 1번 이상 불러줄수 있으면
// r value => temporary, 다시 쓸 수 없으면
// l value를 std::move() 를 사용하면 r value로 변환할 수 있음.

void storeByValue(std::string s) {
    std::string b = s;
}

void storeByLRef(std::string &s) {
    std::string b = s;
}

void storeByRRef(std::string && s) { // rvalue 참조(별명 붙이기)
    std::string b = std::move(s); // wrong!
    std::cout << b << std::endl;
}

int main() {
    // std::string a = "abc";
    // storeByValue(a);
    // storeByLRef(a);
    storeByRRef("abc"); // wrong!
}


