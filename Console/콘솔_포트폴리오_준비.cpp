/*
과제1. 자신이 만들 포트폴리오 구상
- 어떤 방향성을 가지고 게임을 만들것인가?

- 장르 선정 3가지 / 에러 사항 3가지 씩
1. 슈팅 게임	(1945)					

2. 액션 어드벤쳐 게임(슈퍼마리오)

3. 어드벤쳐(빙판 탈출, 폭탄피하기)		

- 장르 1
ㄴ 1. 움직임에 대한 도트 출력 부자연스러움 (깜빡임)
ㄴ 2. 적의 움직임에 대한 방법
ㄴ 3. 미사일이 나갈 때 궤적 표현

- 장르 2
ㄴ 1. 움직임에 대한 도트 출력 부자연스러움 (깜빡임)
ㄴ 2. 이동하며 점프하는 과정 표현
ㄴ 3. 맵 이동시 자연스러운 화면 이동

- 장르 3
ㄴ 1. 움직임에 대한 부자연스러움 (깜빡임)
ㄴ 2. 단조로운 진행이 될 수 있다.
ㄴ 3. 그럴듯한 이펙트 효과 표현

- 특이 사항 : 없음.

- 필요하다면 도트 작업한다.

*/

#include <iostream>
#include <time.h>
#include <Windows.h>
#include <conio.h>

using std::cout;
using std::cin;
using std::endl;

void TextColor(int font, int backGround);
void Pixel(int num);

enum KeyInput
{
	LEFT = 1,
	DOWN,
	RIGHT,
	UP = 5
};


void main()
{
	system("mode con:cols=200 lines=200");
	char at[10] = "12345678";
	int key = 0;
	int idx = 1;
	while (true)
	{
		system("cls");

		printf("LEFT = 1, DOWN = 2, RIGHT = 3, UP = 5\n");
		key = _getch();
		switch (key - 48)
		{
		case LEFT:
		{
			at[idx] = 'A';
			printf("%s\n", at);
			Sleep(100);
			++idx;
		}
		break;
		case DOWN:
		{

		}
		case RIGHT:
		{

		}
		case UP:
		{

		}
		break;
		default:
			break;
		}
		
	}
}

void Pixel(int num)
{

	switch (num)
	{
	case 1:
	{
		// 파랑색
		TextColor(1, 1);
		
		TextColor(0, 0);
	}
	break;
	case 2:
	{
		// 초록색
		TextColor(2, 2);
		TextColor(0, 0);


	}
	break;
	case 3:
	{
		// 하늘색
		TextColor(3, 3);
		TextColor(0, 0);


	}
	break;
	case 4:
	{
		// 빨강색
		TextColor(4, 4);
		TextColor(0, 0);


	}
	break;
	case 5:
	{
		// 보라색
		TextColor(5, 5);
		TextColor(0, 0);


	}
	break;
	case 6:
	{
		// 노랑색
		TextColor(6, 6);
		TextColor(0, 0);


	}
	break;
	case 7:
	{
		// 흰색
		TextColor(7, 7);
		TextColor(0, 0);


	}
	break;
	case 8:
	{
		// 회색
		TextColor(8, 8);
		TextColor(0, 0);


	}
	break;
	case 9:
	{
		// 밝은 파랑
		TextColor(9, 9);
		TextColor(0, 0);


	}
	break;
	case 10:
	{
		// 밝은 초록
		TextColor(10, 10);
		TextColor(0, 0);


	}
	break;
	case 11:
	{
		// 밝은 하늘
		TextColor(11, 11);
		TextColor(0, 0);


	}
	break;
	case 12:
	{
		// 밝은 빨강
		TextColor(12, 12);
		TextColor(0, 0);


	}
	break;
	case 13:
	{
		// 밝은 보라색
		TextColor(13, 13);
		TextColor(0, 0);


	}
	break;
	case 14:
	{
		// 밝은 노랑색
		TextColor(14, 14);
		TextColor(0, 0);


	}
	break;
	case 15:
	{
		// 밝은 흰색
		TextColor(15, 15);
		TextColor(0, 0);


	}
	break;

	default:
		break;
	}
}

void TextColor(int font, int backGround)
{
	int Color = font + backGround * 16;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color);
}