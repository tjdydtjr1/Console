#include <iostream>
#include <time.h>
#include <Windows.h>

using std::cout;
using std::cin;
using std::endl;


//과제2.복습 구현화
//
//- 지금까지 배운 내용을 복습한다.
//	변수, 반복문, 조건문, 함수, 상수, 연산자, 난수, 입출력
//- 어떻게 복습을 했는지 구현화 시켜온다.

// 
void TextColor(int font, int backGround);
void PrintDot(int num);
//
void main()
{
	/*int userNum = 0;
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

	printf("게임 종료 \n");*/
	// ●○
	//cout << "○○○○○○○○○○○○○○○○○○○○○○○○○○●●●●●●●●○○○○○○○○○○○○○○" << endl;
	//cout << "○○○○○○○○○○○○○○○○○○○○○○○○●●●●●●●●○○○○○○○○○○○○○○○○" << endl;
	//cout << "○○○○○○○●●●●●●●●●●●○○○●●●●●●●●○○○○○○○○○○○○○○○○○○○○○○○○○○○" << endl;
	//cout << "○○○○○○○●●●●●●●●●●●●●●●●●●○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○" << endl;
	//cout << "○○○○○○○●●●●●●●●●●●●●●○○○○○○○○○○○○○○○○○○○○○○○○○○○○○" << endl;
	//cout << "○○○○○○○●●●●●●●●●●●●●●●●●●○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○" << endl;
	//cout << "○○○○○○○●●●●●●●●●●●○○○●●●●●●●●○○○○○○○○○○○○○○○○○○○○○○○○○○○" << endl;
	//cout << "○○○○○○○○○○○○○○○○○○○○○○○○●●●●●●●●○○○○○○○○○○○○○○○○" << endl;
	//cout << "○○○○○○○○○○○○○○○○○○○○○○○○○○●●●●●●●●○○○○○○○○○○○○○○" << endl;
	//cout << "○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○" << endl;



	system("mode con:cols=200 lines=300");




	// ▧■ㅁ
	

	//● 가위
	//TextColor(0, 0);
	//cout << "○○"; TextColor(7, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○○○○"; TextColor(7, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○" << endl;
	//cout << "○○○"; TextColor(7, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○○"; TextColor(7, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○" << endl;
	//cout << "○○○○"; TextColor(7, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○"; TextColor(7, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○" << endl;
	//cout << "○○○○○"; TextColor(7, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○"; TextColor(7, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○" << endl;
	//cout << "○○○○○○"; TextColor(7, 0); cout << "●●"; TextColor(0, 0); cout << "○○○"; TextColor(7, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○" << endl;
	//cout << "○○○○○○○"; TextColor(7, 0); cout << "●●"; TextColor(0, 0); cout << "○"; TextColor(7, 0); cout << "●●●"; TextColor(0, 0); cout << "○○○○○○○○" << endl;
	//cout << "○○○"; TextColor(4, 0); cout << "●"; TextColor(0, 0); cout << "○"; TextColor(4, 0); cout << "●"; TextColor(0, 0); cout << "○○"; TextColor(4, 0); cout << "●●●"; TextColor(0, 0); cout << "○○"; TextColor(4, 0); cout << "●"; TextColor(0, 0); cout << "○"; TextColor(4, 0); cout << "●"; TextColor(0, 0); cout << "○○○○○" << endl;
	//cout << "○○"; TextColor(4, 0); cout << "●"; TextColor(0, 0); cout << "○"; TextColor(4, 0); cout << "●"; TextColor(0, 0); cout << "○"; TextColor(4, 0); cout << "●●"; TextColor(0, 0); cout << "○○○"; TextColor(4, 0); cout << "●●"; TextColor(0, 0); cout << "○"; TextColor(4, 0); cout << "●"; TextColor(0, 0); cout << "○"; TextColor(4, 0); cout << "●"; TextColor(0, 0); cout << "○○○○" << endl;
	//cout << "○○"; TextColor(4, 0); cout << "●"; TextColor(0, 0); cout << "○"; TextColor(4, 0); cout << "●"; TextColor(0, 0); cout << "○○"; TextColor(4, 0); cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(4, 0); cout << "●"; TextColor(0, 0); cout << "○○"; TextColor(4, 0); cout << "●"; TextColor(0, 0); cout << "○"; TextColor(4, 0); cout << "●"; TextColor(0, 0); cout << "○○○○" << endl;
	//cout << "○○"; TextColor(4, 0); cout << "●"; TextColor(0, 0); cout << "○"; TextColor(4, 0); cout << "●"; TextColor(0, 0); cout << "○"; TextColor(4, 0); cout << "●●"; TextColor(0, 0); cout << "○○○"; TextColor(4, 0); cout << "●●"; TextColor(0, 0); cout << "○"; TextColor(4, 0); cout << "●"; TextColor(0, 0); cout << "○"; TextColor(4, 0); cout << "●"; TextColor(0, 0); cout << "○○○○" << endl;
	//cout << "○○○"; cout << "●"; cout << "○"; cout << "●"; cout << "○○○○○○○"; cout << "●"; cout << "○"; cout << "●"; cout << "○○○○○" << endl;
	//cout << "○○○○○○○○○○○○○○○○○○○○○" << endl;
	//cout << "○○○○○○○○○○○○○○○○○○○○○" << endl;
	
	// 바위 ●○
	//cout << "○○○○○○○○○○○○○○○○○○○○○○○○○" << endl;
	//cout << "○○●●○○○●●○○○●●○○○○●●○○○○○" << endl;
	//cout << "●●○●●○●○○●○●○●●○●●○●●○○○○" << endl;
	//cout << "●●○○●●○○○●●○○○●●○○○●●○○○○" << endl;
	//cout << "●●○○●●○○○●●○○○●●○○○●●○○○○" << endl;
	//cout << "●●○○○○○○○○○○○○○○○○○●●●●○○" << endl;
	//cout << "●●○○○○○○○○○○○○○○○○○●●○○●●" << endl;
	//cout << "●●○○○○○○○○○○○○○○○○○●●○○●●" << endl;
	//cout << "●●○○○○○○○○○○○○○○○○○●●○○●●" << endl;
	//cout << "○●●○○○○○○○○○○○○○○○●●○○●○○" << endl;
	//cout << "○○●●○○○○○○○○○○○○○●●○○●○○○" << endl;
	//cout << "○○○●●○○○○○○○○○○○●●●●●○○○○" << endl;
	//cout << "○○○●●○○○○○○○○○○○●●○○○○○○○" << endl;
	//cout << "○○○●●○○○○○○○○○○○●●○○○○○○○" << endl;
	//cout << "○○○●●○○○○○○○○○○○●●○○○○○○○" << endl;
	//cout << "○○○●●○○○○○○○○○○○●●○○○○○○○" << endl;
	//cout << "○○○●●○○○○○○○○○○○●●○○○○○○○" << endl;
	
	// 보
	cout << "○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○" << endl;
	cout << "○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○" << endl;
	cout << "○○○○○○○○○○○○○●●○○○○○○○○○○○○○○○○○○○○○" << endl;
	cout << "○○○○○○○○○○○○●○○●○○○○○○○○○○○○○○○○○○○○" << endl;
	cout << "○○○○○○○●●○○○●○○●○○○●●○○○○○○○○○○○○○○○○○○○" << endl;
	cout << "○○○○○○●○○●○○●○○●○○●○○●○○○○○○○○○○○○○○○○○○" << endl;
	cout << "○○○○○○●○○●○○●○○●○○●○○●○○○●●○○○○○○○○○○○○○○○" << endl;
	cout << "○●●○○○●○○●○○●○○●○○●○○●○○●○○●○○○○○○○○○○○○○○○" << endl;
	cout << "●○○●○○●○○●○○●○○●○○●○○●○○●○○●○○○○○○○○○○○○○○○○" << endl;
	cout << "●○○●○○●○○●○○●○○●○○●○○●○○●○○●○○○○○○○○○○○○○○○" << endl;
	cout << "○●●○●●○○○○●●○○○○●●○○○○●●○○●●○○○○○○○○○○○○○○○" << endl;
	cout << "○○●●○○○○○○○○○○○○○○○○○○○○○○●●○○○○○○○○" << endl;
	cout << "○○○●●○○○○○○○○○○○○○○○○○○○○●●○○○○○○○○○" << endl;
	cout << "○○○○●●○○○○○○○○○○○○○○○○○○●●○○○○○○○○○○" << endl;
	cout << "○○○○○●●○○○○○○○○○○○○○○○○●●○○○○○○○○○○○" << endl;
	cout << "○○○○○○●●○○○○○○○○○○○○○○●●○○○○○○○○○○○○○○○○" << endl;
	cout << "○○○○○○●●○○○○○○○○○○○○○○●●○○○○○○○○○○○○○○○○" << endl;
	cout << "○○○○○○●●○○○○○○○○○○○○○○●●○○○○○○○○○○○○○○○○" << endl;

	

}

void TextColor(int font, int backGround)
{
	int Color = font + backGround * 16;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color);
}

void PrintDot(int num)
{
	switch (num)
	{
	case 0:
	{
		TextColor(0, 0);
		cout << "○○"; TextColor(7, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○○○○"; TextColor(7, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○" << endl;
		cout << "○○○"; TextColor(7, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○○"; TextColor(7, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○" << endl;
		cout << "○○○○"; TextColor(7, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○"; TextColor(7, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○" << endl;
		cout << "○○○○○"; TextColor(7, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○"; TextColor(7, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○" << endl;
		cout << "○○○○○○"; TextColor(7, 0); cout << "●●"; TextColor(0, 0); cout << "○○○"; TextColor(7, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○" << endl;
		cout << "○○○○○○○"; TextColor(7, 0); cout << "●●"; TextColor(0, 0); cout << "○"; TextColor(7, 0); cout << "●●●"; TextColor(0, 0); cout << "○○○○○○○○" << endl;
		cout << "○○○"; TextColor(4, 0); cout << "●"; TextColor(0, 0); cout << "○"; TextColor(4, 0); cout << "●"; TextColor(0, 0); cout << "○○"; TextColor(4, 0); cout << "●●●"; TextColor(0, 0); cout << "○○"; TextColor(4, 0); cout << "●"; TextColor(0, 0); cout << "○"; TextColor(4, 0); cout << "●"; TextColor(0, 0); cout << "○○○○○" << endl;
		cout << "○○"; TextColor(4, 0); cout << "●"; TextColor(0, 0); cout << "○"; TextColor(4, 0); cout << "●"; TextColor(0, 0); cout << "○"; TextColor(4, 0); cout << "●●"; TextColor(0, 0); cout << "○○○"; TextColor(4, 0); cout << "●●"; TextColor(0, 0); cout << "○"; TextColor(4, 0); cout << "●"; TextColor(0, 0); cout << "○"; TextColor(4, 0); cout << "●"; TextColor(0, 0); cout << "○○○○" << endl;
		cout << "○○"; TextColor(4, 0); cout << "●"; TextColor(0, 0); cout << "○"; TextColor(4, 0); cout << "●"; TextColor(0, 0); cout << "○○"; TextColor(4, 0); cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(4, 0); cout << "●"; TextColor(0, 0); cout << "○○"; TextColor(4, 0); cout << "●"; TextColor(0, 0); cout << "○"; TextColor(4, 0); cout << "●"; TextColor(0, 0); cout << "○○○○" << endl;
		cout << "○○"; TextColor(4, 0); cout << "●"; TextColor(0, 0); cout << "○"; TextColor(4, 0); cout << "●"; TextColor(0, 0); cout << "○"; TextColor(4, 0); cout << "●●"; TextColor(0, 0); cout << "○○○"; TextColor(4, 0); cout << "●●"; TextColor(0, 0); cout << "○"; TextColor(4, 0); cout << "●"; TextColor(0, 0); cout << "○"; TextColor(4, 0); cout << "●"; TextColor(0, 0); cout << "○○○○" << endl;
		cout << "○○○"; cout << "●"; cout << "○"; cout << "●"; cout << "○○○○○○○"; cout << "●"; cout << "○"; cout << "●"; cout << "○○○○○" << endl;
		cout << "○○○○○○○○○○○○○○○○○○○○○" << endl;
		cout << "○○○○○○○○○○○○○○○○○○○○○" << endl;
	}
	break;
	case 1:
	{
		TextColor(0, 0);
		cout << "○○○○○○○○○○○○○○○○○○○○○○○○○" << endl;
		cout << "○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○" << endl;
		TextColor(15, 0);	cout << "●●"; TextColor(0, 0); cout << "○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○" << endl;
		TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○" << endl;
		TextColor(15, 0);	cout << "●●"; TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○" << endl;
		TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○○○○○○○○○○"; TextColor(15, 0); cout << "●●●●"; TextColor(0, 0); cout << "○○" << endl;
		TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○○○○○○○○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●●" << endl;
		cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○○○○○○○○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●●" << endl;
		cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○○○○○○○○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●●" << endl;
		TextColor(0, 0); cout << "○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○○○○○○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○" << endl;
		cout << "○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○○○○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○○" << endl;
		cout << "○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○○○○"; TextColor(15, 0); cout << "●●●●●"; TextColor(0, 0); cout << "○○○○" << endl;
		cout << "○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○" << endl;
		cout << "○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○" << endl;
		cout << "○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○" << endl;
		cout << "○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○" << endl;
		cout << "○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○" << endl;
	}
	break;
	case 2:
	{

	}
	break;

	default:
	{
		printf("해당하는 카드가 없습니다.\n");
	}
		break;
	}
}