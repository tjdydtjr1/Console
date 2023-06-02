#include "GalagaGameMain.h"



GalagaGameMain::GalagaGameMain()
{
	m_player		= new GalagaPlayerA;
	m_enemyB1		= new GalagaEnemyB;
	m_enemyB2		= new GalagaEnemyB;
	m_enemyB3		= new GalagaEnemyB;
	m_enemyC1		= new GalagaEnemyC;
	m_enemyC2		= new GalagaEnemyC;
	m_boss			= new GalagaBoss;
	m_bullet		= new Bullet;
	m_enemyBulletC1	= new EnemyBullet;
	m_enemyBulletC2 = new EnemyBullet;


	// ===================
	// 기본 좌표 세팅
	m_player->setX(45);
	m_player->setY(49);

	m_enemyB1->setX(30);
	m_enemyB1->setY(2);
	m_enemyB2->setX(170);
	m_enemyB2->setY(60);
	m_enemyB3->setX(30);
	m_enemyB3->setY(60);

	m_enemyC1->setX(3);
	m_enemyC1->setY(8);
	m_enemyC2->setX(10);
	m_enemyC2->setY(40);
	// ===================
	// 리스폰 시간
	m_enemyB1->setRespon(10);
	m_enemyB2->setRespon(10);
	m_enemyB3->setRespon(10);
	// ===================

	// 플레이어 시작 목숨
	m_player->setHP(3);
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

	// 게임 경계선
	for (int i = 0; i < 100; ++i)
	{
		gotoxy(180, i);
		Pixel(2);
	}

	// 초기 위치 플레이어 출력
	m_player->printObject(m_player->getX(), m_player->getY());

	while (true)
	{
		//==================================================================
		// =====우측 도트=====
		ScoreS();
		ScoreC();
		ScoreO();
		ScoreR();
		ScoreE();
		gotoxy(190, 10);
		printf("%d", score);
		// 목숨 플레이어 종료 조건
		if (m_player->getHP() == 3)
		{
			GalagaPlayer3();
		}
		else if (m_player->getHP() == 2)
		{
			GalagaPlayer2();
		}
		else if (m_player->getHP() == 1)
		{
			GalagaPlayer1();
		}
		else
		{
			goto END;
		}
		//==================================================================
		// 조작키 도트
		ArrowUp();
		ArrowRight();
		ArrowLeft();
		ArrowDown();
		ZKey();
		// =====우측 도트=====
		//==================================================================
		// 적 생성
		if (m_enemyB1->getDie())
		{
			m_enemyB1->setDie(false);
			m_enemyB1->setX(3);
			m_enemyB1->setY(2);
			m_enemyB1->printObject(m_enemyB1->getX(), m_enemyB1->getY());

			m_enemyC1->setDie(false);
			m_enemyC1->setX(3);
			m_enemyC1->setY(8);
			m_enemyC1->printObject(m_enemyB1->getX(), m_enemyB1->getY());
		}
		//==================================================================
		// 적 움직이기 위한 조건 : 리스폰 만들기
		m_enemyB2->moveObjectRight(m_enemyB2->getX(), m_enemyB2->getY());
		m_enemyB3->moveObjectLeft(m_enemyB3->getX(), m_enemyB3->getY());
		m_enemyB1->moveObject(m_enemyB1->getX(), m_enemyB1->getY());
		m_enemyC1->moveObject(m_enemyC1->getX(), m_enemyC1->getY());
		m_enemyC2->moveObjectLeft(m_enemyC2->getX(), m_enemyC2->getY());

		//==================================================================
		// 움직이는 위치에 총알 생성
		m_enemyBulletC1->createBullet(m_enemyC1->getX(), m_enemyC1->getY());
		m_enemyBulletC2->createBullet(m_enemyC2->getX(), m_enemyC2->getY());

		if (m_enemyBulletC1->m_fire)
		{
			m_enemyBulletC1->printBullet();
		}
		if (m_enemyBulletC2->m_fire)
		{
			m_enemyBulletC2->printBullet();
		}
		//==================================================================
		// 키 입력없을 경우 반복
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
		if(m_bullet->collisionCheck(m_bullet->m_x, m_enemyB1->getX(), m_bullet->m_y, m_enemyB1->getY()))
		{
			m_enemyB1->setHP(m_enemyB1->getHP() - 1);
			// 맞으면 제거
			if (m_enemyB1->getHP() == 0)
			{
				m_enemyB1->deleteObject(m_enemyB1->getX(), m_enemyB1->getY());

				m_enemyB1->setDie(true);

				// 폭발 이펙트
				Effect(m_enemyB1->getX(), m_enemyB1->getY());
				// 점수 증가
				score += 1000;
			}
		}
		if (m_bullet->collisionCheck(m_bullet->m_x, m_enemyC1->getX(), m_bullet->m_y, m_enemyC1->getY()))
		{
			m_enemyC1->setHP(m_enemyC1->getHP() - 1);
			
			// 맞으면 제거
			if (m_enemyC1->getHP() == 0)
			{
				m_enemyC1->deleteObject(m_enemyC1->getX(), m_enemyC1->getY());

				m_enemyC1->setDie(true);

				// 폭발 이펙트
				Effect(m_enemyC1->getX(), m_enemyC1->getY());
				// 점수 증가
				score += 1000;
			}
		}
		//==================================================================
		// 적생성 카운트
		++count;
		//==================================================================
		Sleep(20);
		//==================================================================
		// 폭발 이펙트 제거
		if (m_enemyB1->getDie()) 
		{
			m_enemyB1->deleteObject(m_enemyB1->getX(), m_enemyB1->getY());
		}
		if (m_enemyC1->getDie())
		{
			m_enemyC1->deleteObject(m_enemyC1->getX(), m_enemyC1->getY());
		}
		//==================================================================
		// 메뉴에서 게임종료 선택시 끝
		if (m_player->getDie() && keyInput == ENTER)
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
	delete	m_enemyB1;
	delete	m_enemyC1;
	delete	m_boss;
	delete	m_bullet;
}


