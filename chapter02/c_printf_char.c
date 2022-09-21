#include <stdio.h>

/**
 *  vs code 단축기
 * Shift + Alt + N      : C 실행
 * Shift + Alt + ↑ or ↓ : Line 복사
 * Alt + ↑ or ↓         : Line 이동
 * Ctrl + x             : Line 삭제
 * Ctrl + space         : 자동완성
*/

// '' : 문자(charaacter) 'A', 'c', '!'    
// "" : 문자열(string) "A", "ABC", "A!"   >>대게 이쪽을 많이씀
//  ※ 문자('')를 사용하는 경우
//      +키보드 제어를 할 때 사용한다

int main(void)
{
    /* code */
    printf("%c\n",'A');
    printf("%s\n", "A");
    printf("%c은 %s입니다.\n", '1', "first");    
    return 0;
}

