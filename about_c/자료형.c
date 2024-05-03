#include <stdio.h>

// char => 1byte
// short => 2byte
// int => 4byte(32bit)
// long => 4byte (32bit) => (64bit) 8byte
// long long => 8byte
// unsigned 조합 => 부호비트도 데이터 비트로 해석하는 부호가 없는 정수형

// float => 4byte
// double => 8byte
// long double => 8byte 이상 32bit => 12byte 64bit => 16byte
// size_t , ssize_t 4byte 64bit => 8byte
// * => 4byte(32bit) , 8byte (64bit)

int main(void) {

    printf("%f\n", 2147483648.0F - 20); // 부동소수점 떄문에 값이 출력 x
    printf("%f\n", 2147483648.0 - 20); // double을 사용하자!
    
    char a = 'A';
    printf("%c\n", a);
    printf("%d\n", a);

    char szBuffer[12] = {'H', 'A', 'a'};
    puts(szBuffer);

    // 문자열의 마지막 값은 널이다?
    char str[30] = "I study ComputerProgramming";
    str[7] = '\0';

    printf("%s\n", str);

    
    return 0;
}