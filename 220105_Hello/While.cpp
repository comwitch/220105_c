#include <stdio.h>
/*
while안의 문구가 항상 참인 경우 계속해서 루프가 돈다.
무한 루프 안에서도 break구문을 넣어서 특정 조건하에서 반복문에서 나가게 할 수 잇다

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
	printf("총합 : %d\n", add);

	//int b = 0;
	//while (true)
	//{
	//	printf("입력 : ");
	//	scanf("%d", &b);

	//	if (b < 0)
	//		break;
	//	printf("출력 : %d\n", b);

	//}
	//printf("프로그램 종료");

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