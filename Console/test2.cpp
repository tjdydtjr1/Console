// 즐거운 3주차
// 즐거운 3주차
// 즐거운 3주차

#include <iostream>
#include <time.h>
#include <Windows.h>


using std::cout;
using std::cin;
using std::endl;

int Char(char c);

void main()
{
	int cloverCard[13] = { 'A','2','3','4','5','6','7','8','9','T','J','Q','K' };
	int diaCard[13] = { 'A','2','3','4','5','6','7','8','9','T','J','Q','K' };
	int spaceCard[13] = { 'A','2','3','4','5','6','7','8','9','T','J','Q','K' };
	int heartCard[13] = { 'A','2','3','4','5','6','7','8','9','T','J','Q','K' };

	int openCard[4] = { 0 };
	char resultCard[3] = { 0 };

	int count = 0;
	int temp = 0;

	int myMoney = 10000;
	int batMoney = 0;

	// ♣ ◆ ♠ ♥
	while (count < 51)
	{
		printf("월남뽕 게임 시작\n\n");
		// 카드문양 4중에 하나
		for (int i = 0; i < 3; ++i)
		{
			openCard[i] = rand() % 4;
		}

		// 결과 카드 2장선택 오픈
		for (int i = 0; i < 2; ++i)
		{
			if (openCard[i] == 0)
			{
			RE1:
				temp = rand() % 13;
				resultCard[i] = cloverCard[temp];

				if (resultCard[i] == '0')
				{
					++count;
					goto RE1;
				}

				if (resultCard[i] == 'T')
				{
					printf("♣ ");
					cout << "10" << endl;;
				}
				else
				{
					printf("♣ ");
					cout << resultCard[i] << endl;
				}
				cloverCard[temp] = '0';
			}
			// ♣ ◆ ♠ ♥
			else if (openCard[i] == 1)
			{
			RE2:
				temp = rand() % 13;
				resultCard[i] = diaCard[temp];

				if (resultCard[i] == '0')
				{
					++count;
					goto RE2;
				}

				if (resultCard[i] == 'T')
				{
					printf("◆ ");
					cout << "10" << endl;;
				}
				else
				{
					printf("◆ ");
					cout << resultCard[i] << endl;
				}
				diaCard[temp] = '0';
			}
			else if (openCard[i] == 2)
			{
			RE3:
				temp = rand() % 13;
				resultCard[i] = spaceCard[temp];

				if (resultCard[i] == '0')
				{
					++count;
					goto RE3;
				}

				if (resultCard[i] == 'T')
				{
					printf("♠ ");
					cout << "10" << endl;;
				}
				else
				{
					printf("♠ ");
					cout << resultCard[i] << endl;
				}
				spaceCard[temp] = '0';
			}
			else
			{
			RE4:
				temp = rand() % 13;
				resultCard[i] = heartCard[temp];

				if (resultCard[i] == '0')
				{
					++count;
					goto RE4;
				}

				if (resultCard[i] == 'T')
				{
					printf("♥ ");
					cout << "10" << endl;;
				}
				else
				{
					printf("♥ ");
					cout << resultCard[i] << endl;
				}
				heartCard[temp] = '0';
			}
		}

		// 3번째 카드 2번쨰 인덱스


		printf("배팅 금액 입력\n");
		cin >> batMoney;
		cout << '\n';

		printf("3번째 카드 오픈\n\n");
		if (openCard[2] == 0)
		{
		RE:
			temp = rand() % 13;
			resultCard[2] = cloverCard[temp];

			if (resultCard[2] == '0')
			{
				++count;
				goto RE;
			}

			if (resultCard[2] == 'T')
			{
				printf("♣ ");
				cout << "10" << endl;;
			}
			else
			{
				printf("♣ ");
				cout << resultCard[2] << endl;
			}
			cloverCard[temp] = '0';
		}

		else if (openCard[2] == 1)
		{
		RE5:
			temp = rand() % 13;
			resultCard[2] = diaCard[temp];

			if (resultCard[2] == '0')
			{
				++count;
				goto RE5;
			}

			if (resultCard[2] == 'T')
			{
				printf("◆ ");
				cout << "10" << endl;;
			}
			else
			{
				printf("◆ ");
				cout << resultCard[2] << endl;
			}
			diaCard[temp] = '0';
		}
		else if (openCard[2] == 2)
		{
		RE6:
			temp = rand() % 13;
			resultCard[2] = spaceCard[temp];

			if (resultCard[2] == '0')
			{
				++count;
				goto RE6;
			}

			if (resultCard[2] == 'T')
			{
				printf("♠ ");
				cout << "10" << endl;;
			}
			else
			{
				printf("♠ ");
				cout << resultCard[2] << endl;
			}
			spaceCard[temp] = '0';
		}
		else
		{
		RE7:
			temp = rand() % 13;
			resultCard[2] = heartCard[temp];

			if (resultCard[2] == '0')
			{
				++count;
				goto RE7;
			}

			if (resultCard[2] == 'T')
			{
				printf("♥ ");
				cout << "10" << endl;;
			}
			else
			{
				printf("♥ ");
				cout << resultCard[2] << endl;
			}
			heartCard[temp] = '0';
		}


		if (Char(resultCard[0]) < Char(resultCard[2]) < Char(resultCard[1]))
		{
			printf("정답\n");
			myMoney += batMoney * 12;

		}
		else if (Char(resultCard[0]) > Char(resultCard[2]) > Char(resultCard[1]))
		{
			printf("정답\n");
			myMoney += batMoney * 12;

		}
		else
		{
			printf("틀림\n");
			myMoney -= batMoney;
		}

		cout << "현재 소지금" << myMoney << endl;
		Sleep(1000);
		system("cls");
	}
	printf("게임종료\n");


}



int Char(char c)
{
	switch (c)
	{
	case 'A':
		return 0;
	case '2':
		return 2;
	case '3':
		return 3;
	case '4':
		return 4;
	case '5':
		return 6;
	case '7':
		return 7;
	case '8':
		return 8;
	case '9':
		return 9;
	case 'T':
		return 10;
	case 'J':
		return 11;
	case 'Q':
		return 12;
	case 'K':
		return 13;

	default:
		break;
	}

}
