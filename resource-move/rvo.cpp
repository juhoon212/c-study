#include <string>

std::string getString() {
    
    std::string s = "nocodeprogram";
    return s; // return by value
}

int main() {

    std::string a = getString(); // 함수가 스택에 쌓일때 return value address를 가지고 있기 때문에
                                // s 변수는 생성조차 되지 않고 바로 heap 영역에 생성된 문자열을 가리켜 0 copy가 일어난다.
    return 0; 
}