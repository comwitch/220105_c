#include <stdio.h>
#include <time.h>
#include <stdlib.h>


/*
	for(�ʱⰪ; ����; ������)
	for(int i= 0; i < 10; i++)
	
	for ������ �������Ƿ����̴�.
	�� ���� �ֱ⿡ ������ �� ���� �˻� ǥ������ �򰡵ȴ�. �� �˻縦 �Ѵ�.
	���� ���ǽ��� �������� �򰡵Ǹ�, ���� ��ü�� ���� ������� �ʴ´�.

	for ������ ���� ������ ������ ����Ǳ� ���� ���� Ȯ���� �ϱ� ������, ���α׷��� ������ ����Ű�� ���� ������ �� �ִ�.

	�������� ���� ��ü�� ����ǰ� ���� ���� �ֱ⿡ ������ �򰡵ȴ�.
	
	�������� : ���� ������ ���� ����.
	�������� : main�Լ� �ۿ��� ���� ����. 
*/


int main()
{
	for (int i = 0; i < 5; i++)
	{
		printf("C�� ������ �����մϴ�\n");

	}
	printf("c�� ������ ���� ������ �˰� �ֽ��ϴ�.");

	for (int i = 0; i < 5;)
	{
		printf("Hello\n");
		i++;
	}

	//int limit = 0;
	//printf("���ڸ� �Է����ּ��� : ");
	//scanf("%d", &limit);

	//int i;
	//for( i = limit; i; i--)
	//{
	//	printf("i = %d\n", i);

	//}
	//printf("i�� %d �̹Ƿ� �����ϰڼ��ϴ�\n", i);

	// �����

	//for (int i = 0; i < 6; i++)
	//{
	//	for (int j = 0; j < i; j++)
	//	{
	//		printf("*");

	//	}
	//	printf("\n");
	//}


	//for (int i = 5; i > 0;i--)
	//{
	//	for (int j = 0; j <= i; j++)
	//	{
	//		printf("*");

	//	}
	//	printf("\n");
	//}

	//int cal = 1;
	//int CalSum = 0;

	//for (int i = 0; i <= 9; i++)
	//{
	//	for (int j = 0; j <= 9; j++)
	//	{
	//		CalSum = cal * j;
	//		printf("%d * %d = %d\n", cal, j, CalSum);

	//	}
	//	
	//	cal++;
	//	printf("\n");

	//}

	
	int i;
	srand(time(NULL));
	for (i = 1; i < 10; i++)
	{
		printf("%d ", (rand() % 100) + 1);
		
	}
	printf("\n");
	

// ���̾Ƹ��
	int Max = 9;
	int Space = 4;
	int Star = 1;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < Space; j++)
		{
			printf(" ");
		}
		for (int l = 0; l < Star; l++)
		{
			printf("*");
		}
		Space = Space - 1;
		Star = Star + 2;
		printf("\n");
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < Space; j++)
		{
			printf(" ");
		}
		for (int l = 0; l < Star; l++)
		{
			printf("*");
		}
		Space = Space + 1;
		Star = Star - 2;
		printf("\n");
	}

	return 0;
}

