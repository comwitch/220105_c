#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

/*
����ü��
	��� ����Ʒ� �ʿ��� �����͵��� ��� �����ϴ� ���.
	ex) ĳ���� ����ü ���� �� ĳ���Ͱ� ������ �� �������ͽ��� ���ο� ������ ����

	����ü�� ����� ���� �ڷ����̴�. �� ����� ����ü�� �ڷ������� ����� �����ϴ�.



*/




struct Character
{
	char name[20] = {};
	int hp = 0;
	int atk = 0;
	int def = 0;
};

void PrintName()
{
	Character player;

	printf("������� ĳ���͸� �����մϴ�.\n");
	Sleep(1000);
	printf("������� ĳ���� �̸��� �Է����ּ��� : ");
	scanf("%s", &player.name);
	printf("�Է��Ͻ� �̸� %s�� ĳ���͸� �����մϴ�.\n\n", player.name);
}

void Battle()
{
	Character player;
	Character enemy;
	while (true)
	{
		printf("�÷��̾��� �ɷ�ġ�� �������� �����մϴ�.\n");

		printf("���ݷ� : %d\n", player.atk = rand() % 50 + 25);
		printf("���� : %d\n", player.def = rand() % 50 + 25);

		printf("�÷��̾��� �ɷ�ġ�� �ٽ� �����Ͻðڽ��ϱ�? : y / n \n");
		getchar();
		scanf("%c", &reset);
		if (reset == 'y')
			printf("�÷��̾��� �ɷ�ġ�� �������մϴ�.\n");
		else
		{
			printf("�÷��̾��� �ɷ�ġ�� �����մϴ�.\n");
			break;
		}
	}

	printf("������ �����Ͻðڽ��ϱ�? 1. ���� 2. ����");
	scanf("%d", &start);

	if (start == 1)
	{
		Sleep(1000);
		system("cls");
		printf("���� ��Ÿ����!!\n");
		while (true)
		{
			if (enemy.hp <= 0)
			{
				printf("���� ��������!!\n");
				break;
			}
			else if (player.hp <= 0)
			{
				printf("�÷��̾ ��������!!\n");
				break;

			}


			printf("1. ���� 2. �ɷ�ġ Ȯ�� \n");
			scanf("%d", &a);

			if (a == 1)
			{
				printf("%s�� ����!!\n\n", player.name);

				damage = player.atk - enemy.def;
				enemy.hp -= damage;

				printf("������ %d��ŭ�� �������� ������!!\n", damage);
				printf("���� ���� ü�� : %d\n", enemy.hp);

				Sleep(1000);
				system("cls");

				printf("���� ����!\n");
				damage = enemy.atk - player.def;
				player.hp -= damage;

				printf("������ %d��ŭ�� �������� �Ծ���!!\n", damage);
				printf("%s�� ���� ü�� : %d\n", player.name, player.hp);
				Sleep(1000);
				system("cls");

			}

			else if (a == 2)
			{
				printf("ü  ���� %d�Դϴ�.\n", player.hp);
				printf("���ݷ��� %d�Դϴ�.\n", player.atk);
				printf("������ %d�Դϴ�.\n", player.def);
			}


		}
	}
}

int main()
{
	Character player;
	player.atk = 10;
	player.def = 5;
	player.hp = 1000;

	Character enemy;
	enemy.hp = 1000;
	enemy.atk = rand() % 50 + 25;
	enemy.def = rand() % 50 + 25;

	char reset = 0;
	int start = 0;
	int a = 0;
	int damage = 0;


	/*printf("���ݷ� : %d\n", player.atk);
	printf("���� : %d\n", player.def);
	printf("ü  �� : %d\n", player.hp);*/

	/*printf("������� ĳ���͸� �����մϴ�.\n");
	printf("������� ĳ���� �̸��� �Է����ּ��� : ");
	scanf("%s", &player.name);
	printf("�Է��Ͻ� �̸� %s�� ĳ���͸� �����մϴ�.\n\n", player.name);

	printf("�÷��̾��� �⺻ �ɷ�ġ�� �����մϴ�.\n");
	printf("ü  ���� %d�Դϴ�.\n", player.hp);
	printf("���ݷ��� %d�Դϴ�.\n", player.atk);
	printf("������ %d�Դϴ�.\n", player.def);*/

	PrintName();
	Battle();
	

	
	return 0;
}