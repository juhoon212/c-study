#include "overloading.h"

int foo(double a) {
    return static_cast<int>(a);
}

double bar(int a) {
    return static_cast<double>(a);

}

// C++ 에서는 name mangling을 통하여 함수의 overloading을
// 지원하지만 C에서는 제공하지 않음.