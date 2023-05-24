#include "BaseBall.h"

BaseBall::BaseBall()
{
	player = new User;
	com = new Com;
	vs = new Jujgment;
	print = new Print;
	count = new CountGame;
	game = new EndGame;
	temp = new Temp;
	game->setGame(true);
	count->m_nCount = 0;
	

	
	int num = 0;
	// User 숫자 3개 입력
	printf("클래스 8개 숫자 야구 게임 시작\n");

	// Com 숫자 3개 랜덤 입력
	com->setFirstNum(rand() % 9 + 1);
	com->setSecondNum(rand() % 9 + 1);
	com->setThirdNum(rand() % 9 + 1);
	com->m_nFirstNum = com->getFirstNum();
	com->m_nSecondNum = com->getSecondNum();
	com->m_nThirdNum = com->getThirdNum();

	while (game->getGame())
	{
		printf("%d %d %d \n", com->getFirstNum(), com->getSecondNum(), com->getThirdNum());
		printf("첫번째 숫자 입력\n");
		cin >> num;
		temp->setTemp(num);

		player->setFirstNum(temp->getTemp());
		printf("두번째 숫자 입력\n");
		cin >> num;
		temp->setTemp(num);
		player->setSecondNum(temp->getTemp());

		printf("세번째 숫자 입력\n");
		cin >> num;
		temp->setTemp(num);
		player->setThirdNum(temp->getTemp());

		printf("User 숫자\n");
		// User 숫자 도트
		print->PrintNum(player->getFirstNum());
		cout << '\n';
		print->PrintNum(player->getSecondNum());
		cout << '\n';
		print->PrintNum(player->getThirdNum());
		cout << '\n';

		// 게임 횟수 증가
		count->countGame();

		// 판정
		vs->jujgment(player->getFirstNum(), player->getSecondNum(), player->getThirdNum(), com->getFirstNum(), com->getSecondNum(), com->getThirdNum());

		if (player->getFirstNum() == com->getFirstNum() && player->getSecondNum() == com->getSecondNum() && player->getThirdNum() == com->getThirdNum())
		{
			game->setGame(false);
		}

		Sleep(1000);
		system("cls");
	}

	cout << '\n';
	// Com 숫자 도트
	print->PrintNum(com->m_nFirstNum);
	print->PrintNum(com->m_nSecondNum);
	print->PrintNum(com->m_nThirdNum);
	printf("총 게임 횟수 : %d\n", count->m_nCount);
	
}

BaseBall::~BaseBall()
{
	delete player;
	delete com;
	delete vs;
	delete print;
	delete count;
	delete game;
	delete temp;
}
