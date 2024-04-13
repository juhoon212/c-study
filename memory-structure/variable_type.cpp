#include <iostream>
#include <cstdint>

int main() {

    static_assert(sizeof(int) == 4, "int is 4bytes"); // int가 4바이트인지 확인

    // int a = 0;
    // std::cout << sizeof(int) << std::endl;
    // std::cout << sizeof(a) << std::endl;


    /*
    typedef signed char        int8_t;
typedef short              int16_t;
typedef int                int32_t;
typedef long long          int64_t;
typedef unsigned char      uint8_t;
typedef unsigned short     uint16_t;
typedef unsigned int       uint32_t;
typedef unsigned long long uint64_t;
 
typedef signed char        int_least8_t;
typedef short              int_least16_t;
typedef int                int_least32_t;
typedef long long          int_least64_t;
typedef unsigned char      uint_least8_t;
typedef unsigned short     uint_least16_t;
typedef unsigned int       uint_least32_t;
typedef unsigned long long uint_least64_t;
 
typedef signed char        int_fast8_t;
typedef int                int_fast16_t;
typedef int                int_fast32_t;
typedef long long          int_fast64_t;
typedef unsigned char      uint_fast8_t;
typedef unsigned int       uint_fast16_t;
typedef unsigned int       uint_fast32_t;
typedef unsigned long long uint_fast64_t;
 
typedef long long          intmax_t;
typedef unsigned long long uintmax_t;
    */
    // int a;
    // uint32_t b; // unsigned int
    // int8_t; // signed char
    

    // array (c 스타일)
    int a[10];
    std::cout << sizeof(a) << std::endl;

    // c++ 스타일
    std::array<int, 5> ia;
    std::cout << sizeof(ia) << std::endl;

    std::cout << sizeof(int8_t) << std::endl;
    std::cout << sizeof(int64_t) << std::endl;

    uint64_t ui8;
    float f4;
    std::array<uint8_t, 5> uia5;

    uint64_t * ui64ptr = &ui8;
    
    std::cout << sizeof(ui64ptr) << std::endl;
    std::cout << (uint64_t) ui64ptr << std::endl;


    return 0;
}