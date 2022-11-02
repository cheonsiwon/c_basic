#include <stdio.h>

//1~10까지 반복하면서 짝수면 짝수출력 홀수면 홀수출력 출력하는 코드 작성

// 짝수 판별: 2로 나눠서 나머지가 0이면 짝수
int main(void){
    for(int i = 1; i <=10; i++){
        // if(0) → false
        // if(1) → true
        if(i % 2) { //짝수판별
                printf("홀수\n");
            } else {
                printf("짝수\n");
            }
    }
}