#include <stdio.h>
#include <Windows.h>

struct datas // �Ƕ�̵�, ���̾ƿ� ����� ��ġ���� ������ ����ü
{
	int Max = 0; 
	int Space = 0;
	int Star = 1;
	int Half = 0;
};

void questrion(datas* ptr, datas* ptr2) //����� �Լ�
{
	while (true) // �Ƕ�̵� ���� ���̾Ƹ�� �� ���� �Է��ϴ� ����
	{
		printf("�Ƕ�̵� �� ���� Ȧ���� �Է����ּ��� : ");
		scanf("%d", &ptr->Max);
		printf("���̾Ƹ���� �� ���� Ȧ���� �Է����ּ��� : ");
		scanf("%d", &ptr2->Max);
		if (ptr->Max % 2 == 0)
		{
			printf("�Ƕ�̵� �� ���� Ȧ�����̾�� �մϴ�.");
			Sleep(1000);
			system("cls");
		}
		else if (ptr2->Max % 2 == 0)
		{
			printf("���̾Ƹ�� �� ���� Ȧ�����̾�� �մϴ�.");
			Sleep(1000);
			system("cls");
		}
		else
		{
			ptr->Space = ptr->Max;
			ptr2->Space = (ptr2->Max - 1) / 2;
			ptr2->Half = (ptr2->Max + 1) / 2;

			break;
		}

	}

}
void pyramidf(datas* ptr)
{
	for (int i = 0; i < ptr->Max; i++)
	{
		for (int j = 0; j < ptr->Space; j++)
		{
			printf(" ");
		}
		for (int l = 0; l < ptr->Star; l++)
		{
			printf("*");
		}
		ptr->Space = ptr->Space - 1;
		ptr->Star = ptr->Star + 2;
		printf("\n");
	}

}

void diamondf(datas* ptr2)
{
	for (int i = 0; i < (ptr2->Half - 1); i++)
	{
		for (int j = 0; j < ptr2->Space; j++)
		{
			printf(" ");
		}
		for (int l = 0; l < ptr2->Star; l++)
		{
			printf("*");
		}
		ptr2->Space = ptr2->Space - 1;
		ptr2->Star = ptr2->Star + 2;
		printf("\n");
	}
	for (int i = 0; i < ptr2->Half; i++)
	{
		for (int j = 0; j < ptr2->Space; j++)
		{
			printf(" ");
		}
		for (int l = 0; l < ptr2->Star; l++)
		{
			printf("*");
		}
		ptr2->Space = ptr2->Space + 1;
		ptr2->Star = ptr2->Star - 2;
		printf("\n");
	}
}



int main()
{
	
	datas pyramid;
	datas diamond;

	datas* ptr;
	ptr = &pyramid;
	datas* ptr2;
	ptr2 = &diamond;


	questrion(ptr, ptr2);
	pyramidf(ptr);
	printf("\n\n");
	diamondf(ptr2);
	


	return 0;
}