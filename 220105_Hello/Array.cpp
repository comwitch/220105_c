#include <stdio.h>
/*
	정적 배열
    (자료형)(배열이름)[원소갯수]
	int arr[5]  = {1,2,3,4,5};
	배열 크기 자료형byte * 배열원소수

	배열의 선언과 초기화
	1. int arr[3] = {1,2,3}; // 배열의 크기만큼 하나의 값을 초기화한다.
	2. int arr[3] = {}; // 모든 원소를 0으로 초기화한다.
	3. int arr[5] = {1}; //첫번째 원소는 1로 초기화 하고 나머지 원소를 0으로 초기화한닫.
	4. int arr[] = {1,2}; //초기화 값만큼 배열의크기를 잡는다.



*/
int main()
{
	

	//int arr[5] = {1,2,3,4,5};
	//for (int i = 0; i < 5; i++)
	//{
	//	printf("배열의 값 출력 : %d \n", arr[i]);
	//}

	//printf("0번째 배열의 값 : %d\n", arr[0]);
	//printf("1번째 배열의 값 : %d\n", arr[1]);
	//printf("2번째 배열의 값 : %d\n", arr[2]);
	//printf("3번째 배열의 값 : %d\n", arr[3]);
	//printf("4번째 배열의 값 : %d\n", arr[4]);

	//printf("배열의 크기 : %d\n", sizeof(arr));

	//합구하기
	// 
	// 
	// 
	//int total = 0; //합을 저장할곳
	//int num = 0; // 입력받을 변수
	//int arr[5];  //입력받을 변수를 저장할 배열
	//for (int i = 0; i < 5; i++)
	//{
	//	printf("숫자를 입력해 주세요 : ");
	//	scanf("%d", &num);

	//	arr[i] = num;
	//	printf("arr[%d]번째 입력한 수 %d가 저장되었습니다.\n", i, num);
	//	
	//	total += arr[i]; // total + arr[i]
	//}

	//printf("총합 : %d\n", total);

	//역순으로 출력하기

	//int num[5];
	//int count;

	//for (count = 0; count < 5; count++);
	//{
	//	printf("숫자를 입력해주세요 : ");
	//	scanf("%d", &num[count]);
	//}
	//
	//for (count = 4; count >= 0; count-- );
	//{
	//	printf("%d\n", num[count]);
	//}

	//int DArr[3][3] = {};
	//printf("%d", sizeof(DArr));

	int score[3][2];

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			if (j == 0)
			{
				printf("%d번쨰 학생의 국어점수 : ",i + 1);
				scanf("%d", &score[i][j]);
			}
			else if (j == 1)
			{
				printf("%d번쨰 학생의 수학점수 : ", i + 1);
				scanf("%d", &score[i][j]);
			}
		}
	}
	for (int i = 0; i < 3; i++)
	{
		printf("%d번쨰 학생의 국어점수 %d 수학점수 : %d\n", i + 1, score[i][0], score[i][1]);
	}
	return 0;
}