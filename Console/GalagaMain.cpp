#include "GalagaGameMain.h"

void main()
{
	system("mode con:cols=150 lines=60");
	system("title Galaga_Game");

	// console Ŀ�� ����
	CONSOLE_CURSOR_INFO cursorInfo = { 0, };
	cursorInfo.dwSize = 1;
	cursorInfo.bVisible = FALSE;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);

	GalagaGameMain* game = new GalagaGameMain;
	delete game;

}
//	int count = 0;
//	int startBtn = 0;
//	char keyInput = 0;
//	const int arrX = 50;
//	const int arrY = 100;
//	int ground[arrY][arrX] = { 0 };
//	int backGround[arrY][arrX] = { 0 };
//	
//	int score = 0;
//	// �ʱ� x��
//	char x = 45;
//	// �ʱ� y��
//	char y = 50;
//	char enemyX = 10;
//	char enemyY = 2;
//
//	// �� ���� ��ǥ
//	char enemyAtkX = enemyX;
//	char enemyAtkY = enemyY;
//	
//	// �÷��̾� ���� ��ǥ
//	char playerAtkX = x + 2;
//	char playerAtkY = y - 1;
//	char tempAtkX = playerAtkX;
//	char tempAtkY = playerAtkY;
//
//
//	// �÷��̾�
//	int plane[5][5] =
//	{
//		0, 0, 4, 0, 0,
//		0, 7, 7, 7, 0,
//		4, 7, 4, 7, 4,
//		0, 4, 7, 4, 0,
//		0, 0, 7, 0, 0
//	};
//
//	int enemy[5][5] =
//	{
//		0, 0, 0, 0, 0,
//		0, 1, 3, 1, 0,
//		1, 5, 1, 5, 1,
//		1, 5, 1, 5, 1,
//		0, 1, 1, 1, 0
//	};
//	int enemyA[5][5] =
//	{
//		0, 0, 0, 0, 0,
//		0, 4, 3, 4, 0,
//		4, 1, 4, 1, 4,
//		4, 1, 4, 1, 4,
//		0, 4, 4, 4, 0
//	};
//
//
//	// �ʱ��
//	for (int i = 0; i < arrY; ++i)
//	{
//		for (int j = 0; j < arrX; ++j)
//		{
//			ground[i][j] = 0;
//			if (j % 49 == 0)
//			{
//				ground[i][j] = 7;
//			}
//		}
//	}
//
//	// ��׶��� �����ϱ�
//	for (int i = 0; i < arrY; ++i)
//	{
//		for (int j = 0; j < arrX; ++j)
//		{
//			backGround[i][j] = ground[i][j];
//		}
//	}
//
//	gotoxy(200, 10);
//	Start();
//	gotoxy(15, 25);
//	printf("�� ���Ϸ��� �ƹ�Ű�� ��������.\n");
//	startBtn = _getch();
//
//	// ��ŸƮ���� ����
//	system("cls");
//
//	
//	// ���� ���� ���
//	for (int i = 0; i < arrY; ++i)
//	{
//		for (int j = 0; j < arrX; ++j)
//		{
//			Pixel(backGround[i][j]);
//		}
//		cout << '\n';
//	}
//	
//	// �÷��̾�
//	for (int i = 0; i < 5; ++i)
//	{
//		gotoxy(x, y + i);
//		for (int j = 0; j < 5; ++j)
//		{
//			Pixel(plane[i][j]);
//		}
//
//	}
//
//	while (true)
//	{
//
//		// ���� ��Ʈ ����
//		gotoxy(105, 8);
//		TextColor(7, 0);
//		printf("Score : %d",score);
//		gotoxy(105, 9);
//		TextColor(7, 0);
//		printf("TestTestTestTestTestTestTest");
//		// ��� �÷��̾� ��Ʈ
//		GalagaPlayer();
//		
//		system("title Galaga_Game");
//		// ����Ű ��Ʈ
//		ArrowUp();
//		ArrowRight();
//		ArrowLeft();
//		ArrowDown();
//		ZKey();
//		//
//		
//
//		// �� ������ ����
//		for (int i = 0; i < 5; ++i)
//		{
//			gotoxy(enemyX, enemyY + i);
//			{
//				for (int j = 0; j < 5; ++j)
//				{
//					Pixel(0);
//				}
//			}	
//			gotoxy(enemyX + 8, enemyY + i);
//			{
//				for (int j = 0; j < 5; ++j)
//				{
//					Pixel(0);
//				}
//			}
//		}
//		if(enemyX > 2)
//		{
//			--enemyX;
//			enemyY += rand() % 2 - rand() % 2;
//			for (int i = 0; i < 5; ++i)
//			{
//				gotoxy(enemyX, enemyY + i);
//				for (int j = 0; j < 5; ++j)
//				{
//					Pixel(enemy[i][j]);
//				}
//			}
//		
//			for (int i = 0; i < 5; ++i)
//			{
//				gotoxy(enemyX + 8, enemyY + i);
//				for (int j = 0; j < 5; ++j)
//				{
//					Pixel(enemy[i][j]);
//				}
//			}
//		}
//		else
//		{
//			enemyX = 80;
//		}
//		// Ű �Է� �ޱ�
//		if (_kbhit())
//		{
//			keyInput = _getch();
//		}
//		// �� �̻���
//		if (enemyAtkY < 60)
//		{
//			gotoxy(enemyAtkX, enemyAtkY + 6);
//			Pixel(0);
//			gotoxy(enemyAtkX + 8, enemyAtkY + 6);
//			Pixel(0);
//
//			++enemyAtkY;
//			gotoxy(enemyAtkX, enemyAtkY + 6);
//			Pixel(12);
//			
//			gotoxy(enemyAtkX + 8, enemyAtkY + 6);
//			Pixel(12);
//		}
//		else
//		{
//			enemyAtkX = enemyX;
//			enemyAtkY = enemyY;
//		}
//
//		switch (keyInput)
//		{
//		case UP:
//		{
//			for (int i = 0; i < 5; ++i)
//			{
//				gotoxy(x, y + i);
//				for (int j = 0; j < 5; ++j)
//				{
//					Pixel(0);
//				}
//			}
//			y -= 1;
//			ArrowUpW();
//			// goto
//			for (int i = 0; i < 5; ++i)
//			{
//				gotoxy(x, y + i);
//				for (int j = 0; j < 5; ++j)
//				{
//					Pixel(plane[i][j]);
//				}
//			}
//		}
//		break;
//		case LEFT:
//		{
//			for (int i = 0; i < 5; ++i)
//			{
//				gotoxy(x, y + i);
//				for (int j = 0; j < 5; ++j)
//				{
//					Pixel(0);
//				}
//			}
//			x -= 1;
//			ArrowLeftW();
//			// goto
//			for (int i = 0; i < 5; ++i)
//			{
//				gotoxy(x, y + i);
//				for (int j = 0; j < 5; ++j)
//				{
//					Pixel(plane[i][j]);
//				}
//			}
//		}
//		break;
//		case DOWN:
//		{
//			for (int i = 0; i < 5; ++i)
//			{
//				gotoxy(x, y + i);
//				for (int j = 0; j < 5; ++j)
//				{
//					Pixel(0);
//				}
//			}
//			y += 1;
//			ArrowDownW();
//
//			// goto
//			for (int i = 0; i < 5; ++i)
//			{
//				gotoxy(x, y + i);
//				for (int j = 0; j < 5; ++j)
//				{
//					Pixel(plane[i][j]);
//				}
//			}
//		}
//		break;
//		case RIGHT:
//		{
//			for (int i = 0; i < 5; ++i)
//			{
//				gotoxy(x, y + i);
//				for (int j = 0; j < 5; ++j)
//				{
//					Pixel(0);
//				}
//			}
//			x += 1;
//			ArrowRightW();
//			// goto
//			for (int i = 0; i < 5; ++i)
//			{
//				gotoxy(x, y + i);
//				for (int j = 0; j < 5; ++j)
//				{
//					Pixel(plane[i][j]);
//				}
//			}
//		}
//		break;
//		case 'z':
//		{
//			playerAtkX = x + 2;
//			playerAtkY = y - 1;
//			tempAtkX = playerAtkX;
//			tempAtkY = playerAtkY;
//			
//			ZKeyW();
//			continue;
//		}
//		break;
//		case ESC:
//		{
//			// �޴� ���� ����
//			char temp = 0;
//			// ���� �ߴ� �޴�
//			TextColor(7, 0);
//			gotoxy(40, 25);
//			printf("=============");
//			TextColor(8, 0);
//			gotoxy(40, 26);
//			printf("1. ����ϱ�");
//			gotoxy(40, 27);
//			TextColor(8, 0);
//			printf("2. ���� ����");
//			gotoxy(40, 29);
//			TextColor(4, 0);
//			("=============");
//			while (keyInput != ENTER)
//			{
//				
//				
//				keyInput = _getch();
//				switch (keyInput)
//				{
//				case UP:
//				{
//					TextColor(7, 0);
//					gotoxy(40, 25);
//					printf("=============");
//					gotoxy(40, 26);
//					TextColor(7, 0);
//					printf("1. ����ϱ�");
//					gotoxy(40, 27);
//					TextColor(8, 0);
//					printf("2. ���� ����");
//					gotoxy(40, 29);
//					TextColor(4, 0);
//					("=============");
//					temp = UP;
//				}
//				break;
//				case DOWN:
//				{
//					TextColor(7, 0);
//					gotoxy(40, 25);
//					printf("=============");
//					gotoxy(40, 26);
//					TextColor(8, 0);
//					printf("1. ����ϱ�");
//					gotoxy(40, 27);
//					TextColor(7, 0);
//					printf("2. ���� ����");
//					gotoxy(40, 29);
//					TextColor(4, 0);
//					("=============");
//					temp = DOWN;
//				}
//				break;
//				
//				}
//			}
//			// �޴� �����
//			gotoxy(40, 25);
//			for (int i = 0; i < 13; ++i)
//			{
//				Pixel(0);
//			}
//			gotoxy(40, 26);
//			for (int i = 0; i < 10; ++i)
//			{
//				Pixel(0);
//			}
//			gotoxy(40, 27);
//			for (int i = 0; i < 10; ++i)
//			{
//				Pixel(0);
//			}
//			gotoxy(40, 29);
//			for (int i = 0; i < 13; ++i)
//			{
//				Pixel(0);
//			}
//			if (temp == DOWN && keyInput == ENTER)
//			{
//				goto END;
//			}
//			
//			
//		}
//
//		break;
//		default:
//			break;
//		}
//		
//		Sleep(25);
//		
//	}
//END:
//	system("cls");
//	// �������� ��Ʈ ���
//	printf("��������");
//
//}