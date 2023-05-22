#include "UseClass.h"
#include "Family.h"
#include "HandGame.h"
#include <conio.h>

//void Pixel(int num);
//int pixelNum = 0;
//
//enum
//{
//	LEFT = 1,
//	DOWN,
//	RIGHT,
//	UP = 5,
//	ATTACK
//};

void main()
{
	system("mode con:cols=300 lines=400");
	Player* player  = new Player;
	HandGame* game  = new HandGame;
	Dot* card		= new Dot;
	int comCard = 0;
	int cardSelect = 0;
	int money = 0;
	int batMoney = 0;
	
	
	// 자본금
	printf("자본금 세팅\n");
	cin >> money;
	player->setMoney(money);

	while (money > 0)
	{
		printf("가위바위보 게임 시작\n\n");
		printf("배팅금 설정\n");
		cin >> batMoney;
		player->setMoney(batMoney);

		printf("낼 카드 선택\n주먹 = 0, 가위 = 1, 보 = 2\n");
		cin >> cardSelect;

		switch (cardSelect)
		{// 주먹
		case ROCK:
		{
			card->printCard(cardSelect);
		}
		break;
		// 가위
		case PAPER:
		{
			card->printCard(cardSelect);

		}
		break;
		// 보
		case SCISSORS:
		{
			card->printCard(cardSelect);
		}
		break;
		default:
			break;
		}

		card->printVS();
		Sleep(2000);
		comCard = rand() % 3;
		card->printCard(comCard);

		if (cardSelect == comCard)
		{
			printf("무승부\n");
			Sleep(1000);
			system("cls");
			continue;

		}
		else if (cardSelect == 0 && comCard == 1)
		{
			printf("승리하였습니다.\n배팅금 * 10\n");
			player->setMoney(batMoney * 10);
			Sleep(1000);
			system("cls");


		}
		else if (cardSelect == 1 && comCard == 2)
		{
			printf("승리하였습니다.\n배팅금 * 10\n");
			player->setMoney(batMoney * 10);
			Sleep(1000);
			system("cls");


		}
		else if (cardSelect == 2 && comCard == 0)
		{
			printf("승리하였습니다.\n배팅금 * 10\n");
			player->setMoney(batMoney * 10);
			Sleep(1000);
			system("cls");

		}
		else
		{
			printf("패배하였습니다.\n배팅금 차감\n");
			player->setMoney(-batMoney);
			Sleep(1000);
			system("cls");

		}
	}
}

	
///*
//과제1. 클래스 사용법 익히기
//
//- 서로 다른 클래스 5개를 생성하고 각각 다른 문구를 출력한다.
//
//EX)
//(클래스 이름) 클래스 1번
//(클래스 이름) 클래스 2번
//(클래스 이름) 클래스 3번
//.
//.
//.
//(클래스 이름) 클래스 N번
//=> 최대한 효율을 생각하면서 해본다.
//
//과제2. 우리 가족은 말이죠...
//- 클래스를 활용해 우리 가족을 소개하는 내용을 출력한다.
//
//객체지향적으로 구성한다.
//
//
//과제3. 대전 게임 만들기
//- 스타트 씬과 게임 씬으로 구성된 대전 게임
//
//- 도트와 색상, 체력바를 필수로 포함한다.
//
//- 플레이어만 공격을 하면 안되며 적 역시 공격을 해야 한다.
//ㄴ + 게임 오버 조건 또한 반드시 있어야 한다.
//
//
//과제4. 가위바위보
//
//- 클래스를 활용해 객체지향으로 나눠온다.
//
//- 최소 클래스는 3개
//
//
//*/
//
//void Pixel(int num)
//{
//
//	switch (num)
//	{
//	case 0:
//	{
//		// 검은색
//		TextColor(0, 0);
//		cout << "■";
//		TextColor(7, 0);
//		pixelNum = 0;
//	}
//	break;
//	case 1:
//	{
//		// 파랑색
//		TextColor(1, 1);
//		cout << "■";
//		TextColor(7, 0);
//		pixelNum = 1;
//
//	}
//	break;
//	case 2:
//	{
//		// 초록색
//		TextColor(2, 2);
//		cout << "■";
//		TextColor(7, 0);
//		pixelNum = 2;
//	}
//	break;
//	case 3:
//	{
//		// 하늘색
//		TextColor(3, 3);
//		cout << "■";
//		TextColor(7, 0);
//		pixelNum = 3;
//	}
//	break;
//	case 4:
//	{
//		// 빨강색
//		TextColor(4, 4);
//		cout << "■";
//		TextColor(7, 0);
//		pixelNum = 4;
//	}
//	break;
//	case 5:
//	{
//		// 보라색
//		TextColor(5, 5);
//		cout << "■";
//		TextColor(7, 0);
//		pixelNum = 5;
//	}
//	break;
//	case 6:
//	{
//		// 노랑색
//		TextColor(6, 6);
//		cout << "■";
//		TextColor(7, 0);
//		pixelNum = 6;
//	}
//	break;
//	case 7:
//	{
//		// 흰색
//		TextColor(7, 7);
//		cout << "■";
//		TextColor(7, 0);
//		pixelNum = 7;
//	}
//	break;
//	case 8:
//	{
//		// 회색
//		TextColor(8, 8);
//		cout << "■";
//		TextColor(7, 0);
//		pixelNum = 8;
//	}
//	break;
//	case 9:
//	{
//		// 밝은 파랑
//		TextColor(9, 9);
//		cout << "■";
//		TextColor(0, 0);
//		pixelNum = 9;
//		
//	}
//	break;
//	case 10:
//	{
//		// 밝은 초록
//		/*TextColor(10, 10);
//		cout << "■";
//		TextColor(0, 0);*/
//		// 총알
//		TextColor(4, 7);
//		cout << "●";
//		TextColor(7, 0);
//	}
//	break;
//	//case 11:
//	//{
//	//	// 밝은 하늘
//	//	TextColor(11, 11);
//	//	cout << "■";
//	//	TextColor(0, 0);
//	//}
//	//break;
//	//case 12:
//	//{
//	//	// 밝은 빨강
//	//	TextColor(12, 12);
//	//	cout << "■";
//	//	TextColor(0, 0);
//	//}
//	//break;
//	//case 13:
//	//{
//	//	// 밝은 보라색
//	//	TextColor(13, 13);
//	//	cout << "■";
//	//	TextColor(0, 0);
//	//}
//	//break;
//	//case 14:
//	//{
//	//	// 밝은 노랑색
//	//	TextColor(14, 14);
//	//	cout << "■";
//	//	TextColor(0, 0);
//	//}
//	//break;
//	//case 15:
//	//{
//	//	// 밝은 흰색
//	//	TextColor(15, 15);
//	//	cout << "■";
//	//	TextColor(0, 0);
//	//}
//	//break;
//
//	default:
//		break;
//	}
//}