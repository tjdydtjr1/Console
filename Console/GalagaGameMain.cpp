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
	// ���� ��ŸƮ
	Start();
	gotoxy(15, 25);
	printf("�� ���Ϸ��� �ƹ�Ű�� ��������.\n");
	keyInput = _getch();
	
	// ��ŸƮ���� ����
	system("cls");

	// �⺻�� ���
	//PrintBaseMap();
	const int arrX = 50;
	const int arrY = 100;
	int ground[arrY][arrX] = { 0 };
	int backGround[arrY][arrX] = { 0 };

	// �ʱ��
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
	// ��׶��� �����ϱ�
	for (int i = 0; i < arrY; ++i)
	{
		for (int j = 0; j < arrX; ++j)
		{
			backGround[i][j] = ground[i][j];
		}
	}
	// ���� ���� ���
	for (int i = 0; i < arrY; ++i)
	{
		for (int j = 0; j < arrX; ++j)
		{
			Pixel(backGround[i][j]);
		}
		cout << '\n';
	}



	// �ʱ� ��ġ �÷��̾� ���
	m_player->printObject(m_player->getX(), m_player->getY());

	while (true)
	{
		// ���� ��Ʈ ����
		gotoxy(105, 8);
		TextColor(7, 0);
		printf("Score : %d", score);
		gotoxy(105, 9);
		TextColor(7, 0);
		printf("TestTestTestTestTestTestTest");
		// ��� �÷��̾� ��Ʈ
		GalagaPlayer();

		// ����Ű ��Ʈ
		ArrowUp();
		ArrowRight();
		ArrowLeft();
		ArrowDown();
		ZKey();
		//
		
		// �� ����
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
			// �Ѿ� ����
			m_bullet->createBullet(tempX, tempY - count);

			ZKeyW();
			time(NULL);
		}
		m_bullet->createBullet(tempX, tempY--);
		// �÷��̾� ������
		m_player->movePlayer(keyInput, m_player->getX(), m_player->getY());
		

		Sleep(25);
	}
	system("cls");
	// ��Ʈ ���
	printf("���� ����");
}

GalagaGameMain::~GalagaGameMain()
{
	
}


