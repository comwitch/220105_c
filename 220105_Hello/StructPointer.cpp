#include<stdio.h>
#include<stdlib.h>
#include<string>



/*
	�������� ������(.) : �ڱ� �ڽ��� ������ ����� ���������� ������ �� ���
	�������� ������(->) : �ڱ� �ڽ��� ������ ����� �ƴ� ���� �����ϰ� �ִ� �������� ����� ������ �� ���.

	���� ���� : �������� �ּ����� ����Ǿ����
*/

struct Student
{
	int ID = 0;
	int age = 0;
};

struct Test
{
	int Num;
	char* Name;
};

int main()
{
	//Student student;
	//Student* ptr;

	//ptr = &student;
	//
	//(*ptr).ID = 2022; 
	//
	//ptr->age = 28;	

	Test t1, t2;

	t1.Name = (char*)malloc(sizeof(char) * 30);
	


	strcpy(t1.Name, "Green Slime");
	t1.Num = 1;
	
	t2 = t1; //���� shallow copy.
	t2.Name = (char*)malloc(sizeof(char) * 30);
	strcpy(t2.Name, t1.Name);
	strcpy(t2.Name, "red Slime");
	

	
	printf("t1.Name : %s, t1.Num : %d\n", t1.Name, t1.Num);
	printf("t2.Name : %s, t2.Num : %d\n", t2.Name, t2.Num);

	free(t1.Name);
	free(t2.Name);

	return 0;
}