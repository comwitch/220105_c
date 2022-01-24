#include <stdio.h>
/*
함수 포인터
: 다른 함수를 사용하기위해서 (언리얼에서 deligate생각)
	(자료형) (*함수포인터이름)(매개변수 목록)
	int(*FuncPtr)(int, int);
함수 포인터 사용이유
	1. 프로그램 코드가 간결해진다. (다른 cpp 파일에서 함수를 가져와서 쓸 수 있다)
	2. 함수 포인터 배열에 담아서도 사용이 가능하므로, 중복되는 코드를 줄일 수 있다.
	3. 상황에 따라 해당되는 함수를 호출 할 수 있어서 굉장히 유용하다.

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

struct Cal //함수 포인터를 구조체로 사용하기
{
	int(*fp)(int, int);

};

void executer(int(*fp)(int, int))// 함수 포인터를 함수 매개변수로 사용하기
{
	printf("%d\n", fp(10, 20));

}


int main()
{
	printf("함수의 주소값 : %p\n", print_Hello);


	void (*fp)();
	fp = print_Hello;

	fp();
	printf("포인터함수의 주소값 : %p\n", fp);
	int(*fp2)(int, int);
	fp2 = add;
	printf("결과 값 : %d\n", fp2(10, 20));
	fp2 = sub;
	printf("결과 값 : %d\n", fp2(10, 20));

	int(*fp3[4])(int, int);

	fp3[0] = add;
	fp3[1] = sub;
	fp3[2] = mul;
	fp3[3] = div;
	for (int i = 0; i < 4; i++)
	{
		printf("배열[%d] 함수 실행 값 : %d\n", i, fp3[i](30, 10));
	}

	printf("함수 포인터를 함수의 반환값으로 사용하기 : %d\n", GetADD()(10, 20));
	printf("(*GetSub) 함수의 반환값으로 사용하기 : %d\n", GetSub(1,2)(10,20));
	executer(add);
	return 0;
}