
// #define ABCD 2
#include <iostream>
#include <limits>
#include <algorithm>
#include <__algorithm/max.h>
constexpr int ABCD = 2; // const expression(moderen c++)

int main() {

    std::cout << std::numeric_limits<uint16_t>::max<< "\n";
    std::cout << std::max(10,100) << std::endl;

    if constexpr(ABCD) {
        std::cout << "1: yes\n";
    } else {
        std::cout << "1: no\n";
    }

    std::cout << __FILE__ << std::endl; // 컴파일러 마다의 매크로가 다름.
    std::cout << __LINE__ << std::endl;
    std::cout << __DATE__ << std::endl;
    std::cout << __TIME__ << std::endl;

    // #ifdef ABCD
    //     std::cout << "1: yes\n";
    // #else
    //     std::cout << "1: no\n";
    // #endif

    // #ifndef ABCD
    //     std::cout << "2: no1\n";
    // #elif ABCD == 2
    //     std::cout << "2yes\n";
    // #else
    //     std::cout << "2: no\n";
    // #endif

    // std::cout << "1: yes\n";

    // std::cout << "2: yes\n";

    // std::cout << MAX_UINT16 << std::endl;
    // std::cout << MAX(10, 100) << std::endl;

    return 0;
}