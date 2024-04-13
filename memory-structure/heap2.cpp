#include <iostream>
#include <stdlib.h>
#include <memory>

class Cat {
    public:
        Cat() {
            std::cout << "meow" << std::endl;
        }
        ~Cat() {
            std::cout << "bye" << std::endl;
        }

    private:
        int mAge;
};

int main() {
    
    std::unique_ptr<Cat> catptr = std::make_unique<Cat>();
}