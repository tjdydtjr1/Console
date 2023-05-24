#include "AutoGame.h"

/*
����1. ���� + ���� ����
- �ڵ� ���� ������ �����.
- Ŭ������ 5�� �̻�
- �÷��̾� �ɷ�ġ�� 7�� (�ʼ� �ɷ�ġ: ��)
�� �� �ɷ�ġ�� ���� ũ��Ƽ�� �߻�

- ������ ���� 3����
�� ��з� : ����, ��, �Ǽ��縮, ����
�� �ߺз� : ��з��� �ش��ϴ� �׸�� ������ 2����
�� ����	 : ���� �ð��� ������ �ǽ� ����� �������� �����.

- �÷��̾� ��ų 2�� �̻� / �� ��ų�� 1�� �̻�
�� ��ų�� ��Ÿ�� ���� ��Ų��. (��Ÿ�� �� ������ ����)

- ��Ʈ�� ������ ����� �� ��Ʈ�� Ȱ���Ѵ�.
*/

AutoGame::AutoGame()
{
	system("mode con:cols=100 lines=100");
	system("title Game_01");

	// console Ŀ�� ����
	CONSOLE_CURSOR_INFO cursorInfo = { 0, };
	cursorInfo.dwSize = 1;
	cursorInfo.bVisible = FALSE; 
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
	//

	playerA = new Player;
	enemyA = new EnemyA;
	weaponA = new Weapon_A;
	armorA = new Armor_A;
	acceA = new Accessories_A;
	portion = new ItemPortion;

	// ���� ���� N R U
	int portionN[3] = { 1,1,1 };
	char keyInput = 0;
	int startBtn = 0;
	int count = 0;
	const int arrX = 50;
	const int arrY = 50;
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
				ground[i][j] = 6;
			}
		}

	}
	// �÷��̾� ���� ��ġ
	ground[49][25] = 11;

	// ��׶��� �����ϱ�
	for (int i = 0; i < arrY; ++i)
	{
		for (int j = 0; j < arrX; ++j)
		{
			backGround[i][j] = ground[i][j];
		}
	}

	Start();
	printf("�����Ϸ��� �ƹ� Ű�� ��������.\n");
	startBtn = _getch();
	
	// ��ŸƮ���� ����
	system("cls");


	while (true)
	{
		system("title Game_01");
		gotoxy(0, 0);

		// ������� ������ �ű��
		for (int i = 0; i < arrY; ++i)
		{
			for (int j = 0; j < arrX; ++j)
			{
				backGround[i][j] = ground[i][j];
			}
		}
		printf("\n");
		// ���� ���� ���
		for (int i = 0; i < arrY; ++i)
		{
			for (int j = 0; j < arrX; ++j)
			{
				Pixel(backGround[i][j]);
			}
			cout << '\n';
		}

		// �ϴ� ���� ǥ��
		printf("HP : %d MP : %d\tSP : %d\n", playerA->getHP(), playerA->getMP(), playerA->getSP());
		printf("���� N : %d , R : %d, U : %d\n", portionN[0], portionN[1], portionN[2]);
		printf("Skill_01 : %s\tSkill_02 : %s\n", playerA->getSkill_01(), playerA->getSkill_02());

		// =====================================================================================
		// �� ����
		
		
		// Ű �Է� �ޱ�
		if (_kbhit())
		{
			keyInput = _getch();
		}

		switch (keyInput)
		{
		case 'w':
		{
			for (int i = 0; i < arrY; ++i)
			{
				for (int j = 0; j < arrX; ++j)
				{
					if (ground[i][j] == 11)
					{
						ground[i][j] = 0;
						ground[i - 1][j] = 11;
					}
				}
			}
		}
		break;
		case 'a':
		{
			for (int i = 0; i < arrY; ++i)
			{
				for (int j = 0; j < arrX; ++j)
				{
					if (ground[i][j] == 11)
					{
						ground[i][j] = 0;
						ground[i][j - 1] = 11;
					}
				}
			}
		}
		break;
		case 's':
		{
			for (int i = 0; i < arrY - 1; ++i)
			{
				for (int j = 0; j < arrX; ++j)
				{
					if (ground[i][j] == 11)
					{
						ground[i][j] = 0;
						ground[i + 1][j] = 11;
					}
				}
			}
		}
		break;
		case 'd':
		{
			for (int i = 0; i < arrY; ++i)
			{
				for (int j = 0; j < arrX; ++j)
				{
					if (ground[i][j] == 11)
					{
						ground[i][j] = 0;
						ground[i][j + 1] = 11;
						break;
					}
				}
			}
		}
		break;
		case '1':
		{
			// �⺻ ���� ���
			for (int i = 0; i < arrY; ++i)
			{
				for (int j = 0; j < arrX; ++j)
				{
					if (ground[i][j] == 11)
					{
						ground[i - 1][j] = 10;
					}
				}
			}
		}
		break;
		case '2':
		{
			// ��ų ���
			if (playerA->getSP() > 50)
			{
				// ��ų ����� ����
				printf("TEST ��ų ���\n");
				playerA->setSP(playerA->getSP() - 50);
				
				// ����
				
			}
			else
			{
				printf("SP �������� ���� ��ų ��� �Ұ�\n");
			}
		}
		break;
		default:
			break;
		}

		// �Ѿ� ���ݽ� ��� ����
		for (int i = 0; i < arrY; ++i)
		{
			for (int j = 0; j < arrX; ++j)
			{
				if (ground[i][j] == 10)
				{
					ground[i - 1][j] = 10;
					ground[i][j] = 0;
				}
				else if (ground[i][j] == 12)
				{
					ground[i][j] = 0;
					ground[i + 1][j] = 12;
				}
			}
		}

		// ������ �ִٸ� �ڵ����� ���� �Ա�
		if (portionN[0] > 0 || portionN[1] > 0 || portionN[2] > 0)
		{	
			// ���� �� ���� �� �� ���� ����
			if (playerA->getHP() < 50 && portionN[0] > 0)
			{
				playerA->setHP(playerA->getHP() + portion->getNormalP());
				portionN[0] -= 1;
			}
			else if (playerA->getHP() < 50 && portionN[1] > 0)
			{
				playerA->setHP(playerA->getHP() + portion->getNormalP());
				portionN[1] -= 1;
			}
			else if (playerA->getHP() < 50 && portionN[2] > 0)
			{
				playerA->setHP(playerA->getHP() + portion->getNormalP());
				portionN[2] -= 1;
			}
		}

		// ���ϸ��� SP 1 �� ����
		playerA->setSP(playerA->getSP() + 1);
		Sleep(10);
		++count;
	}
	

}

AutoGame::~AutoGame()
{
	delete playerA;
	delete enemyA;
	delete weaponA;
	delete armorA;
	delete acceA;
	delete portion;
}
