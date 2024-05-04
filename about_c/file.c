#include <stdio.h>

#define MAX 10000
int main(void) {

    // 파일 입출력
    // 파일 저장 및 저장된 데이터 불러오기

    // fputs, fgets
    char line[MAX];
    FILE* file = fopen("/Users/yunjoohoon/Desktop/study/c++studyre/about_c/test1.txt", "wb");

    if (file == NULL) {
        printf("열기 실패");
        return 1;
    }
    // fprintf, fscanf

    fputs("fputs를 이용해서 글을 적어볼게요\n", file);
    fputs("잘 적히는지 확인해주세요\n", file);

    // 파일을 열고 나서 닫지 않은 상태에서 어떤 프로그램에 문제가 생기면
    // 데이터 손실 발생. 항상파일은 닫아주는 습관 갖기!
    fclose(file);




    return 0;
}