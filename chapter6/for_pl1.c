#include <stdio.h>

// 1~10�� ���� ���� ���
int main(void) {
    int sum =0;     // ���� ����

    //�ۼ��غ�����. (for�� Ȱ��)(for���� Ȱ���ؼ� 1~10���� ���� �����ϴ� �ڵ��ۼ�)
    for(int i = 1; i<=10; i++){
        sum = sum + i;
        // sum += i; �̰Ͱ� ���� (��: sum�̶� i�� ���ؼ� sum�� ����ִ´�) 
    }
    printf("���� ����: %d\n", sum);
}