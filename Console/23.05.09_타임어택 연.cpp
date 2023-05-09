#include <iostream>
#include <Windows.h>
#include <time.h>

using std::cout;
using std::cin;
using std::endl;


// 타임어택 연습하기
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
		printf("치트 : %d\n", randNum);

		cout << '\n';

		printf("게임 시작\n");
		printf("가위 = 0, 바위 = 1, 보 = 2\n");
		printf("원하는 카드를 고르세요. \n");

		cin >> userNum;

		if (userNum > 2 || userNum < 0)
		{
			printf("해당하는 카드가 없습니다. \n");
			--count;
			system("cls");
		}
		else
		{
			if (userNum == 0)
			{
				if (userNum == randNum)
				{
					printf("비겼습니다.\n");
				}
				else if (randNum == 1)
				{
					printf("이겼습니다.\n");
				}
				else
				{
					printf("졌습니다.\n");
				}
			}
			else if (userNum == 1)
			{
				if (userNum == randNum)
				{
					printf("비겼습니다.\n");
				}
				else if (randNum == 0)
				{
					printf("이겼습니다.\n");
				}
				else
				{
					printf("졌습니다.\n");
				}
			}
			else
			{
				if (userNum == randNum)
				{
					printf("비겼습니다.\n");
				}
				else if (randNum == 1)
				{
					printf("이겼습니다.\n");
				}
				else
				{
					printf("졌습니다.\n");
				}
			}
		}

		Sleep(2000);
		system("cls");
		++count;
	}

	printf("게임 종료 \n");

}