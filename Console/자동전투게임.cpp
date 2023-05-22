#include "Dot.h"
#include "AutoGame.h"

void Pixel(int num);
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
void main()
{
	AutoGame* autoGame = new AutoGame;

	delete autoGame;
}


void Pixel(int num)
{

	switch (num)
	{
	case 0:
	{
		// 검은색
		TextColor(0, 0);
		cout << "■";
		TextColor(7, 0);
		pixelNum = 0;
	}
	break;
	case 1:
	{
		// 파랑색
		TextColor(1, 1);
		cout << "■";
		TextColor(7, 0);
		pixelNum = 1;

	}
	break;
	case 2:
	{
		// 초록색
		TextColor(2, 2);
		cout << "■";
		TextColor(7, 0);
		pixelNum = 2;
	}
	break;
	case 3:
	{
		// 하늘색
		TextColor(3, 3);
		cout << "■";
		TextColor(7, 0);
		pixelNum = 3;
	}
	break;
	case 4:
	{
		// 빨강색
		TextColor(4, 4);
		cout << "■";
		TextColor(7, 0);
		pixelNum = 4;
	}
	break;
	case 5:
	{
		// 보라색
		TextColor(5, 5);
		cout << "■";
		TextColor(7, 0);
		pixelNum = 5;
	}
	break;
	case 6:
	{
		// 노랑색
		TextColor(6, 6);
		cout << "■";
		TextColor(7, 0);
		pixelNum = 6;
	}
	break;
	case 7:
	{
		// 흰색
		TextColor(7, 7);
		cout << "■";
		TextColor(7, 0);
		pixelNum = 7;
	}
	break;
	case 8:
	{
		// 회색
		TextColor(8, 8);
		cout << "■";
		TextColor(7, 0);
		pixelNum = 8;
	}
	break;
	case 9:
	{
		// 밝은 파랑
		TextColor(9, 9);
		cout << "■";
		TextColor(0, 0);
		pixelNum = 9;

	}
	break;
	case 10:
	{
		// 밝은 초록
		/*TextColor(10, 10);
		cout << "■";
		TextColor(0, 0);*/
		// 총알
		TextColor(4, 7);
		cout << "●";
		TextColor(7, 0);
	}
	break;
	//case 11:
	//{
	//	// 밝은 하늘
	//	TextColor(11, 11);
	//	cout << "■";
	//	TextColor(0, 0);
	//}
	//break;
	//case 12:
	//{
	//	// 밝은 빨강
	//	TextColor(12, 12);
	//	cout << "■";
	//	TextColor(0, 0);
	//}
	//break;
	//case 13:
	//{
	//	// 밝은 보라색
	//	TextColor(13, 13);
	//	cout << "■";
	//	TextColor(0, 0);
	//}
	//break;
	//case 14:
	//{
	//	// 밝은 노랑색
	//	TextColor(14, 14);
	//	cout << "■";
	//	TextColor(0, 0);
	//}
	//break;
	//case 15:
	//{
	//	// 밝은 흰색
	//	TextColor(15, 15);
	//	cout << "■";
	//	TextColor(0, 0);
	//}
	//break;

	default:
		break;
	}
}