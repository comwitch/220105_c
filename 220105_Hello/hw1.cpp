#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#include<string.h>

struct Character
{
	char name[20] = {};
	int hp = 200;   //��
	int atk = 0;    //���ݴɷ�ġ
	int def = 0;	//����ġ
	int mag = 0;	//�����ɷ�ġ
};

void Nameselect(Character* player)		//�̸������Լ�
{
	char select = 0;
	printf("�������\n\n");
	while (true)
	{
		Sleep(1000);
		printf("�̸��� : ");
		scanf("%s", player->name);
		printf("�� �̸����� ��������? (�̸� : %s)(y/n)", player->name);
		getchar();
		scanf("%c", &select);
		if (select == 'y')
		{	
			printf("�׾˰ڽ��ϴ�\n\n");
			Sleep(1000);
			system("cls");
			break;
		}
		else if (select == 'n')
		{
			printf("\n�׷� �ٽ� �������ּ���!!\n\n");
			Sleep(1000);
			system("cls");
		}
	}
}

void Statusselect(Character* p) //�ɷ�ġ ����
{
	char select = 0;
	while (true)
	{
		srand(time(NULL));
		p->atk = rand() % 10 + 6; //���ݷ� 6~ 16
		p->def = rand() % 5 + 1; //���� 1~5
		p->mag = rand() % 10 + 1;	//�����ɷ�ġ 1~10
		printf("�� �ɷ�ġ�� �������ʴϱ�?\n\nhp : 200(����)\natk : %d\ndef : %d\nmag : %d\n(y/n)",p->atk,p->def,p->mag);
		getchar();
		scanf("%c", &select);
		
		if (select == 'y')
		{
			Sleep(1000);
			printf("�˰ڳ�!\n\n");
			Sleep(1000);
			system("cls");
			break;
		}
		else if (select == 'n')
		{
			printf("\n�׷� �ٽ� �������ּ���!!!!!!!\n\n");
			Sleep(1000);
			system("cls");
		}
	}
}

void Enemyselect(Character* p)
{
	srand(time(NULL));
	p->hp = 50;
	p->atk = rand() % 10 + 6;
	p->def = rand() % 5 + 1;
	p->mag = rand() % 10 + 1;
	
}


void Battle(Character* p, Character* e)
{
	char reset = 0;
	char start = 0;
	int damage = 0;
	int heal = 0;
	int a = 0;

	Sleep(1000);
	system("cls");
	printf("%s��(��) ��Ÿ����!!\n", e->name);
	while (true)
	{
		if (e->hp <= 0)
		{
			printf("%s ��������!!\n", e->name);
			break;
		}
		else if (p->
			hp <= 0)
		{
			printf("�÷��̾ ��������!!\n");
			break;
			}

		printf("1. ���� 2. �ɷ�ġ Ȯ�� 3. ü��ȸ�� \n");
		scanf("%d", &a);

		if (a == 1)
		{
			printf("%s�� ����!!\n\n", p->name);

			damage = p->atk - e->def;
			e->hp -= damage;

			printf("%s���� %d��ŭ�� �������� ������!!\n", e->name, damage);
			printf("���� ���� ü�� : %d\n", e->hp);

			Sleep(1000);
			system("cls");

			printf("���� ����!\n");
			damage = e->atk - p->def;
			p->hp -= damage;

			printf("�÷��̾�� %d��ŭ�� �������� �Ծ���!!\n", damage);
			printf("%s�� ���� ü�� : %d\n", p->name, p->hp);
			Sleep(1000);
			system("cls");

		}

		else if (a == 2)
		{
			printf("ü  ���� %d�Դϴ�.\n", p->hp);
			printf("���ݷ��� %d�Դϴ�.\n", p->atk);
			printf("������ %d�Դϴ�.\n", p->def);
			printf("ȸ������ %d�Դϴ�.\n", p->mag);
		}
		else if (a == 3)
		{
			heal = (p->mag) * 4;
			int tmp = p->hp + heal;
			if (p->hp == 200)
			{
				printf("��ȿ���� ���� �ൿ�Դϴ�.\n");
				p->hp = 200;
				Sleep(1000);
				system("cls");
			}
			else if ( tmp > 200) //ü�� ȸ�� ������ 200���� �س��ҽ��ϴ�.
			{
				printf("ȸ���߽��ϴ�!\n");
				p->hp = 300;
				Sleep(1000);
				system("cls");
			}
			else
			{
				printf("ȸ���߽��ϴ�!\n");
				p->hp = p->hp + heal;
				Sleep(1000);
				system("cls");
			}
		}

	}
}




int main()
{
	Character player;
	Character enemy[3];
	strcpy(enemy[0].name , "������"); 
	strcpy(enemy[1].name , "������2");
	strcpy(enemy[2].name , "������3");
	for (int i = 0; i < 3; i++)
	{
		Enemyselect(&enemy[i]);
	}



	Nameselect(&player);
	Statusselect(&player);
	for (int i = 0; i < 3; i++)
	{
		Battle(&player, &enemy[i]);
		if (player.hp <= 0)    //�÷��̾��� �ǰ� 0���� ������ ���� ����� �ο� �� �����ϴ�.
		{
			printf("���ӿ���\n");
			break;     
		}
	}

	return 0;
}