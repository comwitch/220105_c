#include <stdio.h>

/*
	int  (������)				4byte   1byte = 8bit
	char (������) abc			1byte
	float (�Ǽ���) 3.15			4byte
	double (�Ǽ���) 3.14			8byte
	
	+���ǻ���
	1. �������� Ư������, ������ ������Ѵ�.
		^a, a b (X)
	2. ������, ����, �����(_) �� ����� �����ϴ�. �� ���ڰ� �տ� ���� �ȵ�.
	3. Ű����/������ ���������� ����� �Ұ����ϴ�. (int �⺻�Լ�)
*/

int main()
{
	int a = 10;  //����
	float f = 10.0f;
	char c = 'a';

	printf("a�� ����� ���� %d �Դϴ�\n", a); //���� ������
	printf("f�� ����� ���� %f �Դϴ�\n", f);	 // �Ǽ���
	printf("c�� ����� ���� %c �Դϴ�\n", c); // character


	int b = 20; // ����� �ʱ�ȭ
	int c;
	c = 100;
	printf("a�� b�� ���� : %d�Դϴ�.\n", a + b); //���� ������ %d ������ %f float %c char.

	return 0;
}