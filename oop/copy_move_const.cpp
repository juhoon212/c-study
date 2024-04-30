#include <string>
#include <iostream>

class Cat {
    public:
        // Cat() = delete; object 생성 막을 수 있음
        // Cat(const Cat& other) = delete; // copy constructor 막는법
        // Cat& operator = (const Cat& other) = delete;
        Cat() = default; // default constructor
        Cat(std::string name, int age):mName{std::move(name)}, mAge{age} {
            std::cout << mName << " constructor" << std::endl;
        };
        // ~Cat() {
        //     std::cout << mName << " destructor " << std::endl;
        // }
        // Cat(const Cat& other): mName{other.mName}, mAge{other.mAge} {
        //     std::cout << mName << " copy constructor" << std::endl;
        //     // std::memcpy(); => pointer변수가 있다면 
        // }
        // Cat(Cat&& other):mName{std::move(other.mName)}, mAge{other.mAge} {
        //     std::cout << mName << " move constructor" << std::endl;
        // }
        // Cat& operator = (const Cat& other) {

        //     if (&other == this) {
        //         return *this;
        //     }

        //     mName = other.mName;
        //     mAge = other.mAge;
        //     std::cout << mName << " copy assignment" << std::endl;
        //     return *this;
        // }
        // Cat& operator = (Cat&& other) {

        //     if (&other == this) {
        //         return *this;
        //     }

        //     mName = std::move(other.mName);
        //     mAge = other.mAge;
        //     std::cout << mName << " move assignment" << std::endl;
        //     return *this;
        // }
        void print() {
            std::cout << mName << " " << mAge << std::endl;
        };
    private:
        // Cat();  Before C++11 delete와 같은 개념
        std::string mName;
        int mAge;
        
};

int main() {
    // Cat kitty{"kitty", 1};
    // std::cout << &kitty << std::endl; 
    // Cat kitty2{kitty};
    // std::cout << &kitty2 << std::endl;
    // Cat kitty3{std::move(kitty)};

    Cat kitty{"kitty", 1};
    Cat kitty2{kitty}; // copy constructor
    Cat kitty3{std::move(kitty)}; // move constructor
    Cat nabi{"nabi", 2};

    kitty = nabi; // copy assignment
    kitty = std::move(nabi); // move assignment

    // kitty = std::move(nabi);
    // kitty.print();
    // nabi.print();
    return 0;
};