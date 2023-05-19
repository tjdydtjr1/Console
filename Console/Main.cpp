#include "UseClass.h"
#include "Family.h"
#include "HandGame.h"
#include <conio.h>
void Pixel(int num);

void main()
{
	// 과제1
	/*UseClass* useClass = new UseClass;
	
	delete useClass;*/
	// 과제2
	/*Family* family = new Family;

	family->setFamilyOne();
	family->setFamilytwo();
	family->printFamily();*/

	int pixel = 0;
	int count = 0;
	while (pixel < 1000)
	{
		pixel = _getch();
		Pixel(pixel);
		if (count % 20 == 0)
		{
			cout << '\n';
		}
		++count;
	}
	
}

/*
과제1. 클래스 사용법 익히기

- 서로 다른 클래스 5개를 생성하고 각각 다른 문구를 출력한다.

EX)
(클래스 이름) 클래스 1번
(클래스 이름) 클래스 2번
(클래스 이름) 클래스 3번
.
.
.
(클래스 이름) 클래스 N번
=> 최대한 효율을 생각하면서 해본다.

과제2. 우리 가족은 말이죠...
- 클래스를 활용해 우리 가족을 소개하는 내용을 출력한다.

객체지향적으로 구성한다.


과제3. 대전 게임 만들기
- 스타트 씬과 게임 씬으로 구성된 대전 게임

- 도트와 색상, 체력바를 필수로 포함한다.

- 플레이어만 공격을 하면 안되며 적 역시 공격을 해야 한다.
ㄴ + 게임 오버 조건 또한 반드시 있어야 한다.


과제4. 가위바위보

- 클래스를 활용해 객체지향으로 나눠온다.

- 최소 클래스는 3개


*/

void Pixel(int num)
{

	switch (num -48)
	{
	case 1:
	{
		// 파랑색
		TextColor(1, 1);
		cout << "■";
		TextColor(0, 0);
	}
	break;
	case 2:
	{
		// 초록색
		TextColor(2, 2);
		cout << "■";
		TextColor(0, 0);


	}
	break;
	case 3:
	{
		// 하늘색
		TextColor(3, 3);
		cout << "■";
		TextColor(0, 0);


	}
	break;
	case 4:
	{
		// 빨강색
		TextColor(4, 4);
		cout << "■";
		TextColor(0, 0);


	}
	break;
	case 5:
	{
		// 보라색
		TextColor(5, 5);
		cout << "■";
		TextColor(0, 0);


	}
	break;
	case 6:
	{
		// 노랑색
		TextColor(6, 6);
		cout << "■";
		TextColor(0, 0);


	}
	break;
	case 7:
	{
		// 흰색
		TextColor(7, 7);
		cout << "■";
		TextColor(0, 0);


	}
	break;
	case 8:
	{
		// 회색
		TextColor(8, 8);
		cout << "■";
		TextColor(0, 0);


	}
	break;
	case 9:
	{
		// 밝은 파랑
		TextColor(9, 9);
		cout << "■";
		TextColor(0, 0);


	}
	break;
	case 10:
	{
		// 밝은 초록
		TextColor(10, 10);
		cout << "■";
		TextColor(0, 0);


	}
	break;
	case 11:
	{
		// 밝은 하늘
		TextColor(11, 11);
		cout << "■";
		TextColor(0, 0);


	}
	break;
	case 12:
	{
		// 밝은 빨강
		TextColor(12, 12);
		cout << "■";
		TextColor(0, 0);


	}
	break;
	case 13:
	{
		// 밝은 보라색
		TextColor(13, 13);
		cout << "■";
		TextColor(0, 0);


	}
	break;
	case 14:
	{
		// 밝은 노랑색
		TextColor(14, 14);
		cout << "■";
		TextColor(0, 0);


	}
	break;
	case 15:
	{
		// 밝은 흰색
		TextColor(15, 15);
		cout << "■";
		TextColor(0, 0);


	}
	break;

	default:
		break;
	}
}