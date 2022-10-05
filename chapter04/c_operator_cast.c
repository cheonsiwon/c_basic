/**
 *  Casting: 형변환
 *      - int(정수) → double(실수)
*/
#include <stdio.h>

int main(void)
{
    int a = 20, b = 3;
    double res;

    // int → double (작은type → 큰 타입으로 바꿔주는것임)(문제가 없다)
    // 6.7 = 20.0 / 3.0
    res = (double)a / (double)b;
    printf("a = %d, b= %d\n", a, b);
    printf("a/b의 결과 : %.1lf\n", res);

    // double → int (큰type → 작은type로 바꿔주는것) : 값의 손실이 난다
    a = (int)res;
    printf("(int) %.1lf의 결과: %d\n", res, a);

}
