class Animal {
    public:
        void sleep();
    private:
        int Mage;
};

class Human : public Animal {
    public:
        void driveCar();
};

class Cat {
    public:
        void speak();
    private:
        int mAge;
};

int main() {
    Cat kitty;
    kitty.speak();
    Cat nabi;
    nabi.speak();

    Human nocope;
    nocope.sleep();
    nocope.driveCar();
}

// 1. 추상화
// 2. 캡슐화
// 3. 상속
// 4. 다형성