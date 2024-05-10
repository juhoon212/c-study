#include <stdio.h>

int main(void) {

    // char ch;
    
    // while ((ch = getchar()) != '\n') {
    //     putchar(ch);
    // }
        
        // int total = 1;

        // for (int i = 1; i <= 5; i++) {

            // printf("%d\t", total);
            // total++;

        //     for (int j = 1; j <= i; j++) {
        //         printf("%d\t", total);
        //         total++;
        //     }


        //     for (int k = 4; k >= 0; k--) {
        //         printf("\t");
        //     }

        //     puts("");

        //     // if (total >= 15) {
        //     //     break;
        //     // }
           
        // }

        // puts("");

        int total2 = 1;
        int count = 4;

        for (int i = 1; i <= 5; i++) {

            for (int j = count; j > 0; j--) {
                printf("\t");
            }

            for (int k = 1; k <= i; k++) {
                printf("%d\t", total2);
                total2++;
            }

            count--;

            puts("");
        }
        

    return 0;
}