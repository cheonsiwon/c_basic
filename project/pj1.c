#include <stdio.h>
/**
 * 숫자: 5자리
 * 예: 57256
 * 
*/
int main(void) {
    int num = 57256;
    int total = 0;
    int i;

    //printf("5자리 숫자를 입력하세요 : ");

    //scanf("%d", &num);
    //if(num < 0) //num이 음수일 경우 양수로
    //    num = -num;
    for(i=0;i<5;i++)
    {               
        total += num%10; // 10으로 나눠서 나머지를 total에 입력
        num = num /10; //맨 뒤에 자리수를 없앤다
    }
    printf("총합 %d\n", total); //25출력되도록
} 
