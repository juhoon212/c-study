#include <string>
#include <iostream>

class Cat {
    public:
        void setName(std::string name) {
            mName = std::move(name);
        }
    private:
        std::string mName;
};

int main() {
    
    Cat kitty;
    std::string s = "kitty";

    // kitty.setName(s); // 1copy lvalue
    kitty.setName("nabi"); //rvalue 0copy
}