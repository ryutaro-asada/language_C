#include <stdio.h>
/*
ポインタ；メモリの節約
*/

void f(long *pa) {//long型なので８個のメモリを使っている
    *pa += 100;
    printf("%ld\n", *pa);
}

int main(void) {
    
    long a = 1000;//ここでも８このメモリを使う
    f(&a);

    return 0;
}