#include <iostream>
#include <Windows.h>
#include <time.h>

using std::cout;
using std::cin;
using std::endl;


// Ÿ�Ӿ��� �����ϱ�
void main()
{
	int userNum = 0;
	int randNum = 0;
	int count = 0;
	const int endGame = 5;


	while (count < endGame)
	{
		srand(time(NULL));
		randNum = rand() % 3;
		printf("ġƮ : %d\n", randNum);

		cout << '\n';

		printf("���� ����\n");
		printf("���� = 0, ���� = 1, �� = 2\n");
		printf("���ϴ� ī�带 ������. \n");

		cin >> userNum;

		if (userNum > 2 || userNum < 0)
		{
			printf("�ش��ϴ� ī�尡 �����ϴ�. \n");
			--count;
			system("cls");
		}
		else
		{
			if (userNum == 0)
			{
				if (userNum == randNum)
				{
					printf("�����ϴ�.\n");
				}
				else if (randNum == 1)
				{
					printf("�̰���ϴ�.\n");
				}
				else
				{
					printf("�����ϴ�.\n");
				}
			}
			else if (userNum == 1)
			{
				if (userNum == randNum)
				{
					printf("�����ϴ�.\n");
				}
				else if (randNum == 0)
				{
					printf("�̰���ϴ�.\n");
				}
				else
				{
					printf("�����ϴ�.\n");
				}
			}
			else
			{
				if (userNum == randNum)
				{
					printf("�����ϴ�.\n");
				}
				else if (randNum == 1)
				{
					printf("�̰���ϴ�.\n");
				}
				else
				{
					printf("�����ϴ�.\n");
				}
			}
		}

		Sleep(2000);
		system("cls");
		++count;
	}

	printf("���� ���� \n");

}