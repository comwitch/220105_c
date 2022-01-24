#include <stdio.h>
#include <time.h>
#include <stdlib.h>


/*
	for(초기값; 조건; 증감값)
	for(int i= 0; i < 10; i++)
	
	for 루프는 진입조건루프이다.
	각 루프 주기에 진입할 때 조건 검사 표현식이 평가된다. 즉 검사를 한다.
	만일 조건식이 거짓으로 평가되면, 루프 몸체는 절대 실행되지 않는다.

	for 루프는 진입 조건을 루프가 실행되기 전에 먼저 확인을 하기 때문에, 프로그램이 문제를 일으키는 것을 방지할 수 있다.

	증감값은 루프 몸체가 실행되고 나서 루프 주기에 끝에서 평가된다.
	
	지역변수 : 지역 내에서 쓰는 변수.
	전역변수 : main함수 밖에서 쓰는 변수. 
*/


int main()
{
	for (int i = 0; i < 5; i++)
	{
		printf("C가 루프를 실행합니다\n");

	}
	printf("c는 루프가 언제 끝날지 알고 있습니다.");

	for (int i = 0; i < 5;)
	{
		printf("Hello\n");
		i++;
	}

	//int limit = 0;
	//printf("숫자를 입력해주세요 : ");
	//scanf("%d", &limit);

	//int i;
	//for( i = limit; i; i--)
	//{
	//	printf("i = %d\n", i);

	//}
	//printf("i를 %d 이므로 종료하겠숩니다\n", i);

	// 별찍기

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
	

// 다이아몬드
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

