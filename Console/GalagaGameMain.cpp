#include "GalagaGameMain.h"



GalagaGameMain::GalagaGameMain()
{
	m_player	= new GalagaPlayerA;
	m_enemyB	= new GalagaEnemyB;
	m_enemyC	= new GalagaEnemyC;
	m_boss		= new GalagaBoss;
	m_bullet	= new Bullet;
	
	// ===================
	// 기본 좌표 세팅
	m_player->setX(45);
	m_player->setY(50);

	m_enemyB->setX(10);
	m_enemyB->setY(2);

	m_enemyC->setX(2);
	m_enemyC->setY(2);
	// ===================
	
	char keyInput = 0;
	int score = 0;
	int temp = 0;

	gotoxy(200, 10);
	// 게임 스타트
	Start();
	gotoxy(15, 25);
	printf("시 작하려면 아무키나 누르세요.\n");
	keyInput = _getch();
	
	// 스타트게임 제거
	system("cls");

	// 기본맵 출력
	//PrintBaseMap();
	const int arrX = 50;
	const int arrY = 100;
	int ground[arrY][arrX] = { 0 };
	int backGround[arrY][arrX] = { 0 };

	// 초기맵
	for (int i = 0; i < arrY; ++i)
	{
		for (int j = 0; j < arrX; ++j)
		{
			ground[i][j] = 0;
			if (j % 49 == 0)
			{
				ground[i][j] = 7;
			}
		}
	}
	// 백그라운드 복사하기
	for (int i = 0; i < arrY; ++i)
	{
		for (int j = 0; j < arrX; ++j)
		{
			backGround[i][j] = ground[i][j];
		}
	}
	// 변경 사항 출력
	for (int i = 0; i < arrY; ++i)
	{
		for (int j = 0; j < arrX; ++j)
		{
			Pixel(backGround[i][j]);
		}
		cout << '\n';
	}



	// 초기 위치 플레이어 출력
	m_player->printObject(m_player->getX(), m_player->getY());

	while (true)
	{
		// 우측 도트 띄우기
		gotoxy(105, 8);
		TextColor(7, 0);
		printf("Score : %d", score);
		gotoxy(105, 9);
		TextColor(7, 0);
		printf("TestTestTestTestTestTestTest");
		// 목숨 플레이어 도트
		GalagaPlayer();

		// 조작키 도트
		ArrowUp();
		ArrowRight();
		ArrowLeft();
		ArrowDown();
		ZKey();
		//
		
		// 적 생성
		m_enemyB->printObject(m_enemyB->getX(), m_enemyB->getY());

		if (_kbhit())
		{
			keyInput = _getch();
		}
		temp = 'z';
		
		int tempX = m_player->getX();
		int tempY = m_player->getY();
		int count = 0;

		if (keyInput == 'z')
		{
			// 총알 생성
			m_bullet->createBullet(tempX, tempY - count);

			ZKeyW();
			time(NULL);
		}
		m_bullet->createBullet(tempX, tempY--);
		// 플레이어 움직임
		m_player->movePlayer(keyInput, m_player->getX(), m_player->getY());
		

		Sleep(25);
	}
	system("cls");
	// 도트 찍기
	printf("게임 종료");
}

GalagaGameMain::~GalagaGameMain()
{
	
}


