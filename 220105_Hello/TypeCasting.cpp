#include <stdio.h>
#include <string>
/*
	�Ϲ������� c �����Ϸ��� �ڵ� ����ȯ�ȴ�.


*/
int  main()
{
	float f = 100;
	printf("%f\n", f);

	int i = 3.14;
	printf("%d\n", i);


	char c = 128;
	printf("%d\n", c);


	int a = 10, b = 4;
	float div = (float)a / b;
	printf("%0.2f\n", div);

	int* p = (int*)malloc(30);  //void pointer�Լ��̹Ƿ�
	p[0] = 1;
	p[1] = 2;
	p[2] = 3;


	printf("%d\n", p[0]);
	printf("%d\n", p[1]);
	printf("%d\n", p[2]);



	free(p);

	return 0;
}