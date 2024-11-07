#include <iostream>
#include <vector>

class Cat {
    public:
        explicit Cat (int age): mAge{age}{}
        void speak() const {
            std::cout << "meow~" << mAge << std::endl;
        }
    private: 
        int mAge;
};

int main(void) {

    int* numsPtr = new int[5];

    for (int i = 0; i < 5; ++i) {
        numsPtr[i] = i;
    }

    delete[] numsPtr;
    // vector push_back : o(1) -> 맨뒤에 삽입해주면 되므로...
    // vector push_front : o(n) -> 하나씩 옮겨주고 마지막으로 맨 앞에 값을 넣어줘야 하기 때문에 n번만큼 실행하므로 o(n)이다.

    // vector 

    // 자동으로 heap 영역에 있는 메모리가 사라지면서 stack영역에 있던 nums 변수도 return 됨. 고로 memory leak이 발생하지 않음.
    std::vector<int> nums(5);

    for (int i = 0; i < 5; ++i) {
        nums[i] = i;
    }

    std::vector<int> nums2{0,1,2,3,4};

    std::cout << nums2.size() << std::endl;

    nums2.emplace_back(5);
    std::cout << nums2.size() << std::endl;

    nums2.pop_back();

    std::cout << nums2.size() << std::endl;

    std::vector<int> a{0,1,2,3,4};
    a.emplace_back(5);

    for (std::size_t idx=0; idx<nums.size(); idx++) {
        std::cout << a[idx] << std::endl;
    }

    for (auto itr = a.begin(); itr != a.end(); itr++) {
        
        std::cout << (*itr) << std::endl;
    }

    auto b = 5;
    std::cout << b << std::endl;

    // ranged for
    for (const int num : a) {
        std::cout << "num = " << num << std::endl; 
    }
    
    std::vector<Cat> cats;
    cats.emplace_back(Cat(1));
    cats.emplace_back(Cat(2));
    cats.emplace_back(Cat(3));
    cats.emplace_back(Cat(4));

    for (const auto &cat : cats) {
        cat.speak();
    }

    
};

