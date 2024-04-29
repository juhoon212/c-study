#include <iostream>

class Cat {
    public:
        Cat():mAge(1) {
        }
        Cat(int age):mAge(age) {
        }
        int getAge() {
            return this->mAge;
        }
    private:
        int mAge;
};

class Zoo {
    public:
        Zoo(int kittyAge):mKitty(Cat(kittyAge)) { // member init list => 
            // mKitty = Cat(kittyAge);
        };
    private:
        Cat mKitty;
};

int main() {
    Cat kitty(3);
    Cat nabi(2);
    
    std::cout << "kitty의 나이는 : "<< kitty.getAge() << std::endl;
    std::cout << "nabi의 나이는 : " << nabi.getAge() << std::endl;

     
    return 0;
}