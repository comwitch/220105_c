#include <stdio.h>
/*
while���� ������ �׻� ���� ��� ����ؼ� ������ ����.
���� ���� �ȿ����� break������ �־ Ư�� �����Ͽ��� �ݺ������� ������ �� �� �մ�

*/
int main()
{
	int a = 1;
	int add = 0;

	while (a <= 10)
	{
		
		printf("%d\n", a);
		add = add + a;
		a = a + 1 ;
	}
	printf("���� : %d\n", add);

	//int b = 0;
	//while (true)
	//{
	//	printf("�Է� : ");
	//	scanf("%d", &b);

	//	if (b < 0)
	//		break;
	//	printf("��� : %d\n", b);

	//}
	//printf("���α׷� ����");

	int i = 1;
	int j = 0;

	while (j <= 10)
	{
		j = 0;
		
		while (j < i)
		{
			printf("*");
			++j;

		}
		++i;
		printf("\n");
	}


	int c = 0;
	do
	{
		printf("Hello\n");
		c++;

	} while (c < 10);


	return 0;
}