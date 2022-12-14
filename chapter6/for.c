#include <stdio.h>

/**
 * for문: 초기식, 조건식, 증감식으로 구성
 *      - 반복횟수를 세는 변수(i)는 반복문
 *        안에서 변경 금지(개발자 규칙)
*/
int main(void) {
    int a = 1;

    // 반복횟수가 정해짐
    // → 반복횟수 count : i(index의 약자) 변수
    // i = 0, 1, 2 → 3번 반복
    // int i = 0; i<10 이면 9번 반복
    for(int i=0; i<3; i++) {        
        //초기식,조건식, 증감식ㅇ
        a = a * 2;
        // i = i + 1; → 이거 금지
    }
    printf("a : %d\n", a);
}