#include <iostream>
#include <Windows.h>
#include <time.h>

using std::cout;
using std::cin;
using std::endl;

// Ű�Է�
enum KeyInput
{
	LEFT = 1,
	DOWN,
	RIGHT,
	UP = 5
};

void main()
{
	const int arrMax = 175;
	char charA[arrMax] = { 0 };
	char result[arrMax] = { 0 };
	char temp = 0;
	int input = 0;
	int count = 0;

	// �����̵� �� �ֱ�
	for (int i = 1; i < arrMax; ++i)
	{
		if (i % 5 != 0)
		{
			charA[i - 1] = ' ';
		}
		else
		{
			charA[i - 1] = '1' +(i % 2);
		}
	}
	// �ִϸ��̼� ȿ���� ���� �� ����
	for (int i = 0; i < arrMax; ++i)
	{
		if (24 < i && i < 50)
		{
			charA[i] = ' ';
		}
		else if (74 < i && i < 100)
		{
			charA[i] = ' ';
		}
		else if (124 < i && i < 150)
		{
			charA[i] = ' ';
		}
	}
	// ���� �ϴ� ������
	charA[174] = 'O';
	
	// ġƮ �� ����
	for (int i = 1; i < arrMax; ++i)
	{
		if (i % 5 != 0)
		{
			result[i - 1] = ' ';
		}
		else
		{
			result[i - 1] = '1' + (i % 2);
		}
	}
	for (int i = 1; i < arrMax; ++i)
	{
		if (i % 5 != 0)
		{
			result[i - 1] = ' ';
		}
		else
		{
			if (result[i - 1] == '1')
			{
				result[i - 1] ='2';
			}
			else if (result[i - 1] == '2')
			{
				result[i - 1] = '1';
			}
		}
	}
	for (int i = 0; i < arrMax; ++i)
	{
		if (24 < i && i < 50)
		{
			result[i] = ' ';
		}
		else if (74 < i && i < 100)
		{
			result[i] = ' ';
		}
		else if (124 < i && i < 150)
		{
			result[i] = ' ';
		}
	}

	result[169] = 'O';
	result[174] = '2';
	// ġƮ ��
	
	while (true)
	{
		count = 0;
		// ��ȭ�� �� ���
		for (int i = 1; i <= arrMax; ++i)
		{
			printf("%c", charA[i - 1] == ' ' ? ' ' : charA[i - 1]);

			if (i % 25 == 0)
			{
				cout << '\n' << '\n';
			}
		}
		
		printf("LEFT = 1, DOWN = 2, RIGHT = 3, UP = 5, ġƮ = 100\n");
		cin >> input;

		// ġƮ
		if (input == 100)
		{
			system("cls");
			printf("ġƮ �ϳ� ���� ����\n");
			for (int i = 1; i <= arrMax; ++i)
			{
				printf("%c", result[i - 1]);

				if (i % 25 == 0)
				{
					cout << '\n' << '\n';
				}
			}
			printf("RIGHT = 3 �Է�");
			cin >> input;
			if (input == 3)
			{
				system("cls");
				result[169] = '2';
				result[174] = 'O';
				cout << '\n';
				for (int i = 1; i <= arrMax; ++i)
				{
					printf("%c", result[i - 1]);

					if (i % 25 == 0)
					{
						cout << '\n' << '\n';
					}
				}
				cout << '\n';
				Sleep(1000);
				system("cls");
				break;
					
			}
			else
			{
				printf("�߸��� Ű �Է��Դϴ�.");
				Sleep(1000);
				system("cls");
			}
		}
		// ����Ű �Է� �̵�
		else
		{
			switch (input)
			{
			case UP:
			{
				for (int i = 0; i < arrMax; ++i)
				{
					// 24 49 74 99 124 149 174
					if (charA[i] == 'O')
					{
						if (i > 24)
						{
							system("cls");
							temp = charA[i - 50];
							charA[i - 25] = charA[i];
							charA[i] = ' ';
							// ��ȭ�� �� ���
							for (int i = 1; i <= arrMax; ++i)
							{
								printf("%c", charA[i - 1] == ' ' ? ' ' : charA[i - 1]);

								if (i % 25 == 0)
								{
									cout << '\n' << '\n';
								}
							}
							Sleep(150);
							system("cls");
							charA[i - 50] = charA[i - 25];
							charA[i - 25] = charA[i];
							charA[i] = temp;
							for (int i = 1; i <= arrMax; ++i)
							{
								printf("%c", charA[i - 1] == ' ' ? ' ' : charA[i - 1]);

								if (i % 25 == 0)
								{
									cout << '\n' << '\n';
								}
							}
							Sleep(150);
							system("cls");
							break;
						}
						else
						{
							printf("�� �̻� �� �� �����ϴ�.\n");
							Sleep(150);
							system("cls");
							break;
						}
					}
				}
			}
			break;
			case DOWN:
			{
				for (int i = 0; i < arrMax; ++i)
				{
					// 24 49 74 99 124 149 174
					if (charA[i] == 'O')
					{
						if (i < 150)
						{
							system("cls");
							temp = charA[i + 50];
							charA[i + 25] = charA[i];
							charA[i] = ' ';
							// ��ȭ�� �� ���
							for (int i = 1; i <= arrMax; ++i)
							{
								printf("%c", charA[i - 1] == ' ' ? ' ' : charA[i - 1]);

								if (i % 25 == 0)
								{
									cout << '\n' << '\n';
								}
							}
							Sleep(150);
							system("cls");
							charA[i + 50] = charA[i + 25];
							charA[i + 25] = charA[i];
							charA[i] = temp;
							for (int i = 1; i <= arrMax; ++i)
							{
								printf("%c", charA[i - 1] == ' ' ? ' ' : charA[i - 1]);

								if (i % 25 == 0)
								{
									cout << '\n' << '\n';
								}
							}
							Sleep(150);
							system("cls");
							break;
						}
						else
						{
							printf("�� �̻� �� �� �����ϴ�.\n");
							Sleep(150);
							system("cls");
							break;
						}
					}
				}
			}
			break;
			case LEFT:
			{
				for (int i = 0; i < arrMax; ++i)
				{
					// 24 49 74 99 124 149 174
					if (charA[i] == 'O')
					{
						temp = charA[i - 5];
						if (i % 5 > 0)
						{
							for (int j = 0; j < 5; ++j)
							{
								system("cls");

								charA[i - j - 1] = charA[i - j];
								charA[i - j] = ' ';
								// ��ȭ�� �� ���
								for (int i = 1; i <= arrMax; ++i)
								{
									printf("%c", charA[i - 1] == ' ' ? ' ' : charA[i - 1]);

									if (i % 25 == 0)
									{
										cout << '\n' << '\n';
									}
								}
								Sleep(150);
								system("cls");
							}
							charA[i] = temp;
							break;
						}
						else
						{
							printf("�� �̻� �� �� �����ϴ�.\n");
							Sleep(150);
							system("cls");
							break;
						}
					}
				}
			}
			break;
			case RIGHT:
			{
				for (int i = 0; i < arrMax; ++i)
				{
					// 24 49 74 99 124 149 174
					if (charA[i] == 'O')
					{
						temp = charA[i + 5];
						if (i % 5 != 0)
						{
							for (int j = 0; j < 5; ++j)
							{
								system("cls");

								charA[i + j + 1] = charA[i + j];
								charA[i + j] = ' ';
								// ��ȭ�� �� ���
								for (int i = 1; i <= arrMax; ++i)
								{
									printf("%c", charA[i - 1] == ' ' ? ' ' : charA[i - 1]);

									if (i % 25 == 0)
									{
										cout << '\n' << '\n';
									}
								}
								Sleep(150);
								system("cls");
							}
							charA[i] = temp;
							break;
						}
						else
						{
							printf("�� �̻� �� �� �����ϴ�.\n");
							Sleep(150);
							system("cls");
							break;
						}
					}
				}
			}
			break;
			default:
			{
				printf("�߸��� �Է� Ű �Դϴ�.\n");
				Sleep(500);
				system("cls");
			}
				break;
			}
			
			for (int i = 0; i < arrMax; ++i)
			{
				if (result[i] = charA[i])
				{
					++count;
					if (count == 175)
					{
						break;
					}
				}
			}
		
		}
	}
	system("cls");
	printf("���� ����\n");
}


/*
��������

*/