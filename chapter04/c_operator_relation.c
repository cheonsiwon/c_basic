#include <stdio.h>

int main(void)
{
    int a = 10, b = 20, c = 10;
    int res;

    res = (a > b);
    printf("a > b : %d\n", res);
    res = (a >= b);
    printf("a >= b : %d\n", res);
    res = (a < b);
    printf("a < b : %d\n", res);
    res = (a <= c);
    printf("a <= c : %d\n", res);
    res = (a == b);
    printf("a == b : %d\n", res);
    res = (a != c);
    printf("a != c : %d\n", res);

    // 터미널에서 0이면 거짓, 1이면 참
} 