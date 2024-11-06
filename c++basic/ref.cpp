#include <iostream>

int main(void) {
    using namespace std;
    int num = 200;
    int &num1 = num;
    int &num2 = num1;

    std::cout << num2 << std::endl;

    int age = 12;
    int* ptr = &age;
    int** dptr = &ptr;

    int &ref = age;
    int* (&pref) = ptr;
    int** (&dpref) = dptr; 

    cout << *ptr << endl;
    cout << *pref << endl;
};