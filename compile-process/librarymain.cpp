#include "library.h"

int main() {

    Cat kitty;
    kitty.speak();

    return 0;

    // static library 만드는 법
    // 1. 라이브러리로 만들고 싶은 파일 object파일로 컴파일
    // ar -rs lib(이름).a (object파일 이름)
    // clang++ (main파일 ) -lcat
    // ! 디렉토리를 못찾겠다고 나오면 static library를 못찾는거임
    // 따라서 -L 옵션을 써서 라이브러리 경로를 명시해줘야 한다.
    // clang++ librarymain.cpp -L (경로) -l(라이브러리 이름)
    // 실행 파일이 만들어짐
    // 실행
}