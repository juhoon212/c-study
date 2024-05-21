#include <stdio.h>

typedef union _IP_ADDR {
    
    int nAddress;
    short awData[2];
    unsigned char addr[4];

} _IP_ADDR;

int main(void) {

    _IP_ADDR addr;
    
    addr.addr[0] = 192;
    addr.addr[1] = 168;
    addr.addr[2] = 0;
    addr.addr[3] = 10;

    return 0;
}