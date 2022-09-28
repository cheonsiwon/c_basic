#include <stdio.h>

int main (void)
{
    int a,b;
    int sum, sub, mul, inv;     //변수 만들어짐

    a = 10;
    b = 20;                     // 초기화됨
    sum = a + b;
    sub = a - b;
    mul = a * b;
    inv = -a;                   // a = 정수+10 / -a : -10 →부호바꾸는것이다

    printf("%d", inv);
}