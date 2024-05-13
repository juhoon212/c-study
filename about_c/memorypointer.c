#include <stdio.h>

void hello() {
    printf("Hello world\n");
};

int main(void) {

    /*
        메모리 특징(구조 + 관리)
        지정 - 직접 => 변수 선언(메모리) 위치는 compiler가 안다.
            - 간접
    */ 

    int nData = 300; // 직접 지정
    int* pnData = &nData;
    pnData += 2; // 포인터에 더한 2는 int 2개를 넣으라는 뜻과 같음.

    void (*fp)(); // 함수 포인터

    fp = hello;
    fp();


    

    

    
    


    return 0;
}