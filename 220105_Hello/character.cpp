#include <stdio.h>
#include <string>
int main()
{
	//char c[] = {"apple"};  //�迭ũ�� 6 �������� null

	//int* p = nullptr;

	char null_1 = '\0';
	char null_2 = 0;
	char null_3 = (char)NULL;

	char not_null = 48;

	printf("���� ������ ���� : %d, %d, %d, %c\n", null_1, null_2, null_3, not_null);

	char word[] = { "helloaaaa" };
	char* ptr = word;
	ptr[0] = 'd';
	printf("%s\n\n", ptr);
	printf("���ڿ��� ���� : %d\n", strlen(word));

	//���ڿ� ���ۿ� ���ؼ�
	/*int num = 0;
	char cc = 0;
	printf("Input Number ");
	scanf("%d", &num);

	getchar(); ���۾� ������ ���� ��ȯ*/

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