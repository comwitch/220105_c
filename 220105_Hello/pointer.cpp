#include <stdio.h>
/*
	�����Ͷ�?
		Ư�� ����, �Լ�, ����ü ��� �ּҰ��� �����ϴ� �����̴�.
		�ü���� ũ�⿡ ���� pointer�� ũ�⵵ �޶����� 32bit ���� 4byte 64bit ���� 8byte
		�޸� �� ��ġ�� Ư���� �������� (����) �ּҰ��� �����ϴ� ����
		(�ڷ���)*(������) = &(�����Ϸ��� ������)

		& ������(�ּ� ������) : �������� �ּҰ��� ��ȯ�ϴ� ������.
		* ������(���� ������) : �ּҰ��� ����� �����͸� ��ȯ�ϴ� ������.
		  
		  �����ʹ� Ư���� �������� �ּҰ��� �����ϰ�(&������), *�����ڸ� �̿��Ͽ� �ش� �ּҰ� ���ο� �ִ� �����͸� ������ �� �ִ�.
		 
		 .atk ���� ���� -> ��������




*/
void Swap(int* a, int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
		 
}
int main()
{
	int a = 10;
	int* b = &a;
	int x = 10;
	int y = 20;
	
	int arr[5] = {1,2,3,4,5};

	

	printf("%p\n", &a);
	printf("%p\n", b);

	*b = 20;
	printf("%d\n", a);
	printf("%d\n", *b);

	printf("���� ���� x : %d, y : %d\n", x, y);
	Swap(&x, &y);
	printf("���� ���� x : %d, y : %d\n", x, y);
	printf("%p\n", &arr);
	printf("%p\n\n", &arr[0]);

	int* parr;
	parr = arr; //�迭�� ���ؼ��� arr�� &arr[0]�Ͱ���.

	for (int i = 0; i < 5; i++)
	{
		printf("arr[%d] �� �ּҰ� : %p\t", i, &arr[i]);
		printf("parr+ %d �� �ּҰ� : %p\n\n", i, (parr + i));

		printf("arr[%d]�� �� : %d\t", i, arr[i]);
		printf("parr+ %d �� �� : %d\n\n", i, (*parr + i));

		if (&arr[i] == (parr + i))
			printf("--> ��ġ\n");
		else
			printf("--> ����ġ\n");
	}

	int c = 10;
	int d = 20;
	int* ptr = &c;
	*ptr = 20;
	printf("%d\n", c);
	printf("%d\n", *ptr);
	ptr = &d;
	printf("%d\n", d);
	printf("%d\n", *ptr);
	*ptr = 30;
	printf("%d\n", d);
	printf("%d\n", *ptr);




	return 0;
}