#include "GalagaGameMain.h"



GalagaGameMain::GalagaGameMain()
{
	m_player	= new GalagaPlayerA;
	m_enemyB	= new GalagaEnemyB;
	m_enemyC	= new GalagaEnemyC;
	m_boss		= new GalagaBoss;
	m_bullet	= new Bullet;
	
	// ===================
	// �⺻ ��ǥ ����
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
	// ���� ��ŸƮ
	StartGame();
	gotoxy(78, 30);
	printf("�����Ϸ��� �ƹ�Ű�� ��������.");

	keyInput = _getch();
	
	// ���� ��ŸƮ ����
	system("cls");

	// �⺻�� ���
	//PrintBaseMap();
	/*const int arrX = 300;
	const int arrY = 400;
	int ground[arrY][arrX] = { 0 };*/
	
	//int backGround[arrY][arrX] = { 0 };
	
	// �ʱ��
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
	////// ��׶��� �����ϱ�
	////for (int i = 0; i < arrY; ++i)
	////{
	////	for (int j = 0; j < arrX; ++j)
	////	{
	////		backGround[i][j] = ground[i][j];
	////	}
	////}
	//// �⺻�� ���
	//for (int i = 0; i < arrY; ++i)
	//{
	//	for (int j = 0; j < arrX; ++j)
	//	{
	//		Pixel(ground[i][j]);
	//	}
	//	cout << '\n';
	//}

	// ���� ��輱
	for (int i = 0; i < 100; ++i)
	{
		gotoxy(180, i);
		Pixel(7);
	}

	// �ʱ� ��ġ �÷��̾� ���
	m_player->printObject(m_player->getX(), m_player->getY());

	while (true)
	{
		
		//==================================================================
		// =====���� ��Ʈ=====
		gotoxy(185, 8);
		TextColor(7, 0);
		printf("Score : %d", score);
		gotoxy(185, 9);
		TextColor(7, 0);
		printf("�׽�Ʈ count : %d",count);
		// ��� �÷��̾� ��Ʈ
		GalagaPlayer();

		// ����Ű ��Ʈ
		ArrowUp();
		ArrowRight();
		ArrowLeft();
		ArrowDown();
		ZKey();
		// =====���� ��Ʈ=====
		//==================================================================
		// �� ����
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
		// �� �����̰�
		if (!m_enemyB->getDie())
		{
			m_enemyB->moveObject(m_enemyB->getX(), m_enemyB->getY());
		}
		if (!m_enemyC->getDie())
		{
			m_enemyC->moveObject(m_enemyC->getX(), m_enemyC->getY());
		}
		//==================================================================
		// Ű �Է¾��ص� �ݺ�

		if (_kbhit())
		{
			keyInput = _getch();
		}

		if (keyInput == 'z')
		{
			// �Ѿ� ����
			m_bullet->createBullet(m_player->getX(),m_player->getY());
			ZKeyW();
		}
		//==================================================================
		// �Ѿ� ���� �̵�
		if (m_bullet->m_fire)
		{
			m_bullet->printBullet();
		}
		//==================================================================
		// �÷��̾� ������
		m_player->moveObject(keyInput, m_player->getX(), m_player->getY());
		
		
		//==================================================================
		// �� ���� �� ���� ���� �� ����
		if (m_bullet->m_x == m_enemyB->getX() + 3)
		{
			// ������ ����
			m_enemyB->deleteObject(m_enemyB->getX(), m_enemyB->getY());
			m_enemyB->setDie(true);
		
			// ���� ����Ʈ
			Effect(m_enemyB->getX(),m_enemyB->getY());
			score += 1000;
		}
		if (m_bullet->m_x == m_enemyC->getX() + 3)
		{
			// ������ ����
			m_enemyC->deleteObject(m_enemyC->getX(), m_enemyC->getY());
			m_enemyC->setDie(true);
			
			// ���� ����Ʈ
			Effect(m_enemyC->getX(), m_enemyC->getY());
			score += 1000;
		}
		//==================================================================
		// ������ test
		++count;
		//==================================================================
		Sleep(5);
		//==================================================================
		// ���� ����Ʈ ����
		if (m_enemyB->getDie()) 
		{
			m_enemyB->deleteObject(m_enemyB->getX(), m_enemyB->getY());
			
		}
		if (m_enemyC->getDie())
		{
			m_enemyC->deleteObject(m_enemyC->getX(), m_enemyC->getY());
			
		}
		//==================================================================
		// �޴����� ��������
		if (m_player->m_end == DOWN && keyInput == ENTER)
		{
			goto END;
		}
	}

	END:
	system("cls");
	// ���� ����
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


