#include <iostream>
#include <thread>

void threadFunction1() {
    std::cout << "Thread Function01 - Start\n";
    std::cout << "Thread Function01 - End\n";
}

void threadFunction2() {
    std::cout << "Thread Function02 - Start\n";
    std::cout << "Thread Function02 - End\n";
}

void threadFunction3() {
    std::cout << "Thread Function03 - Start\n";
    std::cout << "Thread Function03 - End\n";
}

int main() {
    std::cout << "Hello, World!\n";

    std::thread t1(threadFunction1);
    std::thread t2(threadFunction2);
    std::thread t3(threadFunction3);
    

    std::cout << "Hello, End!\n";
}; 