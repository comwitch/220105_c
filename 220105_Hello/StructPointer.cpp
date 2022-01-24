#include<stdio.h>
#include<stdlib.h>
#include<string>



/*
	직접참조 연산자(.) : 자기 자신이 가지는 멤버를 직접적으로 참조할 때 사용
	간접참조 연산자(->) : 자기 자신이 가지는 멤버가 아닌 현재 참조하고 있는 데이터의 멤버를 참조할 때 사용.

	얕은 복사 : 포인터의 주소지가 복사되어버림
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
	
	t2 = t1; //복사 shallow copy.
	t2.Name = (char*)malloc(sizeof(char) * 30);
	strcpy(t2.Name, t1.Name);
	strcpy(t2.Name, "red Slime");
	

	
	printf("t1.Name : %s, t1.Num : %d\n", t1.Name, t1.Num);
	printf("t2.Name : %s, t2.Num : %d\n", t2.Name, t2.Num);

	free(t1.Name);
	free(t2.Name);

	return 0;
}