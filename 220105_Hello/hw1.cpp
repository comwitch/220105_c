#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#include<string.h>

struct Character
{
	char name[20] = {};
	int hp = 200;   //피
	int atk = 0;    //공격능력치
	int def = 0;	//방어수치
	int mag = 0;	//마법능력치
};

void Nameselect(Character* player)		//이름설정함수
{
	char select = 0;
	printf("어서오세요\n\n");
	while (true)
	{
		Sleep(1000);
		printf("이름은 : ");
		scanf("%s", player->name);
		printf("이 이름으로 괜찮은가? (이름 : %s)(y/n)", player->name);
		getchar();
		scanf("%c", &select);
		if (select == 'y')
		{	
			printf("네알겠습니다\n\n");
			Sleep(1000);
			system("cls");
			break;
		}
		else if (select == 'n')
		{
			printf("\n그럼 다시 선택해주세요!!\n\n");
			Sleep(1000);
			system("cls");
		}
	}
}

void Statusselect(Character* p) //능력치 설정
{
	char select = 0;
	while (true)
	{
		srand(time(NULL));
		p->atk = rand() % 10 + 6; //공격력 6~ 16
		p->def = rand() % 5 + 1; //방어력 1~5
		p->mag = rand() % 10 + 1;	//마법능력치 1~10
		printf("이 능력치로 괜찮으십니까?\n\nhp : 200(고정)\natk : %d\ndef : %d\nmag : %d\n(y/n)",p->atk,p->def,p->mag);
		getchar();
		scanf("%c", &select);
		
		if (select == 'y')
		{
			Sleep(1000);
			printf("알겠네!\n\n");
			Sleep(1000);
			system("cls");
			break;
		}
		else if (select == 'n')
		{
			printf("\n그럼 다시 선택해주세요!!!!!!!\n\n");
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
	printf("%s이(가) 나타났다!!\n", e->name);
	while (true)
	{
		if (e->hp <= 0)
		{
			printf("%s 쓰러졌다!!\n", e->name);
			break;
		}
		else if (p->
			hp <= 0)
		{
			printf("플레이어가 쓰러졌다!!\n");
			break;
			}

		printf("1. 공격 2. 능력치 확인 3. 체력회복 \n");
		scanf("%d", &a);

		if (a == 1)
		{
			printf("%s의 공격!!\n\n", p->name);

			damage = p->atk - e->def;
			e->hp -= damage;

			printf("%s에게 %d만큼의 데미지를 입혔다!!\n", e->name, damage);
			printf("적의 남은 체력 : %d\n", e->hp);

			Sleep(1000);
			system("cls");

			printf("적의 공격!\n");
			damage = e->atk - p->def;
			p->hp -= damage;

			printf("플레이어는 %d만큼의 데미지를 입었다!!\n", damage);
			printf("%s의 남은 체력 : %d\n", p->name, p->hp);
			Sleep(1000);
			system("cls");

		}

		else if (a == 2)
		{
			printf("체  력은 %d입니다.\n", p->hp);
			printf("공격력은 %d입니다.\n", p->atk);
			printf("방어력은 %d입니다.\n", p->def);
			printf("회복량은 %d입니다.\n", p->mag);
		}
		else if (a == 3)
		{
			heal = (p->mag) * 4;
			int tmp = p->hp + heal;
			if (p->hp == 200)
			{
				printf("유효하지 않은 행동입니다.\n");
				p->hp = 200;
				Sleep(1000);
				system("cls");
			}
			else if ( tmp > 200) //체력 회복 상한을 200으로 해놓았습니다.
			{
				printf("회복했습니다!\n");
				p->hp = 300;
				Sleep(1000);
				system("cls");
			}
			else
			{
				printf("회복했습니다!\n");
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
	strcpy(enemy[0].name , "이정범"); 
	strcpy(enemy[1].name , "이정범2");
	strcpy(enemy[2].name , "이정범3");
	for (int i = 0; i < 3; i++)
	{
		Enemyselect(&enemy[i]);
	}



	Nameselect(&player);
	Statusselect(&player);
	for (int i = 0; i < 3; i++)
	{
		Battle(&player, &enemy[i]);
		if (player.hp <= 0)    //플레이어의 피가 0보다 낮으면 다음 사람과 싸울 수 없습니다.
		{
			printf("게임오버\n");
			break;     
		}
	}

	return 0;
}