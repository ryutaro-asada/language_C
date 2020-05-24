#include <stdio.h>
/*
条件分岐
*/


int main(void) {

    int score = 60;

    if (score >= 60) {
        printf("OK?\n");
    } else if (score >=50) {
        printf("so so...\n");
    } else {
        printf("NG!\n");
    }
    
    return 0;
}