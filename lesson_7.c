#include <stdio.h>
/*
関数　複数の処理

返り値の型　関数名(引数、...) {
    処理;
    return 返り値;
}

プロトタイプ宣言
*/

// 最初に宣言すれば関数本体をあとで定義できる。
float getMax(float a, float b);

void sayHi(void) {
    printf("hi!\n");
}

int main(void) {

    float result;
    result = getMax(2.3, 5.2);
    printf("%f\n", result);

    sayHi();

    return 0;
}

float getMax(float a, float b) {
    if (a >= b) {
        return a;
    } else {
        return b;
    }
}