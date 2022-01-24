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





void PrintName(Character* player)
{
	

	printf("������� ĳ���͸� �����մϴ�.\n");
	Sleep(1000);
	printf("������� ĳ���� �̸��� �Է����ּ��� : ");
	scanf("%s", player->name);
	printf("�Է��Ͻ� �̸� %s�� ĳ���͸� �����մϴ�.\n\n", player->name);
}

void Battle(Character* p, Character* e)
{
	char reset = 0;
	char start = 0;
	int damage = 0;
	int a = 0;
	while (true)
	{
		printf("�÷��̾��� �ɷ�ġ�� �������� �����մϴ�.\n");

		printf("���ݷ� : %d\n", p->atk = rand() % 50 + 25);
		printf("���� : %d\n", p->def = rand() % 50 + 25);

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
			if (e->hp <= 0)
			{
				printf("���� ��������!!\n");
				break;
			}
			else if (p->
				hp <= 0)
			{
				printf("�÷��̾ ��������!!\n");
				break;

			}


			printf("1. ���� 2. �ɷ�ġ Ȯ�� \n");
			scanf("%d", &a);

			if (a == 1)
			{
				printf("%s�� ����!!\n\n", p->name);

				damage = p->atk - e->def;
				e->hp -= damage;

				printf("������ %d��ŭ�� �������� ������!!\n", damage);
				printf("���� ���� ü�� : %d\n", e->hp);

				Sleep(1000);
				system("cls");

				printf("���� ����!\n");
				damage = e->atk - p->def;
				p->hp -= damage;

				printf("������ %d��ŭ�� �������� �Ծ���!!\n", damage);
				printf("%s�� ���� ü�� : %d\n", p->name, p->hp);
				Sleep(1000);
				system("cls");

			}

			else if (a == 2)
			{
				printf("ü  ���� %d�Դϴ�.\n", p->hp);
				printf("���ݷ��� %d�Դϴ�.\n", p->atk);
				printf("������ %d�Դϴ�.\n", p->def);
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

	Character enemy[3];
	enemy[0].hp = 1000;
	enemy[0].atk = rand() % 50 + 25;
	enemy[0].def = rand() % 50 + 25;

	enemy[1].hp = 1000;
	enemy[1].atk = rand() % 50 + 25;
	enemy[1].def = rand() % 50 + 25;

	enemy[2].atk = rand() % 50 + 25;
	enemy[2].def = rand() % 50 + 25;
	enemy[2].hp = 1000;


	PrintName(&player);
	Battle(&player, &enemy);



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





	return 0;
}

/*
�ؽ�Ʈ ������ ������.

1. ��� ���� ������ �Լ��� �̿��ؼ� ������.

2. ġ�� ����� �־��.(3����ư) �������� �÷��̾��� ü���� 1000���� ����. 1000�϶� 3���� ������ ü��ȸ���� �ƴ�, �Ұ��� ��Ʈ ���

3. �迭�� �̿��Ͽ� ���� 3�� ����. ������ �����ϸ� �� 3���� ���� �ο� �̰ܾ� �¸��� �ȴ�.


*/