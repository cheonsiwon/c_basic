#include <stdio.h>
/**
 * ����: 5�ڸ�
 * ��: 57256
 * 
*/
int main(void) {
    int num = 57256;
    int total = 0;
    int i;

    //printf("5�ڸ� ���ڸ� �Է��ϼ��� : ");

    //scanf("%d", &num);
    //if(num < 0) //num�� ������ ��� �����
    //    num = -num;
    for(i=0;i<5;i++)
    {               
        total += num%10; // 10���� ������ �������� total�� �Է�
        num = num /10; //�� �ڿ� �ڸ����� ���ش�
    }
    printf("���� %d\n", total); //25��µǵ���
} 
