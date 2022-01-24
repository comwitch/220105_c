#include <stdio.h>
#include <string>
int main()
{
	//char c[] = {"apple"};  //배열크기 6 마지막은 null

	//int* p = nullptr;

	char null_1 = '\0';
	char null_2 = 0;
	char null_3 = (char)NULL;

	char not_null = 48;

	printf("공백 문자의 값은 : %d, %d, %d, %c\n", null_1, null_2, null_3, not_null);

	char word[] = { "helloaaaa" };
	char* ptr = word;
	ptr[0] = 'd';
	printf("%s\n\n", ptr);
	printf("문자열의 길이 : %d\n", strlen(word));

	//문자열 버퍼에 관해서
	/*int num = 0;
	char cc = 0;
	printf("Input Number ");
	scanf("%d", &num);

	getchar(); 버퍼안 마지막 문제 반환*/

	/*printf("Input Character ");
	scanf("%c", &cc);*/

	char str[30], str1[30];
	int i;
	//scanf("%d", &i);
	//scanf("%s", &str);
	//printf("str : %s \n\n", str);
	printf("Input String : ");
	scanf("%[^\n]", &str);
	printf("str : %s\n", str);

	printf("Input String : ");
	scanf("%s", &str1);
	printf("str : %s\n", str1);
	
	return 0;
}