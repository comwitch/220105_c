#include <stdio.h>

/*
	int  (정수형)				4byte   1byte = 8bit
	char (문자형) abc			1byte
	float (실수형) 3.15			4byte
	double (실수형) 3.14			8byte
	
	+주의사항
	1. 변수명은 특수문자, 공백이 없어야한다.
		^a, a b (X)
	2. 영문자, 숫자, 언더바(_) 는 사용이 가능하다. 단 숫자가 앞에 오면 안됨.
	3. 키워드/예약어는 변수명으로 사용이 불가능하다. (int 기본함수)
*/

int main()
{
	int a = 10;  //선언
	float f = 10.0f;
	char c = 'a';

	printf("a의 저장된 수는 %d 입니다\n", a); //대입 정수형
	printf("f의 저장된 수는 %f 입니다\n", f);	 // 실수형
	printf("c의 저장된 수는 %c 입니다\n", c); // character


	int b = 20; // 선언과 초기화
	int c;
	c = 100;
	printf("a와 b의 합은 : %d입니다.\n", a + b); //서식 지정자 %d 정수형 %f float %c char.

	return 0;
}