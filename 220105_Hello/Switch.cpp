#include <stdio.h>
/*
	switch에서는 default쓰려면 break해야함
*/
int main()
{
	char c = 0;
	printf("문자를 입력해주세요: ");
	scanf("%c", &c);

	//if (c == 'a')
	//	printf("%c 문자는 a입니다.\n", c);
	//else if (c == 'b') 
	//	printf("%c 문자는 b입니다.\n", c);
	//else if (c == 'c')
	//	printf("%c 문자는 c입니다.\n", c);
	//else if (c == 'd')
	//	printf("%c 문자는 d입니다.\n", c);
	//else 
	//	printf("%c 문자는 e입니다.\n", c);

	switch (c)
	{
		case 'a':
		{
			printf("%c의 문자는 a입니다.\n", c); 
			printf("%c의 문자는 a입니다.\n", c); break;
		}
			
		case 'b': printf("%c의 문자는 b입니다.\n", c); break;
		case 'c': printf("%c의 문자는 c입니다.\n", c); break;
		case 'd': printf("%c의 문자는 d입니다.\n", c); break;
		case 'e': printf("%c의 문자는 e입니다.\n", c); break;

		default: printf("일치하는 문자가 없습니다.\n"); break;
	}

	return 0;
}