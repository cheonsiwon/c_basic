#include <stdio.h>

/**
 * ���������� ��������
 *      - ���������� ������ �Լ� ��, �� ���� ���������� ����ϴ� ����
 *      - ���������� �������� ����{}���� ����, �ٸ� �Լ����� ��� �Ұ�
 *      - ���������� �̸��� ���Ƶ� ����� �Լ��� �ٸ��� ���� ������ ����
 *      - �Լ��� �� ���ǰ� ��ȯ�Ǹ� ���������� ���� �ڵ����� ȸ����(������)
 *      - �Լ��� �Ű�����(parameters)�� ��������
*/

int a = 50; // ��������: ��𼭵��� ��� �����ϴ�, ���������� ���������� �Ȱ��� �̸��̿��� �ߺ�������� �ʴ´�

int main(void){
    int a = 1, b = 2;
    // ����� �� �ִ� ������ 2�� �̻��� ��쿡�� ���� ����� ������ ����
    printf("%d", a);
    int result; // error�� ���� �ʴ´�
    //int a = 5; �� error�� ����(�Ȱ��� �̸� ������ �ߺ����� X)
    printf("����: %d", sum(a,b));
}

int sum (int x, int y){
    int result;         // �Լ� ������ ����� ����(��������)(���⿡���� int x,int y, int result)
    result = x + y;
    return result;
}