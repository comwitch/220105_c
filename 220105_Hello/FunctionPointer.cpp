#include <stdio.h>
/*
�Լ� ������
: �ٸ� �Լ��� ����ϱ����ؼ� (�𸮾󿡼� deligate����)
	(�ڷ���) (*�Լ��������̸�)(�Ű����� ���)
	int(*FuncPtr)(int, int);
�Լ� ������ �������
	1. ���α׷� �ڵ尡 ����������. (�ٸ� cpp ���Ͽ��� �Լ��� �����ͼ� �� �� �ִ�)
	2. �Լ� ������ �迭�� ��Ƽ��� ����� �����ϹǷ�, �ߺ��Ǵ� �ڵ带 ���� �� �ִ�.
	3. ��Ȳ�� ���� �ش�Ǵ� �Լ��� ȣ�� �� �� �־ ������ �����ϴ�.

*/

void print_Hello()
{
	printf("Hello, World\n");

}

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int div(int a, int b) { return a / b; }

int(*GetADD())(int, int)
{
	return add;
}

int(*GetSub(int a, int b))(int, int)
{
	printf("%d, %d\n", a, b);
	
	return sub;
}

struct Cal //�Լ� �����͸� ����ü�� ����ϱ�
{
	int(*fp)(int, int);

};

void executer(int(*fp)(int, int))// �Լ� �����͸� �Լ� �Ű������� ����ϱ�
{
	printf("%d\n", fp(10, 20));

}


int main()
{
	printf("�Լ��� �ּҰ� : %p\n", print_Hello);


	void (*fp)();
	fp = print_Hello;

	fp();
	printf("�������Լ��� �ּҰ� : %p\n", fp);
	int(*fp2)(int, int);
	fp2 = add;
	printf("��� �� : %d\n", fp2(10, 20));
	fp2 = sub;
	printf("��� �� : %d\n", fp2(10, 20));

	int(*fp3[4])(int, int);

	fp3[0] = add;
	fp3[1] = sub;
	fp3[2] = mul;
	fp3[3] = div;
	for (int i = 0; i < 4; i++)
	{
		printf("�迭[%d] �Լ� ���� �� : %d\n", i, fp3[i](30, 10));
	}

	printf("�Լ� �����͸� �Լ��� ��ȯ������ ����ϱ� : %d\n", GetADD()(10, 20));
	printf("(*GetSub) �Լ��� ��ȯ������ ����ϱ� : %d\n", GetSub(1,2)(10,20));
	executer(add);
	return 0;
}