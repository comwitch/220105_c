#include <stdio.h>
/*
	���� �迭
    (�ڷ���)(�迭�̸�)[���Ұ���]
	int arr[5]  = {1,2,3,4,5};
	�迭 ũ�� �ڷ���byte * �迭���Ҽ�

	�迭�� ����� �ʱ�ȭ
	1. int arr[3] = {1,2,3}; // �迭�� ũ�⸸ŭ �ϳ��� ���� �ʱ�ȭ�Ѵ�.
	2. int arr[3] = {}; // ��� ���Ҹ� 0���� �ʱ�ȭ�Ѵ�.
	3. int arr[5] = {1}; //ù��° ���Ҵ� 1�� �ʱ�ȭ �ϰ� ������ ���Ҹ� 0���� �ʱ�ȭ�Ѵ�.
	4. int arr[] = {1,2}; //�ʱ�ȭ ����ŭ �迭��ũ�⸦ ��´�.



*/
int main()
{
	

	//int arr[5] = {1,2,3,4,5};
	//for (int i = 0; i < 5; i++)
	//{
	//	printf("�迭�� �� ��� : %d \n", arr[i]);
	//}

	//printf("0��° �迭�� �� : %d\n", arr[0]);
	//printf("1��° �迭�� �� : %d\n", arr[1]);
	//printf("2��° �迭�� �� : %d\n", arr[2]);
	//printf("3��° �迭�� �� : %d\n", arr[3]);
	//printf("4��° �迭�� �� : %d\n", arr[4]);

	//printf("�迭�� ũ�� : %d\n", sizeof(arr));

	//�ձ��ϱ�
	// 
	// 
	// 
	//int total = 0; //���� �����Ұ�
	//int num = 0; // �Է¹��� ����
	//int arr[5];  //�Է¹��� ������ ������ �迭
	//for (int i = 0; i < 5; i++)
	//{
	//	printf("���ڸ� �Է��� �ּ��� : ");
	//	scanf("%d", &num);

	//	arr[i] = num;
	//	printf("arr[%d]��° �Է��� �� %d�� ����Ǿ����ϴ�.\n", i, num);
	//	
	//	total += arr[i]; // total + arr[i]
	//}

	//printf("���� : %d\n", total);

	//�������� ����ϱ�

	//int num[5];
	//int count;

	//for (count = 0; count < 5; count++);
	//{
	//	printf("���ڸ� �Է����ּ��� : ");
	//	scanf("%d", &num[count]);
	//}
	//
	//for (count = 4; count >= 0; count-- );
	//{
	//	printf("%d\n", num[count]);
	//}

	//int DArr[3][3] = {};
	//printf("%d", sizeof(DArr));

	int score[3][2];

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			if (j == 0)
			{
				printf("%d���� �л��� �������� : ",i + 1);
				scanf("%d", &score[i][j]);
			}
			else if (j == 1)
			{
				printf("%d���� �л��� �������� : ", i + 1);
				scanf("%d", &score[i][j]);
			}
		}
	}
	for (int i = 0; i < 3; i++)
	{
		printf("%d���� �л��� �������� %d �������� : %d\n", i + 1, score[i][0], score[i][1]);
	}
	return 0;
}