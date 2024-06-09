#include <iostream>

class SimpleClass {
    private:
        int num;
    public:
        SimpleClass(int num) {
            this->num = num;
        }
        
        int getNum() {
            return this->num;
        }
};

int main() {

    SimpleClass* sc1 = new SimpleClass(10);
    std::cout << sc1->getNum() << std::endl;


    return 0;

}