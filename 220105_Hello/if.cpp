#include <stdio.h>
/*

	if : ����, ���� �б⹮
	if�� ���ǿ� ���� �����Ű�� �б⹮�̴�. ���� ����� ������ �ݵ�� ������ ��� �����Ǵ���
	üũ�ؾ߸� �Ѵ�.
	������ if - else if - else ������ ���� if ���� �ϳ��θ� ������ �ȴٸ�, if - else �������ε� ��밡��

	if������ �߰�ȣ�� ��� �ش� �ڵ尡 �ϳ��� �ڵ��� ���� �����Ϸ����� �˷��־�� �Ѵ�.

	���ǹ������� ������ 

	&& : and
	|| : or
	C �迭 1:�� 0:����

*/
int main()
{
	int a = 0;
	printf("���ڸ� �Է����ּ��� : ");
	scanf("%d", &a);

	if (a == 10)
	{
		printf("a�� ���� 10�������ϴ�.\n");

	}
	else if (a < 10)
	{
		printf("a�� ���� 10���� �۽��ϴ�.\n");
	}
	else
	{
		printf("a�� ���� 10���� ũ�ų� ���� �ʽ��ϴ�.\n");
	}


	return 0;
}