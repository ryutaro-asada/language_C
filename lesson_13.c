#include <stdio.h>
/*
ポインタ；アドレスを格納するための変数

メモリ　（記憶領域）

int は　アドレス　４個入り
&　は　アドレス演算子

* 関節演算子
*/


int main(void) {
    
    int a;
    a = 10;
    
    int *pa;
    pa = &a;

    printf("%d\n", *pa);

    return 0;
}