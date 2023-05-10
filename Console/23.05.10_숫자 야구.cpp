/*
과제1. 숫자 야구

- 0 ~ 9까지의 숫자 중 컴퓨터가 임의로 3개를 뽑는다.

- 컴퓨터가 뽑은 숫자를 플레이어가 임의 숫자 3개를 선택하여 숫자와 자리수까지 맞추는 게임

- 만약 선택한 숫자가 컴퓨터 숫자와 같으나 자리수가 다를 경우
ㄴ 1 볼(1B)

- 만약 선택한 숫자가 컴퓨터 숫자와 같고 자리수까지 일치할 경우
ㄴ 1 스트라이크(1S)

- 만약 선택한 숫자가 컴퓨터 숫자와 같지 않고 자리수도 일치하지 않으면
ㄴ 1 아웃(1 Out)

- 이렇게 한 턴에 3S를 만들 경우 몇번만에 맞췄는지 결과를 보여주며 게임 종료

- 필수 : 치트 O, 배열 x
*/

#include <iostream>
#include <time.h>
#include <Windows.h>

using std::cout;
using std::cin;
using std::endl;


void main()
{
	srand(time(NULL));

	int firstNum = rand() % 10;
	int secondNum = rand() % 10;
	int thirdNum = rand() % 10;
	
	// 중복방지
	if (firstNum == secondNum)
	{
		firstNum = rand() % 10;
	}
	if (firstNum == thirdNum)
	{
		thirdNum = rand() % 10;
	}
	if (thirdNum == secondNum)
	{
		thirdNum = rand() % 10;
	}
	
	int userNum1 = 0;
	int userNum2 = 0;
	int userNum3 = 0;
	
	int playCount = 1;

	while (true)
	{
		printf("치트 번호 확인 : ");
		printf("%d %d %d\n\n", firstNum, secondNum, thirdNum);

		printf("숫자 야구 게임 시작\n");
		printf("숫자 3자리를 입력하세요.\n");

		cin >> userNum1 >> userNum2 >> userNum3;

		printf("첫번째 숫자 : %d, 두번째 숫자 : %d, 세번째 숫자 : %d\n", userNum1, userNum2, userNum3);

		cout << '\n';

		if (firstNum == userNum1 && secondNum == userNum2 && thirdNum == userNum3)
		{
			printf("홈런\n");
			printf("게임 종료\n");
			printf("플레이 횟수 : %d\n", playCount);
			Sleep(2000);
			break;
		}
		else if((0 < userNum1 && userNum1 < 10) && (0 < userNum2 && userNum2 < 10) && (0 < userNum3 && userNum3 < 10))
		{
			// 첫번째 번호
			if (userNum1 == firstNum)
			{
				// 1s
				printf("1S ");
				Sleep(1000);
			}
			else if (userNum1 == secondNum || userNum1 == thirdNum)
			{
				// 1b
				printf("1B ");
				Sleep(1000);
			}
			else
			{
				// out
				printf("1 Out ");
				Sleep(1000);
			}

			// 두번째 번호
			if (userNum2 == secondNum)
			{
				// 1s
				printf("1S ");
				Sleep(1000);
			}
			else if (userNum2 == firstNum || userNum2 == thirdNum)
			{
				// 1b
				printf("1B ");
				Sleep(1000);
			}
			else
			{
				// out
				printf("1 Out ");
				Sleep(1000);
			}
			// 3번째 번호
			if (userNum3 == thirdNum)
			{
				// 1s
				printf("1S ");
				Sleep(1000);
			}
			else if (userNum3 == secondNum || userNum3 == firstNum)
			{
				// 1b
				printf("1B ");
				Sleep(1000);
			}
			else
			{
				// out
				printf("1 Out ");
				Sleep(1000);
			}
		}
		else
		{
			printf("0 ~ 9 에 해당하는 숫자만 입력하세요\n");
			Sleep(1000);
		}

		++playCount;
		Sleep(2000);

		system("cls");
	}
}