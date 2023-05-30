#include "GalagaGameMain.h"




void main()
{
	system("mode con:cols=300 lines=80");
	system("title Galaga_Game");

	// console Ŀ�� ����
	CONSOLE_CURSOR_INFO cursorInfo = { 0, };
	cursorInfo.dwSize = 1;
	cursorInfo.bVisible = FALSE;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);

	int startBtn = 0;
	char keyInput = 0;
	const int arrX = 50;
	const int arrY = 100;
	int ground[arrY][arrX] = { 0 };
	int backGround[arrY][arrX] = { 0 };
	
	int count = 0;
	int score = 0;
	// �ʱ� x��
	short x = 45;
	// �ʱ� y��
	short y = 50;
	short enemyX = 10;
	short enemyY = 2;

	short atkX = x;
	short atkY = y;
	// �÷��̾�
	int plane[5][5] =
	{
		0, 0, 4, 0, 0,
		0, 7, 7, 7, 0,
		4, 7, 4, 7, 4,
		0, 4, 7, 4, 0,
		0, 0, 7, 0, 0
	};

	int enemy[5][5] =
	{
		0, 0, 0, 0, 0,
		0, 1, 3, 1, 0,
		1, 5, 1, 5, 1,
		1, 5, 1, 5, 1,
		0, 1, 1, 1, 0
	};



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

	//gotoxy(0, 20);
	//Start();

	printf("�����Ϸ��� �ƹ� Ű�� ��������.\n");
	startBtn = _getch();

	// ��ŸƮ���� ����
	system("cls");

	
	// ���� ���� ���
	for (int i = 0; i < arrY; ++i)
	{
		for (int j = 0; j < arrX; ++j)
		{
			Pixel(backGround[i][j]);
		}
		cout << '\n';
	}
	
	// �÷��̾�
	for (int i = 0; i < 5; ++i)
	{
		gotoxy(x, y + i);
		for (int j = 0; j < 5; ++j)
		{
			Pixel(plane[i][j]);
		}

	}

	while (true)
	{
		// ���� ��Ʈ ����
		gotoxy(105, 8);
		printf("Score : %d",score);
		gotoxy(105, 9);
		printf("TestTestTestTestTestTestTest");
		GalagaPlayer();
		GalagaPlayer();
		GalagaPlayer();


		gotoxy(152, 8);
		printf("����Ű\t\t\t\t����Ű");
		system("title Galaga_Game");
		// ����Ű
		ArrowUp();
		ArrowRight();
		ArrowLeft();
		ArrowDown();
		ZKey();
		//

		enemyX = rand() % 30;
		enemyY = rand() % 4;
		for (int i = 0; i < 5; ++i)
		{
			gotoxy(enemyX, enemyY + i);
			for (int j = 0; j < 5; ++j)
			{
				Pixel(enemy[i][j]);
			}

		}
		
		enemyX++;
		// Ű �Է� �ޱ�
		if (_kbhit())
		{
			keyInput = _getch();
		}

		switch (keyInput)
		{
		case UP:
		{
			y -= 1;
			ArrowUpW();
		
			// goto
			for (int i = 0; i < 5; ++i)
			{
				gotoxy(x, y + i);
				for (int j = 0; j < 5; ++j)
				{
					Pixel(plane[i][j]);
				}

			}
		}
		break;
		case LEFT:
		{
			x -= 1;
			ArrowLeftW();
			// goto
			for (int i = 0; i < 5; ++i)
			{
				gotoxy(x, y + i);
				for (int j = 0; j < 5; ++j)
				{
					Pixel(plane[i][j]);
				}

			}
		}
		break;
		case DOWN:
		{
			y += 1;
			ArrowDownW();

			// goto
			for (int i = 0; i < 5; ++i)
			{
				gotoxy(x, y + i);
				for (int j = 0; j < 5; ++j)
				{
					Pixel(plane[i][j]);
				}

			}

		}
		break;
		case RIGHT:
		{
			x += 1;
			ArrowRightW();

			// goto
			for (int i = 0; i < 5; ++i)
			{
				gotoxy(x, y + i);
				for (int j = 0; j < 5; ++j)
				{
					Pixel(plane[i][j]);
				}
			}
		}
		break;
		case 'z':
		{
			gotoxy(x, y - 1);
			backGround[y][x] = 0;
			backGround[y - 1][x] = 10;
			ZKeyW();
			continue;
		}
		break;
		case '2':
		{

		}
		break;
		default:
			break;
		}
		
		++count;
		Sleep(20);
		
	}
	

}