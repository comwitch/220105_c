#include<Stdio.h>

int add()
{
	int a = 10;
	int b = 20;

	int c = a + b;
	printf("add�Լ��� �� : %d\n", c);
	return c;
}

int swap(int a, int b)
{
	int temp = a; 
	a = b;
	temp = b;

	return 0;
}

int mul(int a, int b)
{
	return a * b;
}

int main()
{
	int a = 20;
	int b = 30;

	add();
	
	printf("���� ���� : %d, %d\n", a, b);
	swap(a, b);
	printf("���� ���� : %d, %d\n", a, b);

	printf("%d\n", mul(10, 20));



	return 0;
}