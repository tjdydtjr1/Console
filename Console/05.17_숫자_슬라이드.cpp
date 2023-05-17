#include "slide.h"

namespace Slide
{
	// 키입력
	enum KeyInput
	{
		LEFT = 1,
		DOWN,
		RIGHT,
		UP = 5
	};

	// 변수들 모음
	const int arrMax = 20;
	int slide[arrMax] = { 0 };
	int tempArr[arrMax] = { 0 };
	KeyInput Key = UP;
	int randNum = 0;
	int temp = 0;
	int input = 0;

	
	// 슬라이드 초기화
	void Init()
	{
		// 초기값 랜덤 숫자
		for (int i = 0; i < (arrMax - 1); ++i)
		{
			// 1 ~ 19사이의 값 랜덤
			temp = rand() % 19 + 1;

			// 넣은 자리 또 넣게 되면 다시 랜덤
			if (tempArr[temp] == 1)
			{
				--i;
				continue;
			}
			// 넣은 자리 1로 셋팅
			tempArr[temp] = 1;

			// 랜덤값 배열에 셋팅
			slide[i] = temp;
		}
		// 우측 하단은 플레이어 = 20 고정
		slide[19] = 20;

		// 슬라이드 종료를 위한 초기화
		for (int i = 0; i < arrMax; ++i)
		{
			tempArr[i] = i + 1;
		}
	}

	void NumSlide()
	{
		// 초기화
		Init();

		while (true)
		{
			// 숫자 슬라이드 시작
			printf("================================================");
			printf("숫자 슬라이드 시작\n\n");
			for (int i = 1; i <= arrMax; ++i)
			{
				if (slide[i - 1] != 20)
				{
					printf("%d\t", slide[i - 1]);
				}
				else if (slide[i - 1] == 20)
				{
					printf("%s\t", "★");
				}

				if (i % 5 == 0)
				{
					cout << '\n' << '\n';
				}
			}
			cout << '\n' << '\n';
			printf("================================================\n");

			printf("LEFT = 1, DOWN = 2, RIGHT = 3, UP = 5, 치트 = 100\n");
			cin >> input;
			if (input == 100)
			{
				printf("치트 하나 빼고 정렬\n");
				for (int i = 0; i < arrMax - 2; ++i)
				{
					slide[i] = i + 1;
				}
				slide[18] = 20;
				slide[19] = 19;
			}
			else
			{
				switch (input)
				{
				case UP:
				{
					for (int i = 0; i < arrMax; ++i)
					{
						if (slide[i] == 20)
						{
							if (i > 4)
							{
								temp = slide[i - 5];
								slide[i - 5] = slide[i];
								slide[i] = temp;
								break;
							}
							else
							{
								printf("더 이상 갈 수 없습니다.\n");
								Sleep(1000);
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
						if (slide[i] == 20)
						{
							if (i < 15)
							{
								temp = slide[i + 5];
								slide[i + 5] = slide[i];
								slide[i] = temp;
								break;
							}
							else
							{
								printf("더 이상 갈 수 없습니다.\n");
								Sleep(1000);
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
						if (slide[i] == 20)
						{
							if (i != 0 && i != 5 && i != 10 && i != 15)
							{
								temp = slide[i - 1];
								slide[i - 1] = slide[i];
								slide[i] = temp;
								break;
							}
							else
							{
								printf("더 이상 갈 수 없습니다.\n");
								Sleep(1000);
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
						if (slide[i] == 20)
						{
							if (i != 4 && i != 9 && i != 14 && i != 19)
							{
								temp = slide[i + 1];
								slide[i + 1] = slide[i];
								slide[i] = temp;
								break;
							}
							else
							{
								printf("더 이상 갈 수 없습니다.\n");
								Sleep(1000);
								break;
							}
						}
					}
				}
				break;
				default:
					printf("입력이 잘못되었습니다.");
					Sleep(1000);
					break;
				}
			}
			temp = 0;

			for (int i = 0; i < arrMax; ++i)
			{
				if (tempArr[i] == slide[i])
				{
					++temp;
				}
			}
			if (temp == 20)
			{
				break;
			}
			temp = 0;
			system("cls");
		}
		system("cls");
		printf("게임 종료\n");

	}

}
/*
과제1. 숫자 슬라이드

- 사이즈 : 5 x 4
- 시작위치는 우측 하단 (고정)

- 치트 필수
ㄴ 치트키를 누르면 하나의 숫자를 제외하고 나머지 숫자는 정렬된다.
ㄴ 사용자가 마지막 조각을 맞추면서 프로그램이 끝나면 OK

- 일반적으로 게임 룰에 기반한 예외처리 해온다.
*/
/*
과제2. 애니메이션 숫자 슬라이드

- 포인터를 활용해서 해온다.
- 룰은 동일

한줄 조사. 클래스
- 노트에 적어온다.
- 이론에 기반해 짧고 명료하게 프로그래머스럽게 정리해 온다.
*/