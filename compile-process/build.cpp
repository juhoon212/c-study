
#include <iostream>
#include <variant>
int main() {
    
    // int i; // not initialized
    // build - preprocess(전처리) => compile => link
    std::variant<int, float> i = 0;
    std::cout << "hi" << std::endl;

    return 0;
}