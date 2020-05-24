#include <stdio.h>
/*
配列
*/

int main(void) {
    
    int sales[3];
    
    sales[0] = 200;
    sales[1] = 400;
    sales[2] = 300;

    int sales2[3] = {200, 300, 500};

    printf("%d\n", sales[1]);
    printf("%d\n", sales2[1]);

    return 0;
}