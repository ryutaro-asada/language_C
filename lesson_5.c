#include <stdio.h>
/*
ループ(for)

continue skip
break 
*/

int main(void) {

    int m;
    for (m = 0; m < 10; m++) {
        if (m == 3) {
            continue;
        }
        if (m == 8) {
            break;
        }
        printf("m: %d\n", m);
    }
    /*
    while (m < 10) {
        printf("m: %d\n", m);
        m++;
    } 

    int n = 0;

    do {
        printf("n: %d\n", n);
        n++;
    } while (n < 10);
    */
    return 0;
}