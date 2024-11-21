#include <iostream>

int main() {
    
    char a[6] = {'a', 'o', '\0', 'p'};
    std::cout << a << std::endl; // ao
    std::cout << sizeof(a) << std::endl; // 4
    std::cout << strlen(a) << std::endl; // 2

    char b[] = "nocope";
    b[0] = 'd';
    std::cout << b << std::endl;
    std::cout << sizeof(b) << std::endl; // 7 맨뒤에 null 문자 온다.
    std::cout << strlen(b) << std::endl; // 6

    const char* c = "nocope"; // heap메모리를 가리키기 때문에 에러 발생 고로 readonly 일때는 const 키워드를 붙여줘야 한다.
    // c[0] = 'd';
    std::cout << c << std::endl;
    std::cout << sizeof(c) << std::endl; // 8 맨뒤에 null 문자 + heap 메모리 주소
    std::cout << strlen(c) << std::endl; // 6

    std::string d = "nocope";
    std::cout << d << std::endl;
    std::cout << sizeof(d) << std::endl;
    std::cout << d.size() << std::endl;

    
};