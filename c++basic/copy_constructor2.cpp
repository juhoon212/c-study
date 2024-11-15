#include <iostream>
#include <string>

class Person {
    public:
        std::string name;
        Person(std::string name, int age): name(std::move(name)), age(age) {};
        Person(const Person& other): name(other.name), age(other.age) {};
        Person(Person&& other): name(std::move(other.name)), age(other.age) {}; // std::move() 는 소유권을 이동시키는 것이 아니라 소유권을 잃게 만드는것(이동 생성자를 호출하게 만드는 것).
    private:
        
        int age;
};

void storeByLRef(std::string& s) {
    std::string b = std::move(s);
    std::cout << "b = " << b << std::endl;
};

void storeByRRef(std::string&& s) {
    std::string b = std::move(s);
}

int main() {
    
    std::string a = "abc";
    storeByLRef(a);

    std::cout << a << std::endl;

    

    
}