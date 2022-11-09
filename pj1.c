#include <stdio.h>
/**
 * 숫자: 5자리
 * 예: 57256
 * 
*/
// 과제 1.숫자를 사용자에게 입력받게 (자릿수 제한 없게)
// 과제 2.자리수 제한 없는 상황에서도 똑같이 동작하게
int main(void) {
    int num = 57256;
    int total = 0;

    for(int i=1; i<=5; i++) {      
        total += num%10; // 10으로 나눠서 나머지를 total에 입력
        num = num /10; //맨 뒤에 자리수를 없앤다
    }
    printf("총합: %d\n", total); //25출력되도록
} 
