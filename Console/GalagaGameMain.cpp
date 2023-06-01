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
	m_player->setY(49);

	m_enemyB->setX(3);
	m_enemyB->setY(2);

	m_enemyC->setX(3);
	m_enemyC->setY(8);
	// ===================
	
	int count = 0;
	char keyInput = 0;
	int score = 0;
	// 게임 스타트
	StartGame();
	gotoxy(78, 30);
	printf("시작하려면 아무키나 누르세요.");

	keyInput = _getch();
	
	// 게임 스타트 제거
	system("cls");

	// 기본맵 출력
	//PrintBaseMap();
	/*const int arrX = 300;
	const int arrY = 400;
	int ground[arrY][arrX] = { 0 };*/
	
	//int backGround[arrY][arrX] = { 0 };
	
	// 초기맵
	//for (int i = 0; i < arrY; ++i)
	//{
	//	for (int j = 0; j < arrX; ++j)
	//	{
	//		ground[i][j] = 0;
	//		if (j % 499 == 0)
	//		{
	//			ground[i][j] = 7;
	//		}
	//	}
	//}
	////// 백그라운드 복사하기
	////for (int i = 0; i < arrY; ++i)
	////{
	////	for (int j = 0; j < arrX; ++j)
	////	{
	////		backGround[i][j] = ground[i][j];
	////	}
	////}
	//// 기본맵 출력
	//for (int i = 0; i < arrY; ++i)
	//{
	//	for (int j = 0; j < arrX; ++j)
	//	{
	//		Pixel(ground[i][j]);
	//	}
	//	cout << '\n';
	//}

	// 게임 경계선
	for (int i = 0; i < 100; ++i)
	{
		gotoxy(180, i);
		Pixel(7);
	}

	// 초기 위치 플레이어 출력
	m_player->printObject(m_player->getX(), m_player->getY());

	while (true)
	{
		
		//==================================================================
		// =====우측 도트=====
		gotoxy(185, 8);
		TextColor(7, 0);
		printf("Score : %d", score);
		gotoxy(185, 9);
		TextColor(7, 0);
		printf("테스트 count : %d",count);
		// 목숨 플레이어 도트
		GalagaPlayer();

		// 조작키 도트
		ArrowUp();
		ArrowRight();
		ArrowLeft();
		ArrowDown();
		ZKey();
		// =====우측 도트=====
		//==================================================================
		// 적 생성
		/*if (count > 100 && m_enemyB->getDie())
		{
			count = 0;
			m_enemyB->setDie(false);
			m_enemyB->setX(3);
			m_enemyB->setY(2);
			m_enemyB->printObject(m_enemyB->getX(), m_enemyB->getY());

			m_enemyC->setDie(false);
			m_enemyC->setX(3);
			m_enemyC->setY(8);
			m_enemyC->printObject(m_enemyB->getX(), m_enemyB->getY());
		}*/
		//==================================================================
		// 적 움직이게
		if (!m_enemyB->getDie())
		{
			m_enemyB->moveObject(m_enemyB->getX(), m_enemyB->getY());
		}
		if (!m_enemyC->getDie())
		{
			m_enemyC->moveObject(m_enemyC->getX(), m_enemyC->getY());
		}
		//==================================================================
		// 키 입력안해도 반복

		if (_kbhit())
		{
			keyInput = _getch();
		}

		if (keyInput == 'z')
		{
			// 총알 생성
			m_bullet->createBullet(m_player->getX(),m_player->getY());
			ZKeyW();
		}
		//==================================================================
		// 총알 위로 이동
		if (m_bullet->m_fire)
		{
			m_bullet->printBullet();
		}
		//==================================================================
		// 플레이어 움직임
		m_player->moveObject(keyInput, m_player->getX(), m_player->getY());
		
		
		//==================================================================
		// 적 맞출 시 점수 증가 및 삭제
		if (m_bullet->m_x == m_enemyB->getX() + 3)
		{
			// 맞으면 제거
			m_enemyB->deleteObject(m_enemyB->getX(), m_enemyB->getY());
			m_enemyB->setDie(true);
		
			// 폭발 이펙트
			Effect(m_enemyB->getX(),m_enemyB->getY());
			score += 1000;
		}
		if (m_bullet->m_x == m_enemyC->getX() + 3)
		{
			// 맞으면 제거
			m_enemyC->deleteObject(m_enemyC->getX(), m_enemyC->getY());
			m_enemyC->setDie(true);
			
			// 폭발 이펙트
			Effect(m_enemyC->getX(), m_enemyC->getY());
			score += 1000;
		}
		//==================================================================
		// 적생성 test
		++count;
		//==================================================================
		Sleep(5);
		//==================================================================
		// 폭발 이펙트 제거
		if (m_enemyB->getDie()) 
		{
			m_enemyB->deleteObject(m_enemyB->getX(), m_enemyB->getY());
			
		}
		if (m_enemyC->getDie())
		{
			m_enemyC->deleteObject(m_enemyC->getX(), m_enemyC->getY());
			
		}
		//==================================================================
		// 메뉴에서 게임종료
		if (m_player->m_end == DOWN && keyInput == ENTER)
		{
			goto END;
		}
	}

	END:
	system("cls");
	// 게임 종료
	End();
	
}

GalagaGameMain::~GalagaGameMain()
{
	delete	m_player;
	delete	m_enemyB;
	delete	m_enemyC;
	delete	m_boss;
	delete	m_bullet;
}


