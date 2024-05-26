#include <stdio.h>

enum ACTION {MOVE, JUMP, ATTACK};
typedef enum COLOR {RED = 100, GREEN, BLUE} COLOR; 


int main(void) {

    enum ACTION act = MOVE;
    COLOR color = RED;

    printf("%d\n", color);
    return 0;
}