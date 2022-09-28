#include <stdio.h>

/**
 *  실수형
 *      + float, double, long double
 *      + (float과 double의 차이는 표현할 수 있는 실수가 얼마나 정밀한가 입니다.)
 *      + 값의 범위보다 유효숫자(소숫점) 갯수가 중요
 *      + 정수형을 기본으로, 실수형은 꼭 필요한 경우만 사용
 *      + 실수형은 유효 숫자가 많은 double형을 기본으로 사용
 *      + 문제 ex) 실수형 자료형의 종류를 나열하시오 →→→ 이렇게 나온다
*/

int main(void)
{
    float ft = 1.234567890123456789;        // 소숫점 18개
    double db = 1.234567890123456789;       // 소숫점 18개
        //예상출력 1.23456789012345678900
    printf("float형 변수 값 : %.20f\n", ft);
    printf("double형 변수 값 : %.20f\n", db);


    return 0;
}
