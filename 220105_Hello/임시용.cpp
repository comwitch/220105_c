#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<Windows.h>

/*
	����ü��
	��� ����Ʒ� �ʿ��� �����͵��� ��� �����ϴ� ���
	ex) ĳ���� ����ü ������ ĳ���Ͱ� ������ �� �������ͽ��� ���ο� ������ ����

	����ü�� ����� ���� �ڷ����̴�. �� ����� ����ü�� �ڷ������� ��� �����ϴ�
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
	printf("������� ĳ���͸� �����մϴ�\n");
	Sleep(1000); //sleep�Լ��� 1000������ 1���̴�
	printf("ĳ���� �̸��� �Է��ϼ���: ");

	scanf_s("%s", pPlayerName->arName, pPlayerName->nLength);

	printf("�Է��Ͻ� �̸� %s�� ĳ���͸� �����մϴ�\n\n", pPlayerName->arName);
}

void Battle(sCHARACTER* pPlayer, sCHARACTER* pMonster, int nLength)
{
	char cReset{};
	int nStart{};
	int nButten{};
	int nDamage{};

	while (true)
	{
		printf("�÷��̾��� �ɷ�ġ�� �������� �����մϴ�\n");
		printf("�÷��̾��� ü���� %d�Դϴ�\n", pPlayer->nHp = 1000);
		printf("���ݷ�: %d\n", pPlayer->nAttack = rand() % 50 + 25);
		printf("����: %d\n", pPlayer->nDefend = rand() % 50 + 25);

		printf("�÷��̾��� �ɷ�ġ�� �� �����Ͻðڽ��ϱ�?: y/n\n");

		getchar();
		scanf_s("%c", &cReset, 1);

		if (cReset == 'n')
		{
			printf("�÷��̾��� �ɷ�ġ�� �� �����մϴ�\n");
			break;
		}
		else if (cReset == 'y')

			printf("�÷��̾��� �ɷ�ġ�� �����մϴ�\n");
	}

	printf("������ �����Ͻðڽ��ϱ�?: 1.����/ 2.����\n");
	scanf_s("%d", &nStart);

	if (nStart == 1)
	{
		printf("���� ��Ÿ����!!\n");

		for (int i = 0; i < nLength; i++)
		{
			while (true)
			{



				printf("1. ���� 2. �ɷ�ġ Ȯ��\n");
				scanf_s("%d", &nButten);

				if (nButten == 1)
				{
					Sleep(1000);
					system("cls");
					printf("%s�� ����!!\n", pPlayer->arName);

					nDamage = pPlayer->nAttack - pMonster[i].nDefend;
					if (nDamage <= 0)
						printf("Miss\n");
					else
					{
						pMonster[i].nHp -= nDamage;
						printf("������ %d��ŭ�� �������� ������!!\n", nDamage);
					}

					printf("���� ���� ü��: %d\n", pMonster[i].nHp);

					Sleep(1000);
					system("cls");
					if (pMonster[i].nHp > 0)
					{

						printf("���� ����!\n");
						nDamage = pMonster[i].nAttack - pPlayer->nDefend;
						if (nDamage <= 0)
							printf("Miss\n");
						else
						{
							pPlayer->nHp -= nDamage;
							printf("������ %d��ŭ�� �������� �Ծ���!!\n", nDamage);

						}
					}
					if (pMonster[i].nHp <= 0)
					{
						printf("���� ��������!!\n");
						break;
					}
					else if (pPlayer->nHp <= 0)
					{
						printf("�÷��̾ ��������!!\n");
						break;
					}

					printf("%s�� ���� ü��: %d\n", pPlayer->arName, pPlayer->nHp);
					Sleep(1000);
					system("cls");


				}

				else if (nButten == 2)
				{
					printf("ü ���� %d�Դϴ�\n", pPlayer->nHp);
					printf("���ݷ��� %d�Դϴ�\n", pPlayer->nAttack);
					printf("������ %d�Դϴ�\n", pPlayer->nDefend);
				}
			}
		}
		printf("���� ��� ��������\\n");
		printf("���� ��\n");


	}
}