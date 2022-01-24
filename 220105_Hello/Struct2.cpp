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

void PrintName()
{
	Character player;

	printf("사용자의 캐릭터를 설정합니다.\n");
	Sleep(1000);
	printf("사용자의 캐릭터 이름을 입력해주세요 : ");
	scanf("%s", &player.name);
	printf("입력하신 이름 %s로 캐릭터를 생성합니다.\n\n", player.name);
}

void Battle()
{
	Character player;
	Character enemy;
	while (true)
	{
		printf("플레이어의 능력치를 랜덤으로 설정합니다.\n");

		printf("공격력 : %d\n", player.atk = rand() % 50 + 25);
		printf("방어력 : %d\n", player.def = rand() % 50 + 25);

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
			if (enemy.hp <= 0)
			{
				printf("적이 쓰러졌다!!\n");
				break;
			}
			else if (player.hp <= 0)
			{
				printf("플레이어가 쓰러졌다!!\n");
				break;

			}


			printf("1. 공격 2. 능력치 확인 \n");
			scanf("%d", &a);

			if (a == 1)
			{
				printf("%s의 공격!!\n\n", player.name);

				damage = player.atk - enemy.def;
				enemy.hp -= damage;

				printf("적에게 %d만큼의 데미지를 입혔다!!\n", damage);
				printf("적의 남은 체력 : %d\n", enemy.hp);

				Sleep(1000);
				system("cls");

				printf("적의 공격!\n");
				damage = enemy.atk - player.def;
				player.hp -= damage;

				printf("적에게 %d만큼의 데미지를 입었다!!\n", damage);
				printf("%s의 남은 체력 : %d\n", player.name, player.hp);
				Sleep(1000);
				system("cls");

			}

			else if (a == 2)
			{
				printf("체  력은 %d입니다.\n", player.hp);
				printf("공격력은 %d입니다.\n", player.atk);
				printf("방어력은 %d입니다.\n", player.def);
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

	PrintName();
	Battle();
	

	
	return 0;
}