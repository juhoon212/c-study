#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <wchar.h>

#ifdef _UNICODE
#define TCHAR   wchar_t
#else
#define TCHAR   char
#endif

int main(void) {
    TCHAR ch;
    printf("%d\n", sizeof(TCHAR));
    return 0;
}