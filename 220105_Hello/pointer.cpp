#include <stdio.h>
/*
	포인터란?
		특정 변수, 함수, 구조체 등등 주소값을 저장하는 변수이다.
		운영체제의 크기에 따라서 pointer의 크기도 달라진다 32bit 기준 4byte 64bit 기준 8byte
		메모리 상에 위치한 특정한 데이터의 (시작) 주소값을 보관하는 변수
		(자료형)*(변수형) = &(참조하려는 변수명)

		& 연산자(주소 연산자) : 데이터의 주소값을 변환하는 연산자.
		* 연산자(참조 연산자) : 주소값에 저장된 데이터를 변환하는 연산자.
		  
		  포인터는 특정한 데이터의 주소값을 보관하고(&연산자), *연산자를 이용하여 해당 주소값 내부에 있는 데이터를 접근할 수 있다.
		 
		 .atk 직접 참조 -> 간접참조




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

	printf("스왑 이전 x : %d, y : %d\n", x, y);
	Swap(&x, &y);
	printf("스왑 이전 x : %d, y : %d\n", x, y);
	printf("%p\n", &arr);
	printf("%p\n\n", &arr[0]);

	int* parr;
	parr = arr; //배열에 한해서는 arr는 &arr[0]와같다.

	for (int i = 0; i < 5; i++)
	{
		printf("arr[%d] 의 주소값 : %p\t", i, &arr[i]);
		printf("parr+ %d 의 주소값 : %p\n\n", i, (parr + i));

		printf("arr[%d]의 값 : %d\t", i, arr[i]);
		printf("parr+ %d 의 값 : %d\n\n", i, (*parr + i));

		if (&arr[i] == (parr + i))
			printf("--> 일치\n");
		else
			printf("--> 불일치\n");
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