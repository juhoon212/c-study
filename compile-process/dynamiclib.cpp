#include <iostream>

void foo() {
    std::cout << "foo" << std::endl;

    // -fPIC 옵션은 shared library에 절대 주소가 아닌 relative 주소를 반양하여 각각 다른 어플리케이션에서 쓸 수 있게 끔 만들어주는 옵션이다. 독립 코드를 만들어라 라는 의미.
    // clang++ -shared dynamiclib.o -o libdynamic.so => shared library 
}