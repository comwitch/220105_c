#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<Windows.h>

/*
	구조체란
	어떠한 개념아래 필요한 데이터들을 묶어서 선언하는 방식
	ex) 캐릭터 구조체 선헌후 캐릭터가 가져야 할 스테이터스를 내부에 변수로 선언

	구조체는 사용자 정의 자료형이다. 즉 선언된 구조체는 자료형으로 사용 가능하다
*/

struct sCHARACTER
{
	char arName[256]{};
	int nLength = 256;
	int nHp{};
	int nAttack{};
	int nDefend{};
};

void PrintName(sCHARACTER* pPlayerName);

void Battle(sCHARACTER* pPlayer, sCHARACTER* pMonster, int nLength);

int main()
{
	sCHARACTER sCharacter{};
	sCHARACTER sEnemy[3]{};
	int nLength{};

	nLength = 3;

	sEnemy[0].nHp = 100;
	sEnemy[0].nAttack = rand() % 50 + 25;
	sEnemy[0].nDefend = rand() % 50 + 25;

	sEnemy[1].nHp = 100;
	sEnemy[1].nAttack = rand() % 50 + 25;
	sEnemy[1].nDefend = rand() % 50 + 25;

	sEnemy[2].nHp = 100;
	sEnemy[2].nAttack = rand() % 10 + 1;
	sEnemy[2].nDefend = rand() % 10 + 1;


	PrintName(&sCharacter);
	Battle(&sCharacter, sEnemy, nLength);


}

void PrintName(sCHARACTER* pPlayerName)
{
	printf("사용자의 캐릭터를 설정합니다\n");
	Sleep(1000); //sleep함수는 1000단위가 1초이다
	printf("캐릭터 이름을 입력하세요: ");

	scanf_s("%s", pPlayerName->arName, pPlayerName->nLength);

	printf("입력하신 이름 %s로 캐릭터를 생성합니다\n\n", pPlayerName->arName);
}

void Battle(sCHARACTER* pPlayer, sCHARACTER* pMonster, int nLength)
{
	char cReset{};
	int nStart{};
	int nButten{};
	int nDamage{};

	while (true)
	{
		printf("플레이어의 능력치를 랜덤으로 설정합니다\n");
		printf("플레이어의 체력은 %d입니다\n", pPlayer->nHp = 1000);
		printf("공격력: %d\n", pPlayer->nAttack = rand() % 50 + 25);
		printf("방어력: %d\n", pPlayer->nDefend = rand() % 50 + 25);

		printf("플레이어의 능력치를 재 설정하시겠습니까?: y/n\n");

		getchar();
		scanf_s("%c", &cReset, 1);

		if (cReset == 'n')
		{
			printf("플레이어의 능력치를 재 설정합니다\n");
			break;
		}
		else if (cReset == 'y')

			printf("플레이어의 능력치를 설정합니다\n");
	}

	printf("게임을 시작하시겠습니까?: 1.시작/ 2.종료\n");
	scanf_s("%d", &nStart);

	if (nStart == 1)
	{
		printf("적이 나타났다!!\n");

		for (int i = 0; i < nLength; i++)
		{
			while (true)
			{



				printf("1. 공격 2. 능력치 확인\n");
				scanf_s("%d", &nButten);

				if (nButten == 1)
				{
					Sleep(1000);
					system("cls");
					printf("%s의 공격!!\n", pPlayer->arName);

					nDamage = pPlayer->nAttack - pMonster[i].nDefend;
					if (nDamage <= 0)
						printf("Miss\n");
					else
					{
						pMonster[i].nHp -= nDamage;
						printf("적에게 %d만큼의 데미지를 입혔다!!\n", nDamage);
					}

					printf("적의 남은 체력: %d\n", pMonster[i].nHp);

					Sleep(1000);
					system("cls");
					if (pMonster[i].nHp > 0)
					{

						printf("적의 공격!\n");
						nDamage = pMonster[i].nAttack - pPlayer->nDefend;
						if (nDamage <= 0)
							printf("Miss\n");
						else
						{
							pPlayer->nHp -= nDamage;
							printf("적에게 %d만큼의 데미지를 입었다!!\n", nDamage);

						}
					}
					if (pMonster[i].nHp <= 0)
					{
						printf("적이 쓰러졌다!!\n");
						break;
					}
					else if (pPlayer->nHp <= 0)
					{
						printf("플레이어가 쓰러졌다!!\n");
						break;
					}

					printf("%s의 남은 체력: %d\n", pPlayer->arName, pPlayer->nHp);
					Sleep(1000);
					system("cls");


				}

				else if (nButten == 2)
				{
					printf("체 력은 %d입니다\n", pPlayer->nHp);
					printf("공격력은 %d입니다\n", pPlayer->nAttack);
					printf("방어력은 %d입니다\n", pPlayer->nDefend);
				}
			}
		}
		printf("적이 모두 쓰러졌다\\n");
		printf("게임 끝\n");


	}
}