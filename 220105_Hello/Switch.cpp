#include <stdio.h>
/*
	switch������ default������ break�ؾ���
*/
int main()
{
	char c = 0;
	printf("���ڸ� �Է����ּ���: ");
	scanf("%c", &c);

	//if (c == 'a')
	//	printf("%c ���ڴ� a�Դϴ�.\n", c);
	//else if (c == 'b') 
	//	printf("%c ���ڴ� b�Դϴ�.\n", c);
	//else if (c == 'c')
	//	printf("%c ���ڴ� c�Դϴ�.\n", c);
	//else if (c == 'd')
	//	printf("%c ���ڴ� d�Դϴ�.\n", c);
	//else 
	//	printf("%c ���ڴ� e�Դϴ�.\n", c);

	switch (c)
	{
		case 'a':
		{
			printf("%c�� ���ڴ� a�Դϴ�.\n", c); 
			printf("%c�� ���ڴ� a�Դϴ�.\n", c); break;
		}
			
		case 'b': printf("%c�� ���ڴ� b�Դϴ�.\n", c); break;
		case 'c': printf("%c�� ���ڴ� c�Դϴ�.\n", c); break;
		case 'd': printf("%c�� ���ڴ� d�Դϴ�.\n", c); break;
		case 'e': printf("%c�� ���ڴ� e�Դϴ�.\n", c); break;

		default: printf("��ġ�ϴ� ���ڰ� �����ϴ�.\n"); break;
	}

	return 0;
}