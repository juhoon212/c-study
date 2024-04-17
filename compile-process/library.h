/*
    header only => include "~.h"
    static library => lib, a => linker
    dynamic library => 
    load time: 프로그램이 실행될때 로더가 라이브러리를 가져와서 실행
    run time : 프로세스가 실행 과정중에 라이브러리를 가져와서 실행
*/

class Cat {
    public:
        void speak();
};