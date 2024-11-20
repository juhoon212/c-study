#include <iostream>

class Person {
    public:
        Person(std::string name, int age): name(std::move(name)), age(age){};
        Person() {};
    private:
        std::string name;
        int age;
};

int main() {
    Person a("nocope", 31);
    Person* ap = new Person();

    
}