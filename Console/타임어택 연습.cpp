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
		
		printf("치트 : %d\n\n", randNum);
		printf("가위바위보 게임 시작\n");
		printf("가위 = 0, 주먹 = 1, 보 = 2\n");
		printf("원하는 카드를 고르세요.\n");

		cin >> userNum;

		if (userNum < 0 || userNum > 2)
		{
			printf("해당하는 카드가 없습니다.\n");
			--count;
			system("cls");
			continue;
		}
		else if(userNum == 0)
		{
			if (userNum == randNum)
			{
				printf("비겼습니다.\n");
			}
			else if (randNum == 1)
			{
				printf("졌습니다.\n");
			}
			else
			{
				printf("이겼습니다.\n");
			}
		}
		else if (userNum == 1)
		{
			if (userNum == randNum)
			{
				printf("비겼습니다.\n");
			}
			else if (randNum == 2)
			{
				printf("졌습니다.\n");
			}
			else
			{
				printf("이겼습니다.\n");
			}
		}
		else
		{
			if (userNum == randNum)
			{
				printf("비겼습니다.\n");
			}
			else if (randNum == 0)
			{
				printf("졌습니다.\n");
			}
			else
			{
				printf("이겼습니다.\n");
			}
		}

		Sleep(2000);
		system("cls");
		++count;
		
	}
	printf("게임 종료\n");
}