#include <stdio.h>

/**
 * 
 * int main(){
 *      printf("%d", sum(5,10));
 * }
 *      ��        (return)
 *      ��           ��
 *      ��           ��
 *  (parameters)    ��
 * sum(int x, int y) {
 *      return x + y;
 * }
*/
// �Լ� �� (�Ű�����), return
// �Լ� ��   X, return

int get_num(void);                  // ����

int main(void){
    printf("��: %d", get_num());
}                                   // ȣ��

// main()�Լ� ���� �� get_num�Լ��� ����� ���, �Լ� ���� ���� �� �ʿ䰡 ����
// void: �ش簪�� ������� ���� ���
int get_num(void) {
    int num;
    printf("number: ");
    scanf("%d", &num);
    return num;
}                                   // ����