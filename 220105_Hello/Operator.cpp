#include <stdio.h>

int main()
{
	//���� ������(��ȣ ������) : ������ �ϳ��ۿ� �ȵ� ����

	int num = 10, num2 = 20, num3 = 30, num4 = 40; 

	int m = 10, n = 5;
	int result;

	printf("m=%d, n = %d \n\n", m, n);
	result = m++ + (--n); //14
	printf("m = %d, n = %d, result = %d \n\n",  m, n, result);
	
	printf("m=%d, n = %d \n\n", m, n);
	result = ++m + (n--); //16
	printf("m = %d, n = %d, result = %d \n\n", m, n, result);

	//���� ������(��� ������) 

	int a, b, c;
	a = 10;
	b = 20;
	c = 30;

	c = a + b; //�����ڰ� 2�� ��

	//���� ������

	num ? 100 : 200; //���̸� 100 �����̸� 200

	return 0;
}


/*
a++ ������ (��ü�� ����)
++a ������ (������ ����)
*/