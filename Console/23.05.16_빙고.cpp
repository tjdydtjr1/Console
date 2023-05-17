#include "Bingo.h"
/*
과제3. 빙고 만들기

- 0 ~ 24까지의 수를 랜덤으로 배치해서 5 x 5로 출력한다.
- 숫자를 선택하면 #, %, & 등등(알아서) 바꾼다.
- 빙고가 되면 빙고 카운트가 올라가고 5 빙고가 되면 게임이 종료 된다.
  ㄴ 단, 게임이 종료되면 프로그램이 종료되는게 아니라 완성된 빙고가 떠있어야 한다.

도전 과제1. 빙고
- 위에 룰과 같음
- 단, 혼자하는 빙고가 아닌 AI와 번갈아 가며 플레이하는 빙고 버전
- 완성도는 AI 수준에 따라서 나뉜다.

한줄 조사. 4대 문자열 + 포인터
- 노트에 적어온다.
- 비유할것 생각해 온다.
*/

namespace BingoGame
{

	const int arrMax = 25;
	const int endGame = 5;
	int arrNum[arrMax] = { 0 };
	int resultNum[arrMax] = { 0 };
	int tempArr[arrMax] = { 0 };
	int open = 0;
	int gamePlay = 0;
	int temp = 0;
	int count = 0;
	// AI
	int openAi = 0;
	int card[25] = { 0 };
	

	// 빙고 조건 변수
	int row = 0;
	int colrum = 0;
	int diagonalL = 0;
	int diagonalR = 0;

	// 빙고판 초기화 함수
	void Init()
	{
		// 빙고판 초기화
		for (int i = 0; i < arrMax; ++i)
		{
			// 빙고판 0으로 셋팅
			arrNum[i] = 0;

			// 0 ~ 24사이의 값 랜덤
			temp = rand() % 25;

			// 넣은 자리 또 넣게 되면 다시 랜덤
			if (tempArr[temp] == 1)
			{
				--i;
				continue;
			}
			// 넣은 자리 1로 셋팅
			tempArr[temp] = 1;

			// 랜덤값 배열에 셋팅
			resultNum[i] = temp;
		}
	}

	// 빙고
	void Bingo()
	{
		
		while (gamePlay < endGame)
		{

			Init();
			
			while (count < 25)
			{
				// 빙고 조건 초기화
				count = 0;
				row = 0;
				colrum = 0;
				diagonalL = 0;
				diagonalR = 0;

				//치트 빙고 전체 오픈
				printf("치트 \n");
				for (int i = 1; i <= arrMax; ++i)
				{
					printf("%d\t", resultNum[i - 1]);
					if (i % 5 == 0)
					{
						cout << '\n' << '\n';
					}
				}
				cout << '\n' << '\n';

				printf("=============================================================\n");
				printf("빙고 게임 시작\n\n");

				// 빙고판 출력
				for (int i = 1; i <= arrMax; ++i)
				{
					printf("%s\t", (arrNum[i - 1] == 0) ? "X" : "O");
					if (i % 5 == 0)
					{
						cout << '\n' << '\n';
					}
				}
				printf("=============================================================\n");
				// 빙고 완성 조건 가로, 세로, 대각선
				// 가로
				for (int i = 0; i < 5; i += 5)
				{
					for (int j = 0; j < 5; ++j)
					{
						row += arrNum[i + j];
						if (row == 5)
						{
							printf("가로 빙고 완성\n");

							++gamePlay;

							Sleep(3000);

							system("cls");
							goto REGAME;
						}
					}
					row = 0;
					
				}

				// 세로
				for (int i = 0; i < 5; ++i)
				{
					for (int j = 0; j < 21; j += 5)
					{
						colrum += arrNum[i + j];
						if (colrum == 5)
						{
							printf("세로 빙고 완성\n");

							++gamePlay;
							
							Sleep(3000);

							system("cls");
							goto REGAME;
						}
					}
					colrum = 0;
				}

				// 우측에서 좌측아래로 내려오는 대각선
				for (int i = 1; i < 5; ++i)
				{
					diagonalL += arrNum[i * 4];
					if (diagonalL == 5)
					{
						printf("우측에서 좌측 아래 대각선 빙고 완성\n");

						++gamePlay;

						Sleep(3000);

						system("cls");
						goto REGAME;
					}
				}

				for (int i = 0; i < 25; i += 6)
				{

					diagonalR += arrNum[i];
					if (diagonalR == 5)
					{
						printf("좌측에서 우측 아래 대각선 빙고 완성\n");

						++gamePlay;

						Sleep(3000);

						system("cls");
						goto REGAME;
					}
				}

				// 오픈할 빙고판 위치
				cin >> open;
				++count;
				if (open > 24)
				{
					printf("해당하는 빙고판 숫자가 없습니다.\n");
					system("cls");
					continue;
				}
				else if (arrNum[open] == 1)
				{
					printf("이미 열린 카드 입니다\n");
					system("cls");
					continue;
				}

				system("cls");
			
				for (int i = 0; i < arrMax; ++i)
				{
					// 치트 번호 맞추기
					if (resultNum[i] == open)
					{
						arrNum[i] = 1;
					}
				}

			}

		REGAME:

			// 랜덤 숫자 임시 배열 초기화
			for (int i = 0; i < arrMax; ++i)
			{
				tempArr[i] = 0;
			}
			system("cls");

		}

		printf("게임 종료\n완성 된 빙고판\n");
		for (int i = 1; i <= arrMax; ++i)
		{
			printf("%s\t", (arrNum[i - 1] == 0) ? "X" : "O");
			if (i % 5 == 0)
			{
				cout << '\n' << '\n';
			}
		}
	}

	// AI추가
	void AiBingo()
	{
		while (gamePlay < endGame)
		{

			Init();
			count = 0;
			while (count < 25)
			{
				// 빙고 조건 초기화
				row = 0;
				colrum = 0;
				diagonalL = 0;
				diagonalR = 0;

				//치트 빙고 전체 오픈
				printf("치트 \n");
				for (int i = 1; i <= arrMax; ++i)
				{
					printf("%d\t", resultNum[i - 1]);
					if (i % 5 == 0)
					{
						cout << '\n' << '\n';
					}
				}
				cout << '\n' << '\n';

				printf("=============================================================\n");
				printf("빙고 게임 시작\n\n");
				printf("User = A, AI = B\n");

				// 전체 빙고판 출력
				for (int i = 1; i <= arrMax; ++i)
				{
					
					if (arrNum[i - 1] == 0)
					{
						printf("%s\t", "X");
					}
					else if (arrNum[i - 1] == 1)
					{
						printf("%s\t", "A");
					}
					else if (arrNum[i - 1] == 10)
					{
						printf("%s\t", "B");
					}

					// 5개마다 줄 띄우기
					if (i % 5 == 0)
					{
						cout << '\n' << '\n';
					}
				}


				// 현재 오픈된 카드
				for (int i = 0; i < arrMax; ++i)
				{
					if (arrNum[i] == 0)
					{
						continue;
					}
					card[i];
				}

				printf("=============================================================\n");
				// 빙고 완성 조건 가로, 세로, 대각선
				// 가로
				for (int i = 0; i < 5; i += 5)
				{
					for (int j = 0; j < 5; ++j)
					{
						row += arrNum[i + j];
						if (row == 5)
						{
							printf("가로 빙고 완성\n");

							++gamePlay;

							Sleep(3000);

							system("cls");
							goto REGAME;
						}
						else if (row == 50)
						{
							printf("AI 가로 빙고 완성\n");

							++gamePlay;

							Sleep(3000);

							system("cls");
							goto REGAME;
						}
					}
					row = 0;

				}

				// 세로
				for (int i = 0; i < 5; ++i)
				{
					for (int j = 0; j < 21; j += 5)
					{
						colrum += arrNum[i + j];
						if (colrum == 5)
						{
							printf("세로 빙고 완성\n");

							++gamePlay;

							Sleep(3000);

							system("cls");
							goto REGAME;
						}
						else if (colrum == 50)
						{
							printf("AI 세로 빙고 완성\n");

							++gamePlay;

							Sleep(3000);

							system("cls");
							goto REGAME;
						}
					}
					colrum = 0;
				}

				// 우측에서 좌측아래로 내려오는 대각선
				for (int i = 1; i < 5; ++i)
				{
					diagonalL += arrNum[i * 4];
					if (diagonalL == 5)
					{
						printf("우측에서 좌측 아래 대각선 빙고 완성\n");

						++gamePlay;

						Sleep(3000);

						system("cls");
						goto REGAME;
					}
					else if (diagonalL == 50)
					{
						printf("AI 우측에서 좌측 아래 대각선 빙고 완성\n");

						++gamePlay;

						Sleep(3000);

						system("cls");
						goto REGAME;
					}
				}

				// 좌측에서 우측 아래 대각선
				for (int i = 0; i < 25; i += 6)
				{

					diagonalR += arrNum[i];
					if (diagonalR == 5)
					{
						printf("좌측에서 우측 아래 대각선 빙고 완성\n");

						++gamePlay;

						Sleep(3000);

						system("cls");
						goto REGAME;
					}
					else if (diagonalR == 50)
					{
						printf("좌측에서 우측 아래 대각선 빙고 완성\n");

						++gamePlay;

						Sleep(3000);

						system("cls");
						goto REGAME;
					}
				}

				// 오픈할 빙고판 위치
				cin >> open;
				if (open > 24)
				{
					printf("해당하는 빙고판 숫자가 없습니다.\n");
					system("cls");
					continue;
				}
				else if (arrNum[open] == 1 || arrNum[open] == 10)
				{
					printf("이미 열린 카드 입니다\n");
					system("cls");
					continue;
				}

				RE:
				openAi = rand() % 25;
				if (open == openAi)
				{
					goto RE;
				}
				card[count] = open;
				++count;
				card[count] = openAi;
				++count;
				

				system("cls");

				for (int i = 0; i < arrMax; ++i)
				{
					// 치트 번호 맞추기
					if (resultNum[i] == open)
					{
						arrNum[i] = 1;
					}
					else if (resultNum[i] == openAi)
					{
						arrNum[i] = 10;
					}
				}

			}

		REGAME:

			// 랜덤 숫자 임시 배열 초기화
			for (int i = 0; i < arrMax; ++i)
			{
				tempArr[i] = 0;
			}
			system("cls");

		}

		printf("게임 종료\n완성 된 빙고판\n");
		for (int i = 1; i <= arrMax; ++i)
		{
			printf("%s\t", (arrNum[i - 1] == 0) ? "X" : "O");
			if (i % 5 == 0)
			{
				cout << '\n' << '\n';
			}
		}
	}
}