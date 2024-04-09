#include <stdlib.h>
#include <iostream>
#include <memory>
#include <vector>

class Cat
{
    public:
        Cat() 
        {
            std::cout << "meow" << std::endl;
        };
        ~Cat() 
        {
            std::cout << "bye" << std::endl;
        }
    private:
        int mAge;
};


int main() 
{

    // // c style heap cat
    // Cat* catp = (Cat*) malloc(sizeof(Cat));
    // free(catp);

    // // c style heap cats(cat array)
    // Cat* catap = (Cat*) malloc(sizeof(Cat) * 5);
    // free(catap);
    // c++ 에서는 malloc 사용 ㄴㄴ
    // // c style
    // int* i = (int*)malloc(sizeof(int)); // 원하는 형식 포인터로 변환
    // printf("초기 %d \n", *i);
    
    // *i = 20;
    // printf("초기 : %d \n", *i);
    // free(i);

    // // c style heap array
    // int* ip = (int*)malloc(sizeof(int) * 5);
    // ip[0] = 100;
    // free(ip);

    // c++ style
    // Cat* catp = new Cat;
    // delete catp;

    // Cat* catap = new Cat[5];
    // delete [] catap;

    // smart pointer
    // std::unique_ptr<Cat> catp = std::make_unique<Cat>(); // 자동으로 destructor 사용
    // std::vector<Cat> cats(5);

    std::cout << "How many cats do u need" << std::endl;
    int catCount;
    std::cin >> catCount;

    std::vector<Cat> cats2(catCount);
    
    
    return 0;
}