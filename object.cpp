#include <string>

class Person {
    public:
        Person(std::string name, int age)
            : name(std::move(name)), age(age){};
    private:
        std::string name;
        int age;

};

int main() {
    Person a("nocope", 31); // stack
    Person* ap = new Person("홍길동", 31); // Heap => delete를 써주지 않으면 memory leak 발생.
    // Object를 생성할때는 간단한 오브젝트면 stack에 올린다. 
}