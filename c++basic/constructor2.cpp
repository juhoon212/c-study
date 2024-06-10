#include <iostream>

class Point {
    private:
        int x;
        int y;
    public:
        Point(const int &xpos, const int &ypos) {
            x = xpos;
            y = ypos;
        } 

        int getNum() {
            return this->x;
        }
};

class Rectangle {
    private:
        Point upleft;
        Point lowRight;
    public:
        Rectangle(const int &x1, const int &y1, const int &x2, const int &y2)
        : upleft(x1, y1), lowRight(x2, y2)
        {
            
        }
        int getUpleft() {
            return upleft.getNum();
        }

        int getLowright() {
            return lowRight.getNum();
        }
        ~Rectangle() {
            std::cout << "소멸자 호출" << std::endl;
        }
};

int main() {
    Rectangle* rec1 = new Rectangle(1,2,3,4);
    std::cout << rec1->getUpleft() << std::endl;
    std::cout << rec1->getLowright() << std::endl;

    delete rec1;
    return 0;
}