#include "AutoGame.h"

/*
과제1. 겟터 + 셋터 과제
- 자동 전투 게임을 만든다.
- 클래스는 5개 이상
- 플레이어 능력치는 7개 (필수 능력치: 운)
ㄴ 운 능력치에 따라 크리티컬 발생

- 아이템 종류 3가지
ㄴ 대분류 : 무기, 방어구, 악세사리, 포션
ㄴ 중분류 : 대분류에 해당하는 항목당 아이템 2개씩
ㄴ 포션	 : 수업 시간에 진행한 실습 내용들 포션으로 만든다.

- 플레이어 스킬 2개 이상 / 적 스킬은 1개 이상
ㄴ 스킬은 쿨타임 적용 시킨다. (쿨타임 될 때마다 쓴다)

- 도트는 기존에 만들어 둔 도트를 활용한다.
*/

AutoGame::AutoGame()
{
	system("mode con:cols=100 lines=100");
	system("title Game_01");

	playerA = new PlayerA;
	enemyA = new EnemyA;
	weaponA = new Weapon_A;
	armorA = new Armor_A;
	acceA = new Accessories_A;
	portion = new ItemPortion;

	// 포션 갯수 N R U
	int portionN[3] = { 1,1,1 };
	char keyInput = 0;
	int startBtn = 0;
	int count = 0;
	const int arrX = 50;
	const int arrY = 30;
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
				ground[i][j] = 6;
			}
		}

	}
	// 시작 위치
	ground[29][25] = 11;

	// 백그라운드 복사
	for (int i = 0; i < arrY; ++i)
	{
		for (int j = 0; j < arrX; ++j)
		{
			backGround[i][j] = ground[i][j];
		}
	}

	Start();
	printf("시작하려면 아무 키나 누르세요.\n");
	startBtn = _getch();
	while (true)
	{
		system("title Game_01");

		for (int i = 0; i < arrY; ++i)
		{
			for (int j = 0; j < arrX; ++j)
			{
				backGround[i][j] = ground[i][j];
			}
		}
		//system("cls");
		printf("\n");
		for (int i = 0; i < arrY; ++i)
		{
			for (int j = 0; j < arrX; ++j)
			{
				Pixel(backGround[i][j]);		
			}

			cout << '\n';
		}

		// 하단 정보 표시
		printf("HP : %d MP : %d\tSP : %d\n", playerA->getHP(), playerA->getMP(), playerA->getSP());
		printf("포션 N : %d , R : %d, U : %d\n", portionN[0], portionN[1], portionN[2]);
		printf("Skil : %s \n", playerA->getSkill());

		// =====================================================================================
		// 적 생성
		//if (count == 5)
		//{
			ground[1][rand() % 20 + 5] = 12;
		//	count = 0;
		//}

		// 키 입력
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
					/*if (ground[i][j] == 10)
					{
						ground[i - 1][j] = 10;
						ground[i][j] = 0;
					}*/
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
					/*if (ground[i][j] == 10)
					{
						ground[i - 1][j] = 10;
						ground[i][j] = 0;
					}*/
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
					/*if (ground[i][j] == 10)
					{
						ground[i - 1][j] = 10;
						ground[i][j] = 0;
					}*/
				}

			}
		}
		break;
		case '1':
		{
			// 기본 공격 사용
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
			// 스킬 사용
			if (playerA->getSP() > 50)
			{
				// 스킬 사용후 감소
				printf("TEST 스킬 사용\n");
				playerA->setSP(playerA->getSP() - 50);

			}
			else
			{
				printf("SP 부족으로 인해 스킬 사용 불가\n");
			}
		}
		break;
		default:
			break;
		}
		
		// 공격시 계속 진행
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

		if (portionN[0] > 0 || portionN[1] > 0 || portionN[2] > 0)
		{	
			// 일정 피 이하 일 때 물약 복용
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

		// 매턴마다 SP 1 씩 증가
		playerA->setSP(playerA->getSP() + 1);
		gotoxy(0, 0);
		Sleep(500);
		//system("cls");
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
