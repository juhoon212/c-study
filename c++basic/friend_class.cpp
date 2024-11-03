#include <stdio.h>
#include <iostream>

class Boy {
    private:
        int height;
        friend class Girl;
    public:
        Boy(int len): height(len) {}
};

class Girl {
    private:
        char phNum[20];
    public:
        Girl(char* num) {
            strcpy(phNum, num, num.length());
        }

        void ShowYourFriendInfo(Boy& frn) {
            std::cout << "His height: " << frn.height << std::endl;
        }
};