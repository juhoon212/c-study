#include <iostream>

class Cat {
    public:
        Cat() {
            m_age = 1;
        };
        ~Cat(){
            std::cout << "destruct" << std::endl;
        };
        void addAge(int arg) {
            m_age += arg;
        };
    private:
        int m_age;
};

int main() {
    Cat cat;
    cat.addAge(10);

    

    return 0;
}
