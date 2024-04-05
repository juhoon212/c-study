// 전역변수
// c++ 메모리 영억
// 메모리, 데이터, 힙, 스택

// 메모리 영역 : 프로그램 코드 저장
// 데이터 영역 : static 변수 및 전역변수
// stack 영역 : 지역변수 및 매개변수, 함수의 호출이 완료되면 소멸
// 힙 영역 : 사용자가 직접 관리 가능, 

#include <stdio.h>
int a = 0;

static int g_iStatic = 0;

int addA() {
    ++a;
}

int main() {

    addA();
    addA();
    addA();

    g_iStatic++;

    printf("a = %d\n", a);
    printf("g_istatic = %d\n", g_iStatic);
    
    return 0;
}