/*
과제2. 월남뽕 (타임 어택)

- 치트 필수

- ♠  1 ~ 13까지의 카드
- ◆ 1 ~ 13까지의 카드
- ♣  1 ~ 13까지의 카드
- ♥  1 ~ 13까지의 카드

종류별 13장 -> 총 52장

- 예외처리
ㄴ A -> 1
ㄴ j -> 11
ㄴ Q -> 12
ㄴ K -> 13

- 52장의 카드를 최소 한번 랜덤으로 섞어주고 그 후 매턴 마다 3장씩 뒤집는다.

- 앞쪽에 배치된 두장의 카드를 보고 최소 배팅액 이상(임의)의 금액을 배팅한다.
- 배팅 후 세번째 카드의 수가 앞서 오픈 된 카드 숫자의 사이에 있다면 배팅금의 2배
	획득하여 소지금 추가
- 반대라면 소지금에서 배팅한 만큼 마이너스

- 필수 : 한턴이 끝나고 사용된 카드는 버려져 사용할 수 없다.
*/

#include <iostream>
#include <Windows.h>
#include <time.h>

using std::cout;
using std::cin;
using std::endl;

int Char(char a);

void main()
{

	char cloverCard[13] = { 'A','2','3','4','5','6','7','8','9','T','J','Q','K' };
	char diaCard[13] = { 'A','2','3','4','5','6','7','8','9','T','J','Q','K' };
	char spaceCard[13] = { 'A','2','3','4','5','6','7','8','9','T','J','Q','K' };
	char heartCard[13] = { 'A','2','3','4','5','6','7','8','9','T','J','Q','K' };

	// dia0 ~ 12 space13 ~ 25 clover26 ~ 38 ...heart
	// 카드
	int openCard[3] = { 0 };
	char resultCard[3] = { 0 };
	int temp = 0;
	
	// 배팅
	int myMoney = 10000;
	int batMoney = 0;
	
	// 사용한 카드 카운트
	int count = 0;
	while (count < 51)
	{
		// 문양 선택
		for (int i = 0; i < 3; ++i)
		{
			openCard[i] = rand() % 4;
		}

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

				printf("♣ ");
				if (resultCard[i] == 'T')
				{
					cout << "10";
				}
				else
				{
					cout << resultCard[i];
				}
				cloverCard[temp] = '0';
			}
			else if (openCard[i] == 1)
			{
			RE2:

				resultCard[i] = diaCard[rand() % 13];
				if (resultCard[i] == '0')
				{
					++count;

					goto RE2;
				}

				printf("◆ ");
				if (resultCard[i] == 'T')
				{
					cout << "10";
				}
				else
				{
					cout << resultCard[i] << endl;
				}
				diaCard[rand() % 13] = '0';

			}
			else if (openCard[i] == 2)
			{
			RE3:

				resultCard[i] = spaceCard[rand() % 13];
				if (resultCard[i] == '0')
				{
					++count;

					goto RE3;
				}

				printf("♠ ");
				if (resultCard[i] == 'T')
				{
					cout << "10" << endl;;
				}
				else
				{
					cout << resultCard[i] << endl;
				}
				spaceCard[rand() % 13] = '0';

			}
			else
			{
			RE4:

				resultCard[i] = heartCard[rand() % 13];
				if (resultCard[i] == '0')
				{
					++count;

					goto RE4;
				}

				printf("♥ ");
				if (resultCard[i] == 'T')
				{
					cout << "10" << endl;
				}
				else
				{
					cout << resultCard[i] << endl;
				}
				heartCard[rand() % 13] = '0';

			}
		}
		printf("%d\n", Char(resultCard[0]));
		printf("%d\n", Char(resultCard[1]));

		// =====
		
		Sleep(1000);

	}



}

int Char(char a)
{
	switch (a)
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
		return 5;
	case '6':
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