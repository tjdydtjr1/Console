//과제4.하이로우세븐
//- ♠  1 ~13까지의 카드
//- ◆ 1 ~13까지의 카드
//- ♣  1 ~13까지의 카드
//- ♥  1 ~13까지의 카드
//♠◆♣♥
//종류별 13 장->총 52장
//- 52장의 카드를 최소 한번이상 랜덤으로 섞고 그 후 매턴마다 5장씩 뒤집는다.
//
//- 앞쪽에 배치된 다섯장의 카드를 보고 6번째 카드의 숫자를 예측하는 게임
//
//- 세븐보다 높으면 하이, 낮으면 로우, 아니면 세븐인지 중에 1개 배팅
//
//- 세븐이면 13배 배당금 획득
//
//- 돈 다 잃으면 끝

#include <iostream>
#include <Windows.h>
#include <time.h>

using std::cout;
using std::cin;
using std::endl;

// 카드 전체 배열 갯수
#define SUPPLECARD 52

// 마지막 오픈할 카드 
#define LASTCARD 5

void main()
{
	srand(time(NULL));

	// 카드들의 값
	// 10은 짤리니 T로 치환
	char cloverNum[SUPPLECARD]		= { 'A','2','3','4','5','6','7','8','9','T','J','Q','K','A','2','3','4','5','6','7','8','9','T','J','Q','K','A','2','3','4','5','6','7','8','9','T','J','Q','K','A','2','3','4','5','6','7','8','9','T','J','Q','K' };
	char diaNum[SUPPLECARD]			= { 'A','2','3','4','5','6','7','8','9','T','J','Q','K','A','2','3','4','5','6','7','8','9','T','J','Q','K','A','2','3','4','5','6','7','8','9','T','J','Q','K','A','2','3','4','5','6','7','8','9','T','J','Q','K' };
	char spaceNum[SUPPLECARD]		= { 'A','2','3','4','5','6','7','8','9','T','J','Q','K','A','2','3','4','5','6','7','8','9','T','J','Q','K','A','2','3','4','5','6','7','8','9','T','J','Q','K','A','2','3','4','5','6','7','8','9','T','J','Q','K' };
	char heartNum[SUPPLECARD]		= { 'A','2','3','4','5','6','7','8','9','T','J','Q','K','A','2','3','4','5','6','7','8','9','T','J','Q','K','A','2','3','4','5','6','7','8','9','T','J','Q','K','A','2','3','4','5','6','7','8','9','T','J','Q','K' };
	
	// 배팅하기
	// 소지금
	int myMoney = 10000;
	// 배팅 금액
	int batMoney = 0;
	// 결과 선택
	int choice = 0;

	// 카드 문양 저장
	int openCard[6] = { 0 };
	// 문양 선택 후 카드 값 저장
	char resultCard[6] = { 0 };

	while (myMoney > 0)
	{
		printf("하이로우세븐 게임 시작 \n\n");
		for (int i = 0; i < 6; ++i)
		{
			openCard[i] = rand() % 4;
		}

		// 뽑을 문양 카드 고른 후 결과 카드에 넣는다.
		printf("카드 5장을 오픈합니다\n");
		for (int i = 0; i < 5; ++i)
		{
			// clover : 0 dia : 1 space : 2 heart : 3
			// ♠♥◆♣
			if (openCard[i] == 0)
			{
				printf("♣ ");
				resultCard[i] = cloverNum[rand() % 52];
				if (resultCard[i] == 'T')
				{
					cout << "10" << '\n';
				}
				else
				{
					cout << resultCard[i] << '\n';
				}
			}
			else if (openCard[i] == 1)
			{
				printf("◆ ");
				resultCard[i] = diaNum[rand() % 52];
				if (resultCard[i] == 'T')
				{
					cout << "10" << '\n';
				}
				else
				{
					cout << resultCard[i] << '\n';
				}
			}
			else if (openCard[i] == 2)
			{
				printf("♠ ");
				resultCard[i] = spaceNum[rand() % 52];
				if (resultCard[i] == 'T')
				{
					cout << "10" << '\n';
				}
				else
				{
					cout << resultCard[i] << '\n';
				}
			}
			else
			{
				printf("♥ ");
				resultCard[i] = heartNum[rand() % 52];
				if (resultCard[i] == 'T')
				{
					cout << "10" << '\n';
				}
				else
				{
					cout << resultCard[i] << '\n';
				}
			}
		}
		cout << '\n';
		// 5장의 카드를 보고 배팅 하기
		printf("배팅 금액을 입력하세요.\n");
		cin >> batMoney;
		cout << '\n';
		
		printf("세븐보다 위 아래 같은지 선택\n");
		printf("위 = 0, 아래 = 1, 같다 = 2\n");
		cin >> choice;
		cout << '\n';
		
		
		// 6번째 카드 오픈
		printf("6번째 카드 오픈\n");
		if (openCard[LASTCARD] == 0)
		{
			printf("♣ ");
			resultCard[LASTCARD] = cloverNum[rand() % 52];
			if (resultCard[LASTCARD] == 'T')
			{
				cout << "10" << '\n';
			}
			else
			{
				cout << resultCard[LASTCARD] << '\n';
			}
		}
		else if (openCard[LASTCARD] == 1)
		{
			printf("◆ ");
			resultCard[LASTCARD] = diaNum[rand() % 52];
			if (resultCard[LASTCARD] == 'T')
			{
				cout << "10" << '\n';
			}
			else
			{
				cout << resultCard[LASTCARD] << '\n';
			}
		}
		else if (openCard[LASTCARD] == 2)
		{
			printf("♠ ");
			resultCard[LASTCARD] = spaceNum[rand() % 52];
			if (resultCard[LASTCARD] == 'T')
			{
				cout << "10" << '\n';
			}
			else
			{
				cout << resultCard[LASTCARD] << '\n';
			}
		}
		else
		{
			printf("♥ ");
			resultCard[LASTCARD] = heartNum[rand() % 52];
			if (resultCard[LASTCARD] == 'T')
			{
				cout << "10" << '\n';
			}
			else
			{
				cout << resultCard[LASTCARD] << '\n';
			}
		}

		// 배팅 결과 판별
		if (resultCard[LASTCARD] != 'A' && choice == 0 && resultCard[LASTCARD] > '7')
		{
			printf("맞췄습니다.\n배팅 금액 x2\n\n");
			myMoney += batMoney * 2;
		}
		else if (resultCard[LASTCARD] == 'A' || choice == 1 && resultCard[LASTCARD] < '7')
		{
			printf("맞췄습니다.\n배팅 금액 x2\n\n");
			myMoney += batMoney * 2;
		}
		else if (choice == 2 && resultCard[LASTCARD] == '7')
		{
			printf("세븐을 맞췄습니다.\n배팅 금액 x12\n\n");
			myMoney += batMoney * 12;
		}
		else
		{
			printf("틀렸습니다.\n배팅 금액 차감\n\n");
			myMoney -= batMoney;
		}
		printf("현재 소지 금액 : %d\n", myMoney);
		Sleep(2000);
		system("cls");
	}
		
	
	printf("게임 종료\n");
}
