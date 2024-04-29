#include <string>
#include <iostream>

class Cat {
    public:
        Cat() = default; // default constructor
        Cat(std::string name, int age):mName{std::move(name)}, mAge{age} {
            std::cout << mName << " constructor" << std::endl;
        };
        ~Cat() {
            std::cout << mName << " destructor " << std::endl;
        }
        Cat(const Cat& other): mName{other.mName}, mAge{other.mAge} {
            std::cout << mName << "copy constructor" << std::endl;
            // std::memcpy(); => pointer변수가 있다면 
        }
        Cat(Cat&& other):mName{std::move(other.mName)}, mAge{other.mAge} {
            std::cout << mName << "move constructor" << std::endl;
        }
        void print() {
            std::cout << mName << " " << mAge << std::endl;
        };
    private:
        std::string mName;
        int mAge;
        
};

int main() {
    Cat kitty{"kitty", 1};
    std::cout << &kitty << std::endl; 
    Cat kitty2{kitty};
    std::cout << &kitty2 << std::endl;
    Cat kitty3{std::move(kitty)};
    return 0;
};