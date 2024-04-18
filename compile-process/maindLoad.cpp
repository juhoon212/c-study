void foo();

int main() {

    foo(); // -WL, -rpath=(디렉토리경로) sharedLibrary 컴파일이 안되면 그 경로를 알려주는 옵션.

    return 0;
}