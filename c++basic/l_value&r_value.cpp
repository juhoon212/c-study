// l-value = callable
// r-value = temp
1
#include <iostream>
#include <string>

int main(void) {
    std::string a = "nocope";
    std::string b = std::move(a);

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
}

