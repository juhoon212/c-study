#include <iostream>

class alignas(32) Cat {
    public:
        void speak();
    private:
        char c1; // 1byte
        int i4a; // 4bytes
        int i4b; // 4bytes
        double d8; // 8bytes
};

int main() {
    Cat stackCat;

    Cat cats[100]; // prefer std::array
    
    std::cout << sizeof(stackCat) << std::endl;

    return 0;
};