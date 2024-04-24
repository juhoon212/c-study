#include <iostream>
#include <stdlib.h>
#include <memory>

class Cat {
    public:
        // Cat() {
        //     std::cout << "create" << std::endl;
        // }
        // ~Cat() {
        //     std::cout << "destory" << std::endl;
        // }
        void speak();
    private:
        int mAge; // 4 bytes

};

int main() {
    std::cout << sizeof(Cat) << std::endl;
    Cat stackCat; // stack 에 stackCat 변수가 올라감
    
    Cat* heapCatPtr = new Cat();
    std::cout << "heapCat의 메모리는 : " << sizeof(heapCatPtr) << std::endl; // 64 bits 환경에서는 8 Byte
    delete heapCatPtr;
            // prefer smartPtr

    std::unique_ptr<Cat> catPtr = std::make_unique<Cat>();
    std::cout << sizeof(catPtr) << std::endl;

    return 0;
}