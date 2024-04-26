#include <iostream>

class Cat {
    public:
        void speak() {
            static int count = 0; // static 영역에서 공유된다.
            count++;
            std::cout << count << "," << "meow" << std::endl;
        }
        static void staticSpeak() {
            std::cout << "CAT!" <<std::endl;
        }
    private:
        int mAge;
    
};

int main() {
    
    Cat::staticSpeak(); // static function call
    Cat nabi;
    nabi.speak();

    Cat kitty;
    kitty.speak();
    return 0;
}