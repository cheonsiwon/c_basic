#include <stdio.h>

// 주류 판매기
//  - 구매자의 나이를 입력받고
//  - 나이에 따라 주류판매/불가
int main(void) {
    int age;

    printf("나이: ");
    scanf("%d", &age);

    //printf("나이는 %d", age);  → 이렇게 실행해보면서 잘되는지 검토해보면서 나아가는게 정석(잘되면 지우기)

    if(age >= 20) {   //성인
        printf("성인입니다. \n");
        printf("주류 구매가 가능합니다. \n");
    } else {
        printf("미성년자입니다. \n");
        printf("주류 구매가 불가능합니다. \n");
    }
    //  else if(age <= 19) {
    //     printf("미성년자입니다. \n");
    //     printf("주류 구매가 불가능합니다. \n");
    // }
}

