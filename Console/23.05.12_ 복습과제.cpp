//����2.���� ����
//
//1. �� ������ ���� ���ϴ� ���α׷� �ۼ�
//- �� ���� ���ڸ� ����ڸ� �Է� �޴´�.
//
//- �Է��� �� ���� ������ ���� ����ϸ� ok
//
//- ����ó�� : 5�� ������ 1�� ������->x
//�� ������ ���� 100�̻��̸� ���α׷��� �ڵ����� ���� �ȴ�.
//
//EX) 1�� 5�� �Է�->��� �� : 9

#include <iostream>
#include <Windows.h>

using std::cout;
using std::cin;
using std::endl;

void main()
{
	int numA = 0;
	int numB = 0;
	int result = 0;

	while (result <= 100)
	{
		printf("�Է��� �� ���� ������ �� ���\n");
		printf("�� ���� �Է� ");
		cin >> numA >> numB;

		if (numA > numB)
		{
			printf(" X \n");
			Sleep(1000);
			continue;
		}
		else
		{
			for (int i = numA + 1; i < numB; ++i)
			{
				result += i;
			}
		}

		printf(" �� ���� ������ �� : %d\n", result);
		Sleep(1000);
		system("cls");
	}
}