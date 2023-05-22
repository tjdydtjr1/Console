#include "Dot.h"

void TextColor(int font, int backGround)
{
	int Color = font + backGround * 16;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color);
}

void gotoxy(short x, short y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void Start()
{
	int startPixel[500] =
	{
		//GAME
		7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,
		7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,
		7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,
		7,7,7,4,4,4,4,4,7,7,4,4,4,4,4,7,7,4,7,7,7,4,7,7,4,4,4,4,4,7,7,
		7,7,7,4,7,7,7,7,7,7,4,7,7,7,4,7,7,4,4,7,4,4,7,7,4,7,7,7,7,7,7,
		7,7,7,4,7,4,4,4,7,7,4,4,4,4,4,7,7,4,7,4,7,4,7,7,4,4,4,4,4,7,7,
		7,7,7,4,7,7,7,4,7,7,4,7,7,7,4,7,7,4,7,7,7,4,7,7,4,7,7,7,7,7,7,
		7,7,7,4,4,4,4,4,7,7,4,7,7,7,4,7,7,4,7,7,7,4,7,7,4,4,4,4,4,7,7,
		7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,
		7,7,4,4,4,4,4,7,4,4,4,4,4,7,4,4,4,4,4,7,4,4,4,4,4,7,4,4,4,4,4,
		7,7,4,7,7,7,7,7,7,7,4,7,7,7,4,7,7,7,4,7,4,7,7,7,4,7,7,7,4,7,7,
		7,7,4,4,4,4,4,7,7,7,4,7,7,7,4,4,4,4,4,7,4,4,4,4,4,7,7,7,4,7,7,
		7,7,7,7,7,7,4,7,7,7,4,7,7,7,4,7,7,7,4,7,4,7,7,4,7,7,7,7,4,7,7,
		7,7,4,4,4,4,4,7,7,7,4,7,7,7,4,7,7,7,4,7,4,7,7,4,4,7,7,7,4,7,7,
		7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,
		7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,

		//START

	};

	for (int i = 0; i < 500; ++i)
	{
		Pixel(startPixel[i]);
		if (i != 0 && i % 31 == 0)
		{
			cout << '\n';
		}
	}
}

void Pixel(int num)
{

	switch (num)
	{
	case 0:
	{
		// °ËÀº»ö
		TextColor(0, 0);
		cout << "¡á";
		TextColor(7, 0);
	}
	break;
	case 1:
	{
		// ÆÄ¶û»ö
		TextColor(1, 1);
		cout << "¡á";
		TextColor(7, 0);

	}
	break;
	case 2:
	{
		// ÃÊ·Ï»ö
		TextColor(2, 2);
		cout << "¡á";
		TextColor(7, 0);
	}
	break;
	case 3:
	{
		// ÇÏ´Ã»ö
		TextColor(3, 3);
		cout << "¡á";
		TextColor(7, 0);
	}
	break;
	case 4:
	{
		// »¡°­»ö
		TextColor(4, 4);
		cout << "¡á";
		TextColor(7, 0);
	}
	break;
	case 5:
	{
		// º¸¶ó»ö
		TextColor(5, 5);
		cout << "¡á";
		TextColor(7, 0);
	}
	break;
	case 6:
	{
		// ³ë¶û»ö
		TextColor(6, 6);
		cout << "¡á";
		TextColor(7, 0);
	}
	break;
	case 7:
	{
		// Èò»ö
		TextColor(7, 7);
		cout << "¡á";
		TextColor(7, 0);
	}
	break;
	case 8:
	{
		// È¸»ö
		TextColor(8, 8);
		cout << "¡á";
		TextColor(7, 0);
	}
	break;
	case 9:
	{
		// ¹àÀº ÆÄ¶û
		TextColor(9, 9);
		cout << "¡á";
		TextColor(0, 0);

	}
	break;
	case 10:
	{
		// ¹àÀº ÃÊ·Ï
		/*TextColor(10, 10);
		cout << "¡á";
		TextColor(0, 0);*/
		// ÃÑ¾Ë
		TextColor(4, 0);
		cout << "¡Ü";
		TextColor(7, 0);
	}
	break;
	case 11:
	{
		TextColor(11, 0);
		cout << "¡ã";
		TextColor(7, 0);
	}
	break;
	case 12:
	{
		TextColor(5, 0);
		cout << "¡å";
		TextColor(7, 0);
	}
	break;
	case 13:
	{
		// ¹àÀº ÃÊ·Ï
		/*TextColor(10, 10);
		cout << "¡á";
		TextColor(0, 0);*/
		// ÃÑ¾Ë
		TextColor(5, 0);
		cout << "¡Ü";
		TextColor(7, 0);
	}
	break;
	//case 11:
	//{
	//	// ¹àÀº ÇÏ´Ã
	//	TextColor(11, 11);
	//	cout << "¡á";
	//	TextColor(0, 0);
	//}
	//break;
	//case 12:
	//{
	//	// ¹àÀº »¡°­
	//	TextColor(12, 12);
	//	cout << "¡á";
	//	TextColor(0, 0);
	//}
	//break;
	//case 13:
	//{
	//	// ¹àÀº º¸¶ó»ö
	//	TextColor(13, 13);
	//	cout << "¡á";
	//	TextColor(0, 0);
	//}
	//break;
	//case 14:
	//{
	//	// ¹àÀº ³ë¶û»ö
	//	TextColor(14, 14);
	//	cout << "¡á";
	//	TextColor(0, 0);
	//}
	//break;
	//case 15:
	//{
	//	// ¹àÀº Èò»ö
	//	TextColor(15, 15);
	//	cout << "¡á";
	//	TextColor(0, 0);
	//}
	//break;

	default:
		break;
	}
}
	
