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
#include <time.h>
#include <Windows.h>


using std::cout;
using std::cin;
using std::endl;

#define MAX_SIZE 13

void main()
{
	/*  -♠  1 ~13까지의 카드
		- ◆ 1 ~13까지의 카드
		- ♣  1 ~13까지의 카드
		- ♥  1 ~13까지의 카드*/

	int cardNum[52] = { 0 };
	int temp = 0;
	int count = 0;

	// 반복범위 최대 지정
	const int arrSize = sizeof(cardNum) / sizeof(cardNum[0]);

	for (int i = 1; count < arrSize; ++i)
	{
		if (i > 13)
		{
			i = 1;
		}

		cardNum[count] = i;
		++count;
	}

	// 카드 랜덤으로 뽑을 변수
	int randNumA = 0;
	int randNumB = 0;
	int randNumC = 0;

	// 소지금
	int myMoney = 10000;

	// 게임 종료 카운트
	const int endGame = 18;
	// 배팅 입력
	int batMoney = 0;

	count = 0;
	// 카드 다떨어지거나 소지금 없을 시
	while (myMoney > 0 && count < endGame)
	{
		srand(time(NULL));
		// 카드를 랜덤으로 3장 뽑는다.
		randNumA = rand() % 52 + 1;
		randNumB = rand() % 52 + 1;
		randNumC = rand() % 52 + 1;

		// 중복방지
		if (randNumA == randNumB)
		{
			randNumA = (rand() % 52) + 1;
		}
		if (randNumA == randNumB)
		{
			randNumC = (rand() % 52) + 1;
		}
		if (randNumC == randNumB)
		{
			randNumC = (rand() % 52) + 1;
		}
		

		if (cardNum[randNumA] < 14 && cardNum[randNumB] < 14 && cardNum[randNumC] < 14)
		{
			// 카드 3장중 2장 오픈 1장 덮기
			// A B 열고 C 덮기
			printf("첫번째 카드 : %d, 두번째 카드 : %d , 세번째 카드 : ?\n", cardNum[randNumA], cardNum[randNumB]);

			// 배팅 하기
			printf("현재 소지금 : %d\n", myMoney);
			printf("배팅 금액 : ");
			cin >> batMoney;

			cout << '\n';

			// A B C 전부 오픈
			printf("첫번째 카드 : %d, 두번째 카드 : %d, 세번째 카드 : %d\n", cardNum[randNumA], cardNum[randNumB], cardNum[randNumC]);

			// 게임 결과
			//if(cardNum[randNumA])

			// 사용한 카드 제거
			cardNum[randNumA] = 20;
			cardNum[randNumB] = 20;
			cardNum[randNumC] = 20;
		}
		else
		{
			for (int i = 0; i < arrSize; i++)
			{
				temp += cardNum[i];
			}

			if (temp > 980)
			{
				break;
			}

			temp = 0;
			continue;
		}

		Sleep(1000);
		system("cls");

		// 게임횟수 증가
		++count;
	}
}

		

	


	


