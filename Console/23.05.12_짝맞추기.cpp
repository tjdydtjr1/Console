//과제3.짝 맞추기
//
//- 사이즈 : 5 x 4
//
//- ☆ ★ ◇ ◆ ♤ ♠ ♡ ♥ ♧ ♣
//
//- 짝이 맞춰진 번호는 계속 오픈된 상태로 있어야 한다.
//
//- 2가지 버전으로 치트 만들기
//ㄴ 1. 치트키를 누르면 패를 전부 오픈 시켜 플레이어에게 보여주고 5초뒤에 다시 원상 복귀 시킨다.
//ㄴ 2. 치트키를 누르면 한쌍의 카드를 제외하고 전부 오픈된다.
//사용자가 마지막 한쌍을 맞추면서 게임이 종료되면 ok

#include <iostream>
#include <Windows.h>

using std::cout;
using std::cin;
using std::endl;

char Char(int num);

void main()
{
	//- ☆0 ★1 ◇2 ◆3 ♤4 ♠5 ♡6 ♥7 ♧8 ♣9

	int firstLine[5] = { 0 };
	int secondLine[5] = { 0 };
	int thirdLine[5] = { 0 };
	int foursLine[5] = { 0 };

	char a[3] = "☆";
	printf("%s", a);
	//while (true)
	//{
	///*	for (int i = 0; i < 5; ++i)
	//	{
	//		firstLine[i] = 
	//		secondLine[i] =
	//		thirdLine[i] = 
	//		foursLine[i] = 
	//	}*/

	//	printf("%s %c %c %c %c\n",Char(firstLine[0]), Char(firstLine[1]), Char(firstLine[2]), Char(firstLine[3]), Char(firstLine[4]));
	//	printf("%c %c %c %c %c\n",Char(secondLine[0]), Char(secondLine[1]), Char(secondLine[2]), Char(secondLine[3]), Char(secondLine[4]));
	//	printf("%c %c %c %c %c\n", Char(thirdLine[0]), Char(thirdLine[1]), Char(thirdLine[2]), Char(thirdLine[3]), Char(thirdLine[4]));
	//	printf("%c %c %c %c %c\n", Char(foursLine[0]), Char(foursLine[1]), Char(foursLine[2]), Char(foursLine[3]), Char(foursLine[4]));

	//
	//	Sleep(5000);
	//}



}

char Char(int num)
{
	switch (num)
	{
	case 0:
	{
		return '☆';
	}
	break;
	case 1:
	{
		return '★';
	}
	break;
	case 2:
	{
		return '◇';
	}
	break;
	case 3:
	{
		return '◆';
	}
	break;
	case 4:
	{
		return '♤';
	}
	break;
	case 5:
	{
		return '♠';
	}
	break;
	case 6:
	{
		return '♡';
	}
	break;
	case 7:
	{
		return '♥';
	}
	break;
	case 8:
	{
		return '♧';
	}
	break;
	case 9:
	{
		return '♣';
	}
	break;
	default:
		break;
	}
	return 0;
}
