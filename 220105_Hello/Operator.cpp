#include <stdio.h>

int main()
{
	//단항 연산자(부호 연산자) : 연산이 하나밖에 안들어가 있음

	int num = 10, num2 = 20, num3 = 30, num4 = 40; 

	int m = 10, n = 5;
	int result;

	printf("m=%d, n = %d \n\n", m, n);
	result = m++ + (--n); //14
	printf("m = %d, n = %d, result = %d \n\n",  m, n, result);
	
	printf("m=%d, n = %d \n\n", m, n);
	result = ++m + (n--); //16
	printf("m = %d, n = %d, result = %d \n\n", m, n, result);

	//이항 연산자(산술 연산자) 

	int a, b, c;
	a = 10;
	b = 20;
	c = 30;

	c = a + b; //연산자가 2개 들어감

	//삼항 연산자

	num ? 100 : 200; //참이면 100 거짓이면 200

	return 0;
}


/*
a++ 후증감 (몸체후 증가)
++a 선증감 (증가후 실행)
*/