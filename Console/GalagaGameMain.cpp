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
	// �⺻ ��ǥ ����
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
	// ������ �ð�
	m_enemyB1->setRespon(10);
	m_enemyB2->setRespon(10);
	m_enemyB3->setRespon(10);
	// ===================

	// �÷��̾� ���� ���
	m_player->setHP(3);
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

	// ���� ��輱
	for (int i = 0; i < 100; ++i)
	{
		gotoxy(180, i);
		Pixel(2);
	}

	// �ʱ� ��ġ �÷��̾� ���
	m_player->printObject(m_player->getX(), m_player->getY());

	while (true)
	{
		//==================================================================
		// =====���� ��Ʈ=====
		ScoreS();
		ScoreC();
		ScoreO();
		ScoreR();
		ScoreE();
		gotoxy(190, 10);
		printf("%d", score);
		// ��� �÷��̾� ���� ����
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
		// ����Ű ��Ʈ
		ArrowUp();
		ArrowRight();
		ArrowLeft();
		ArrowDown();
		ZKey();
		// =====���� ��Ʈ=====
		//==================================================================
		// �� ����
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
		// �� �����̱� ���� ���� : ������ �����
		m_enemyB2->moveObjectRight(m_enemyB2->getX(), m_enemyB2->getY());
		m_enemyB3->moveObjectLeft(m_enemyB3->getX(), m_enemyB3->getY());
		m_enemyB1->moveObject(m_enemyB1->getX(), m_enemyB1->getY());
		m_enemyC1->moveObject(m_enemyC1->getX(), m_enemyC1->getY());
		m_enemyC2->moveObjectLeft(m_enemyC2->getX(), m_enemyC2->getY());

		//==================================================================
		// �����̴� ��ġ�� �Ѿ� ����
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
		// Ű �Է¾��� ��� �ݺ�
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
		if(m_bullet->collisionCheck(m_bullet->m_x, m_enemyB1->getX(), m_bullet->m_y, m_enemyB1->getY()))
		{
			m_enemyB1->setHP(m_enemyB1->getHP() - 1);
			// ������ ����
			if (m_enemyB1->getHP() == 0)
			{
				m_enemyB1->deleteObject(m_enemyB1->getX(), m_enemyB1->getY());

				m_enemyB1->setDie(true);

				// ���� ����Ʈ
				Effect(m_enemyB1->getX(), m_enemyB1->getY());
				// ���� ����
				score += 1000;
			}
		}
		if (m_bullet->collisionCheck(m_bullet->m_x, m_enemyC1->getX(), m_bullet->m_y, m_enemyC1->getY()))
		{
			m_enemyC1->setHP(m_enemyC1->getHP() - 1);
			
			// ������ ����
			if (m_enemyC1->getHP() == 0)
			{
				m_enemyC1->deleteObject(m_enemyC1->getX(), m_enemyC1->getY());

				m_enemyC1->setDie(true);

				// ���� ����Ʈ
				Effect(m_enemyC1->getX(), m_enemyC1->getY());
				// ���� ����
				score += 1000;
			}
		}
		//==================================================================
		// ������ ī��Ʈ
		++count;
		//==================================================================
		Sleep(20);
		//==================================================================
		// ���� ����Ʈ ����
		if (m_enemyB1->getDie()) 
		{
			m_enemyB1->deleteObject(m_enemyB1->getX(), m_enemyB1->getY());
		}
		if (m_enemyC1->getDie())
		{
			m_enemyC1->deleteObject(m_enemyC1->getX(), m_enemyC1->getY());
		}
		//==================================================================
		// �޴����� �������� ���ý� ��
		if (m_player->getDie() && keyInput == ENTER)
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
	delete	m_enemyB1;
	delete	m_enemyC1;
	delete	m_boss;
	delete	m_bullet;
}


