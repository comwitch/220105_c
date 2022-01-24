#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

/*
���� C������
typedef struct Character
{

} 
	����ü�� : ��� ����Ʒ� �ʿ��� �����͵��� ��� �����ϴ¹��.
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



int main()
{
	Character player;
	player.atk = 10;
	player.def = 5;
	player.hp = 100;

	Character enemy;
	enemy.hp = 100;
	enemy.atk = rand() % 7 + 2;
	enemy.def = rand() % 5 + 1;

	char reset = 0;
	int start = 0;
	int a = 0;
	int damage = 0;

	//printf("���ݷ� : %d\n", player.atk);
	//printf("���� : %d\n", player.def);
	//printf("ü  �� : %d\n", player.hp);

	printf("������� ĳ���͸� �����մϴ�.\n");
	Sleep(1000);
	printf("������� ĳ������ �̸��� �Է����ּ��� :");
	scanf("%s", &player.name);
	printf("�Է��Ͻ� �̸� %s�� ĳ���͸� �����մϴ�.\n\n", player.name);

	/*printf("�÷��̾��� �⺻ �ɷ�ġ�� �����մϴ�.\n");*/


	while (true)
	{
		printf("�÷��̾��� �ɷ�ġ�� �������� �����մϴ�.\n");
		printf("���ݷ� : %d\n", player.atk = rand() % 50 + 2);
		printf("���� : % d\n", player.atk = rand() % 50 + 2);

		printf("�÷��̾��� �ɷ�ġ�� �ٽ� �����ϰڽ��ϱ�? : y/n \n");
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



	printf("������ �����Ͻðڽ��ϰ�? 1. ���� 2. ����");
	scanf("%d", &start);

	if (start == 1)
	{
		printf("���� ��Ÿ����!!");
		while (true)
		{
			if (enemy.hp <= 0)
			{
				printf("���� ��������!!\n");
				break;
			}
			else if(player.hp <= 0)
			{
				printf("�÷��̾  ��������!!\n");
				break;
			}
			printf("1. ���� 2. �ɷ�ġ Ȯ��\n");
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
				printf("�� ���� ü�� : %d\n", player.hp);
				Sleep(1000);
				system("cls"); //�͹̳� ȭ��� ���̴°� �����°�
			}
			else if (a == 2)
			{
				printf("ü  ���� %d�Դϴ�.\n", player.hp);
				printf("���ݷ��� %d�Դϴ�.\n", player.atk);
				printf("������ %d�Դϴ�.\n", player.def);

			}
		}

	}
	return 0;
}


