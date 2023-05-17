#include "Bingo.h"
/*
����3. ���� �����

- 0 ~ 24������ ���� �������� ��ġ�ؼ� 5 x 5�� ����Ѵ�.
- ���ڸ� �����ϸ� #, %, & ���(�˾Ƽ�) �ٲ۴�.
- ���� �Ǹ� ���� ī��Ʈ�� �ö󰡰� 5 ���� �Ǹ� ������ ���� �ȴ�.
  �� ��, ������ ����Ǹ� ���α׷��� ����Ǵ°� �ƴ϶� �ϼ��� ���� ���־�� �Ѵ�.

���� ����1. ����
- ���� ��� ����
- ��, ȥ���ϴ� ���� �ƴ� AI�� ������ ���� �÷����ϴ� ���� ����
- �ϼ����� AI ���ؿ� ���� ������.

���� ����. 4�� ���ڿ� + ������
- ��Ʈ�� ����´�.
- �����Ұ� ������ �´�.
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
	

	// ���� ���� ����
	int row = 0;
	int colrum = 0;
	int diagonalL = 0;
	int diagonalR = 0;

	// ������ �ʱ�ȭ �Լ�
	void Init()
	{
		// ������ �ʱ�ȭ
		for (int i = 0; i < arrMax; ++i)
		{
			// ������ 0���� ����
			arrNum[i] = 0;

			// 0 ~ 24������ �� ����
			temp = rand() % 25;

			// ���� �ڸ� �� �ְ� �Ǹ� �ٽ� ����
			if (tempArr[temp] == 1)
			{
				--i;
				continue;
			}
			// ���� �ڸ� 1�� ����
			tempArr[temp] = 1;

			// ������ �迭�� ����
			resultNum[i] = temp;
		}
	}

	// ����
	void Bingo()
	{
		
		while (gamePlay < endGame)
		{

			Init();
			
			while (count < 25)
			{
				// ���� ���� �ʱ�ȭ
				count = 0;
				row = 0;
				colrum = 0;
				diagonalL = 0;
				diagonalR = 0;

				//ġƮ ���� ��ü ����
				printf("ġƮ \n");
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
				printf("���� ���� ����\n\n");

				// ������ ���
				for (int i = 1; i <= arrMax; ++i)
				{
					printf("%s\t", (arrNum[i - 1] == 0) ? "X" : "O");
					if (i % 5 == 0)
					{
						cout << '\n' << '\n';
					}
				}
				printf("=============================================================\n");
				// ���� �ϼ� ���� ����, ����, �밢��
				// ����
				for (int i = 0; i < 5; i += 5)
				{
					for (int j = 0; j < 5; ++j)
					{
						row += arrNum[i + j];
						if (row == 5)
						{
							printf("���� ���� �ϼ�\n");

							++gamePlay;

							Sleep(3000);

							system("cls");
							goto REGAME;
						}
					}
					row = 0;
					
				}

				// ����
				for (int i = 0; i < 5; ++i)
				{
					for (int j = 0; j < 21; j += 5)
					{
						colrum += arrNum[i + j];
						if (colrum == 5)
						{
							printf("���� ���� �ϼ�\n");

							++gamePlay;
							
							Sleep(3000);

							system("cls");
							goto REGAME;
						}
					}
					colrum = 0;
				}

				// �������� �����Ʒ��� �������� �밢��
				for (int i = 1; i < 5; ++i)
				{
					diagonalL += arrNum[i * 4];
					if (diagonalL == 5)
					{
						printf("�������� ���� �Ʒ� �밢�� ���� �ϼ�\n");

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
						printf("�������� ���� �Ʒ� �밢�� ���� �ϼ�\n");

						++gamePlay;

						Sleep(3000);

						system("cls");
						goto REGAME;
					}
				}

				// ������ ������ ��ġ
				cin >> open;
				++count;
				if (open > 24)
				{
					printf("�ش��ϴ� ������ ���ڰ� �����ϴ�.\n");
					system("cls");
					continue;
				}
				else if (arrNum[open] == 1)
				{
					printf("�̹� ���� ī�� �Դϴ�\n");
					system("cls");
					continue;
				}

				system("cls");
			
				for (int i = 0; i < arrMax; ++i)
				{
					// ġƮ ��ȣ ���߱�
					if (resultNum[i] == open)
					{
						arrNum[i] = 1;
					}
				}

			}

		REGAME:

			// ���� ���� �ӽ� �迭 �ʱ�ȭ
			for (int i = 0; i < arrMax; ++i)
			{
				tempArr[i] = 0;
			}
			system("cls");

		}

		printf("���� ����\n�ϼ� �� ������\n");
		for (int i = 1; i <= arrMax; ++i)
		{
			printf("%s\t", (arrNum[i - 1] == 0) ? "X" : "O");
			if (i % 5 == 0)
			{
				cout << '\n' << '\n';
			}
		}
	}

	// AI�߰�
	void AiBingo()
	{
		while (gamePlay < endGame)
		{

			Init();
			count = 0;
			while (count < 25)
			{
				// ���� ���� �ʱ�ȭ
				row = 0;
				colrum = 0;
				diagonalL = 0;
				diagonalR = 0;

				//ġƮ ���� ��ü ����
				printf("ġƮ \n");
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
				printf("���� ���� ����\n\n");
				printf("User = A, AI = B\n");

				// ��ü ������ ���
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

					// 5������ �� ����
					if (i % 5 == 0)
					{
						cout << '\n' << '\n';
					}
				}


				// ���� ���µ� ī��
				for (int i = 0; i < arrMax; ++i)
				{
					if (arrNum[i] == 0)
					{
						continue;
					}
					card[i];
				}

				printf("=============================================================\n");
				// ���� �ϼ� ���� ����, ����, �밢��
				// ����
				for (int i = 0; i < 5; i += 5)
				{
					for (int j = 0; j < 5; ++j)
					{
						row += arrNum[i + j];
						if (row == 5)
						{
							printf("���� ���� �ϼ�\n");

							++gamePlay;

							Sleep(3000);

							system("cls");
							goto REGAME;
						}
						else if (row == 50)
						{
							printf("AI ���� ���� �ϼ�\n");

							++gamePlay;

							Sleep(3000);

							system("cls");
							goto REGAME;
						}
					}
					row = 0;

				}

				// ����
				for (int i = 0; i < 5; ++i)
				{
					for (int j = 0; j < 21; j += 5)
					{
						colrum += arrNum[i + j];
						if (colrum == 5)
						{
							printf("���� ���� �ϼ�\n");

							++gamePlay;

							Sleep(3000);

							system("cls");
							goto REGAME;
						}
						else if (colrum == 50)
						{
							printf("AI ���� ���� �ϼ�\n");

							++gamePlay;

							Sleep(3000);

							system("cls");
							goto REGAME;
						}
					}
					colrum = 0;
				}

				// �������� �����Ʒ��� �������� �밢��
				for (int i = 1; i < 5; ++i)
				{
					diagonalL += arrNum[i * 4];
					if (diagonalL == 5)
					{
						printf("�������� ���� �Ʒ� �밢�� ���� �ϼ�\n");

						++gamePlay;

						Sleep(3000);

						system("cls");
						goto REGAME;
					}
					else if (diagonalL == 50)
					{
						printf("AI �������� ���� �Ʒ� �밢�� ���� �ϼ�\n");

						++gamePlay;

						Sleep(3000);

						system("cls");
						goto REGAME;
					}
				}

				// �������� ���� �Ʒ� �밢��
				for (int i = 0; i < 25; i += 6)
				{

					diagonalR += arrNum[i];
					if (diagonalR == 5)
					{
						printf("�������� ���� �Ʒ� �밢�� ���� �ϼ�\n");

						++gamePlay;

						Sleep(3000);

						system("cls");
						goto REGAME;
					}
					else if (diagonalR == 50)
					{
						printf("�������� ���� �Ʒ� �밢�� ���� �ϼ�\n");

						++gamePlay;

						Sleep(3000);

						system("cls");
						goto REGAME;
					}
				}

				// ������ ������ ��ġ
				cin >> open;
				if (open > 24)
				{
					printf("�ش��ϴ� ������ ���ڰ� �����ϴ�.\n");
					system("cls");
					continue;
				}
				else if (arrNum[open] == 1 || arrNum[open] == 10)
				{
					printf("�̹� ���� ī�� �Դϴ�\n");
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
					// ġƮ ��ȣ ���߱�
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

			// ���� ���� �ӽ� �迭 �ʱ�ȭ
			for (int i = 0; i < arrMax; ++i)
			{
				tempArr[i] = 0;
			}
			system("cls");

		}

		printf("���� ����\n�ϼ� �� ������\n");
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