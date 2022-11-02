#include <stdio.h>

/**
 * 구구단 2단 출력
 *  2 x 1 = 2
 *  2 x 2 = 4
 *  2 x 3 = 6
 *  ...
 *  2 x 9 = 18
*/
int main(void) {
    for(int i=1; i<=9; i++){
        printf ("2 X %d = %d\n", i, 2*i);
    }
    // 반복은 i=1~9까지 9번 반복하지만 출력하고 마지막값은 i=10이후에 조건 i<=9에 걸려서 마무리된다 ★★★★

}