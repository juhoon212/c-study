#include <string>

std::string getString() {
    
    std::string s = "nocodeprogram";
    return s; // return by value
}

int main() {

    std::string a = getString();
    return 0; 
}