#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

/*
구조체란
	어떠한 개념아래 필요한 데이터들을 묶어서 선언하는 방식.
	ex) 캐릭터 구조체 선언 후 캐릭터가 가져야 할 스테이터스를 내부에 변수로 선언

	구조체는 사용자 정의 자료형이다. 즉 선언된 구조체는 자료형으로 사용이 가능하다.



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
	

	printf("사용자의 캐릭터를 설정합니다.\n");
	Sleep(1000);
	printf("사용자의 캐릭터 이름을 입력해주세요 : ");
	scanf("%s", player->name);
	printf("입력하신 이름 %s로 캐릭터를 생성합니다.\n\n", player->name);
}

void Battle(Character* p, Character* e)
{
	char reset = 0;
	char start = 0;
	int damage = 0;
	int a = 0;
	while (true)
	{
		printf("플레이어의 능력치를 랜덤으로 설정합니다.\n");

		printf("공격력 : %d\n", p->atk = rand() % 50 + 25);
		printf("방어력 : %d\n", p->def = rand() % 50 + 25);

		printf("플레이어의 능력치를 다시 조정하시겠습니까? : y / n \n");
		getchar();
		scanf("%c", &reset);
		if (reset == 'y')
			printf("플레이어의 능력치를 재조정합니다.\n");
		else
		{
			printf("플레이어의 능력치를 설정합니다.\n");
			break;
		}
	}

	printf("게임을 시작하시겠습니까? 1. 시작 2. 종료");
	scanf("%d", &start);

	if (start == 1)
	{
		Sleep(1000);
		system("cls");
		printf("적이 나타났다!!\n");
		while (true)
		{
			if (e->hp <= 0)
			{
				printf("적이 쓰러졌다!!\n");
				break;
			}
			else if (p->
				hp <= 0)
			{
				printf("플레이어가 쓰러졌다!!\n");
				break;

			}


			printf("1. 공격 2. 능력치 확인 \n");
			scanf("%d", &a);

			if (a == 1)
			{
				printf("%s의 공격!!\n\n", p->name);

				damage = p->atk - e->def;
				e->hp -= damage;

				printf("적에게 %d만큼의 데미지를 입혔다!!\n", damage);
				printf("적의 남은 체력 : %d\n", e->hp);

				Sleep(1000);
				system("cls");

				printf("적의 공격!\n");
				damage = e->atk - p->def;
				p->hp -= damage;

				printf("적에게 %d만큼의 데미지를 입었다!!\n", damage);
				printf("%s의 남은 체력 : %d\n", p->name, p->hp);
				Sleep(1000);
				system("cls");

			}

			else if (a == 2)
			{
				printf("체  력은 %d입니다.\n", p->hp);
				printf("공격력은 %d입니다.\n", p->atk);
				printf("방어력은 %d입니다.\n", p->def);
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



	/*printf("공격력 : %d\n", player.atk);
	printf("방어력 : %d\n", player.def);
	printf("체  력 : %d\n", player.hp);*/

	/*printf("사용자의 캐릭터를 설정합니다.\n");
	printf("사용자의 캐릭터 이름을 입력해주세요 : ");
	scanf("%s", &player.name);
	printf("입력하신 이름 %s로 캐릭터를 생성합니다.\n\n", player.name);

	printf("플레이어의 기본 능력치를 설정합니다.\n");
	printf("체  력은 %d입니다.\n", player.hp);
	printf("공격력은 %d입니다.\n", player.atk);
	printf("방어력은 %d입니다.\n", player.def);*/





	return 0;
}

/*
텍스트 게임을 만들자.

1. 모든 게임 구현은 함수를 이용해서 만들자.

2. 치료 기능을 넣어라.(3번버튼) 조건으로 플레이어의 체력은 1000으로 고정. 1000일때 3번을 누르면 체력회복이 아닌, 불가능 멘트 출력

3. 배열을 이용하여 적을 3명 구성. 게임을 진행하면 총 3명의 적과 싸워 이겨야 승리가 된다.


*/