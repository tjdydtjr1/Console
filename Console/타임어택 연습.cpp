#include <iostream>
#include <Windows.h>
#include <time.h>

using std::cout;
using std::cin;
using std::endl;

void main()
{
	int userNum;
	int randNum;
	int count = 0;
	const int endGame = 5;

	while (count < endGame)
	{
		srand(time(NULL));
		randNum = rand() % 3;
		
		printf("ġƮ : %d\n\n", randNum);
		printf("���������� ���� ����\n");
		printf("���� = 0, �ָ� = 1, �� = 2\n");
		printf("���ϴ� ī�带 ������.\n");

		cin >> userNum;

		if (userNum < 0 || userNum > 2)
		{
			printf("�ش��ϴ� ī�尡 �����ϴ�.\n");
			--count;
			system("cls");
			continue;
		}
		else if(userNum == 0)
		{
			if (userNum == randNum)
			{
				printf("�����ϴ�.\n");
			}
			else if (randNum == 1)
			{
				printf("�����ϴ�.\n");
			}
			else
			{
				printf("�̰���ϴ�.\n");
			}
		}
		else if (userNum == 1)
		{
			if (userNum == randNum)
			{
				printf("�����ϴ�.\n");
			}
			else if (randNum == 2)
			{
				printf("�����ϴ�.\n");
			}
			else
			{
				printf("�̰���ϴ�.\n");
			}
		}
		else
		{
			if (userNum == randNum)
			{
				printf("�����ϴ�.\n");
			}
			else if (randNum == 0)
			{
				printf("�����ϴ�.\n");
			}
			else
			{
				printf("�̰���ϴ�.\n");
			}
		}

		Sleep(2000);
		system("cls");
		++count;
		
	}
	printf("���� ����\n");
}