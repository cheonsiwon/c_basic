#include <stdio.h>

/**
 *  vs code 단축기
 * Shift + Alt + N      : C 실행
 * Shift + Alt + ↑ or ↓ : Line 복사
 * Alt + ↑ or ↓         : Line 이동
 * Ctrl + x             : Line 삭제
 * Ctrl + space         : 자동완성
 * 
 * Ctrl + z             : 이전으로
 * Ctrl + Shitft + z    : 앞으로
*/

// '' : 문자(charaacter) 'A', 'c', '!'    
// "" : 문자열(string) "A", "ABC", "A!"   >>대게 이쪽을 많이씀
//  ※ 문자('')를 사용하는 경우
//      +키보드 제어를 할 때 사용한다

int main(void)
{
    /* code */
    printf("%c\n",'A');     //%c : 하나의 문자로 출력
    printf("%s\n", "A");
    printf("%c은 %s입니다.\n", '1', "first");    
    return 0;
}

/**
 * c언어 출력타입 (수업외)
 *  %d:10진수(정수형)
 *  %f: 실수형 
 *  %e: 지수형
 *  %o: 8진수 
 *  %x: 16진수
 *  %u: 부호없는 10진수
 *  %g: 실수형 자동출력
 *  %p: 포인터의 주소
 *  %c: 하나의 문자로 출력
 *  %s: 문자열 
*/

