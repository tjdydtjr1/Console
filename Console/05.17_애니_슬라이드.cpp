#include <iostream>
#include <Windows.h>
#include <time.h>

using std::cout;
using std::cin;
using std::endl;

// 키입력
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

	// 슬라이드 값 넣기
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
	// 애니메이션 효과를 위한 빈 공간
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
	// 우측 하단 시작점
	charA[174] = 'O';
	
	// 치트 판 생성
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
	// 치트 판
	
	while (true)
	{
		count = 0;
		// 변화된 값 출력
		for (int i = 1; i <= arrMax; ++i)
		{
			printf("%c", charA[i - 1] == ' ' ? ' ' : charA[i - 1]);

			if (i % 25 == 0)
			{
				cout << '\n' << '\n';
			}
		}
		
		printf("LEFT = 1, DOWN = 2, RIGHT = 3, UP = 5, 치트 = 100\n");
		cin >> input;

		// 치트
		if (input == 100)
		{
			system("cls");
			printf("치트 하나 빼고 정렬\n");
			for (int i = 1; i <= arrMax; ++i)
			{
				printf("%c", result[i - 1]);

				if (i % 25 == 0)
				{
					cout << '\n' << '\n';
				}
			}
			printf("RIGHT = 3 입력");
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
				printf("잘못된 키 입력입니다.");
				Sleep(1000);
				system("cls");
			}
		}
		// 방향키 입력 이동
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
							// 변화된 값 출력
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
							printf("더 이상 갈 수 없습니다.\n");
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
							// 변화된 값 출력
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
							printf("더 이상 갈 수 없습니다.\n");
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
								// 변화된 값 출력
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
							printf("더 이상 갈 수 없습니다.\n");
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
								// 변화된 값 출력
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
							printf("더 이상 갈 수 없습니다.\n");
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
				printf("잘못된 입력 키 입니다.\n");
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
	printf("게임 종료\n");
}


/*
도전과제

*/