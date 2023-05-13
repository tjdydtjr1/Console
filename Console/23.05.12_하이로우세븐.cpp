//과제4.하이로우세븐
//- ♠  1 ~13까지의 카드
//- ◆ 1 ~13까지의 카드
//- ♣  1 ~13까지의 카드
//- ♥  1 ~13까지의 카드
//
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

char AlterChar(int num);

void main()
{
	srand(time(NULL));

	// 카드들의 값
	/*int cloverNum[13]	= { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 };
	int diaNum[13]		= { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 };
	int spaceNum[13]    = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 };
	int heartNum[13]	= { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 };
	*/
	int randNum[52] = { 0 };

	const int arrMax = sizeof(randNum) / sizeof(randNum[0]);

	int idx = 1;
	for (int i = 0; i < arrMax; ++i)
	{
		randNum[i] = idx;
		if (idx > 13)
		{
			idx = 0;
		}
		++idx;
	}
	// 임시 저장소
	int openCard[6] = {0};
	int temp = 0;
	// 배팅하기
	int myMoney = 10000;
	int batMoney = 0;
	
	while (true)
	{
		printf("하이로우세븐 게임 시작\n\n");
		
		// 1. 카드를 섞는다.
		for (int i = 0; i < arrMax; ++i)
		{
			temp = rand() % 51 + 1;
			if (randNum[temp])
			{
				continue;
			}
			randNum[temp] = 1;
			openCard[i] = temp;
		}
		

		// 2. 5장을 오픈한다.
		Sleep(1000);
		// 3. 배팅 금액을 입력 받는다.
		//printf("배팅 금액 입력 : ");
		//cin >> batMoney;
		// 4. 6번째 카드가 세븐보다 높은지 낮은지 같은지 입력받는다.
		// 5. 6번째 카드의 결과에 따른 배팅 금액 증감하기 세븐이면 13 배 맞추면 배팅금액만큼 증가
	}
}


char AlterChar(int num)
{

	switch (num)
	{
	case 1:
		return 'A';
		break;
	case 2:
		return '2';
		break;
	case 3:
		return '3';
		break;
	case 4:
		return '4';
		break;
	case 5:
		return '5';
	case 6:
		return '6';
	case 7:
		return '7';
	case 8:
		return '8';
		break;
	case 9:
		return '9';
		break;
	case 10:
		cout << "10";
		break;
	case 11:
		return 'J';
		break;
	case 12:
		return 'Q';
		break;
	case 13:
		return 'K';
	default:
		break;
	}

}