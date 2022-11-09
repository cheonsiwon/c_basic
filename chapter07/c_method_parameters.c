#include <stdio.h>

/**
 * 
 * int main(){
 *      printf("%d", sum(5,10));
 * }
 *      ↓        (return)
 *      ↓           ↑
 *      ↓           ↑
 *  (parameters)    ↑
 * sum(int x, int y) {
 *      return x + y;
 * }
*/
// 함수 → (매개변수), return
// 함수 →   X, return

int get_num(void);                  // 선언

int main(void){
    printf("값: %d", get_num());
}                                   // 호출

// main()함수 위에 이 get_num함수가 선언될 경우, 함수 선언 따로 할 필요가 없다
// void: 해당값을 사용하지 않을 경우
int get_num(void) {
    int num;
    printf("number: ");
    scanf("%d", &num);
    return num;
}                                   // 정의