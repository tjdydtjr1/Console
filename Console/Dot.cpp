#include "Dot.h"

//°ËÁ¤0 ÆÄ¶û1 ÃÊ·Ï2 ÇÏ´Ã3 »¡°­4 º¸¶ó5
//³ë¶û6 Èò»ö7 È¸»ö8 ÆÄ¶û9

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
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,4,4,4,4,4,0,0,4,4,4,4,4,0,0,4,0,0,0,4,0,0,4,4,4,4,4,0,0,
		0,0,0,4,0,0,0,0,0,0,4,0,0,0,4,0,0,4,4,0,4,4,0,0,4,0,0,0,0,0,0,
		0,0,0,4,0,4,4,4,0,0,4,4,4,4,4,0,0,4,0,4,0,4,0,0,4,4,4,4,4,0,0,
		0,0,0,4,0,0,0,4,0,0,4,0,0,0,4,0,0,4,0,0,0,4,0,0,4,0,0,0,0,0,0,
		0,0,0,4,4,4,4,4,0,0,4,0,0,0,4,0,0,4,0,0,0,4,0,0,4,4,4,4,4,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,4,4,4,4,4,0,4,4,4,4,4,0,4,4,4,4,4,0,4,4,4,4,4,0,4,4,4,4,4,
		0,0,4,0,0,0,0,0,0,0,4,0,0,0,4,0,0,0,4,0,4,0,0,0,4,0,0,0,4,0,0,
		0,0,4,4,4,4,4,0,0,0,4,0,0,0,4,4,4,4,4,0,4,4,4,4,4,0,0,0,4,0,0,
		0,0,0,0,0,0,4,0,0,0,4,0,0,0,4,0,0,0,4,0,4,0,0,4,0,0,0,0,4,0,0,
		0,0,4,4,4,4,4,0,0,0,4,0,0,0,4,0,0,0,4,0,4,0,0,4,4,0,0,0,4,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
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

void PrintAcce()
{
	// ¾Ç¼¼»ç¸® 1Á¾
	//¡Û¡Û¡Û¡Û¡Û¡Û ¡Ü¡Ü¡Ü¡Ü¡Ü¡Ü
	TextColor(0, 0);
	cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û"; TextColor(8, 0); cout << "**"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û"; TextColor(8, 0); cout << "**"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û" << endl;
	cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û"; TextColor(8, 0); cout << "**"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û"; TextColor(8, 0); cout << "&"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û"; TextColor(8, 0); cout << "**"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û"; TextColor(8, 0); cout << "&"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û" << endl;
	cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û"; TextColor(8, 0); cout << "**"; TextColor(0, 0); cout << "¡Û"; TextColor(8, 0); cout << "&&&&&&"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û"; TextColor(8, 0); cout << "**"; TextColor(0, 0); cout << "¡Û¡Û"; TextColor(8, 0); cout << "*"; TextColor(8, 0); cout << "&&&&&&"; TextColor(0, 0); cout << "¡Û¡Û" << endl;
	cout << "¡Û¡Û¡Û¡Û¡Û¡Û"; TextColor(8, 0); cout << "**"; TextColor(0, 0); cout << "¡Û"; TextColor(8, 0); cout << "*"; TextColor(8, 0); cout << "&&"; TextColor(0, 0); cout << "¡Û¡Û"; TextColor(8, 0); cout << "&"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û"; TextColor(8, 0); cout << "**"; TextColor(0, 0); cout << "¡Û"; TextColor(8, 0); cout << "**"; TextColor(8, 0); cout << "&&"; TextColor(0, 0); cout << "¡Û¡Û"; TextColor(8, 0); cout << "&"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û" << endl;
	cout << "¡Û¡Û¡Û¡Û¡Û¡Û"; TextColor(8, 0); cout << "****"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û"; TextColor(8, 0); cout << "*****"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û" << endl;
	cout << "¡Û¡Û¡Û¡Û¡Û"; TextColor(3, 0); cout << "¡Ü¡Ü"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û"; TextColor(8, 0); cout << "**"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û" << endl;
	cout << "¡Û¡Û¡Û¡Û"; TextColor(3, 0); cout << "¡Ü¡Ü¡Ü¡Ü"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û"; TextColor(3, 0); cout << "¡Ü¡Ü"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û" << endl;
	cout << "¡Û¡Û¡Û"; TextColor(3, 0); cout << "¡Ü¡Ü¡Ü¡Ü¡Ü¡Ü"; TextColor(8, 0); cout << "**"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û"; TextColor(3, 0); cout << "¡Ü¡Ü¡Ü¡Ü"; TextColor(8, 0); cout << "**"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û" << endl;
	cout << "¡Û¡Û¡Û¡Û"; TextColor(3, 0); cout << "¡Ü¡Ü¡Ü¡Ü"; TextColor(0, 0); cout << "¡Û"; TextColor(3, 0); cout << "¡Ü¡Ü"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û"; TextColor(3, 0); cout << "¡Ü¡Ü¡Ü¡Ü¡Ü¡Ü"; TextColor(8, 0); cout << "**"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û" << endl;
	cout << "¡Û¡Û¡Û¡Û"; TextColor(8, 0); cout << "*"; TextColor(3, 0); cout << "¡Ü¡Ü"; TextColor(0, 0); cout << "¡Û"; TextColor(3, 0); cout << "¡Ü¡Ü¡Ü¡Ü"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û"; TextColor(3, 0); cout << "¡Ü¡Ü¡Ü¡Ü"; TextColor(0, 0); cout << "¡Û¡Û"; TextColor(3, 0); cout << "¡Ü¡Ü"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û" << endl;
	cout << "¡Û¡Û¡Û¡Û"; TextColor(8, 0); cout << "**"; TextColor(0, 0); cout << "¡Û"; TextColor(3, 0); cout << "¡Ü¡Ü¡Ü¡Ü¡Ü¡Ü"; TextColor(0, 0); cout << "¡Û¡Û¡Û"; TextColor(8, 0); cout << "**"; TextColor(3, 0); cout << "¡Ü¡Ü"; TextColor(0, 0); cout << "¡Û¡Û"; TextColor(3, 0); cout << "¡Ü¡Ü¡Ü¡Ü"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û" << endl;
	cout << "¡Û¡Û¡Û¡Û"; TextColor(8, 0); cout << "**"; TextColor(0, 0); cout << "¡Û¡Û"; TextColor(3, 0); cout << "¡Ü¡Ü¡Ü¡Ü"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û"; TextColor(8, 0); cout << "**"; TextColor(0, 0); cout << "¡Û¡Û¡Û"; TextColor(3, 0); cout << "¡Ü¡Ü¡Ü¡Ü¡Ü¡Ü"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û" << endl;
	cout << "¡Û¡Û¡Û¡Û"; TextColor(8, 0); cout << "**"; TextColor(0, 0); cout << "¡Û¡Û¡Û"; TextColor(3, 0); cout << "¡Ü¡Ü"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û"; TextColor(3, 0); cout << "¡Ü¡Ü"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û"; TextColor(3, 0); cout << "¡Ü¡Ü¡Ü¡Ü"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û" << endl;
	cout << "¡Û¡Û¡Û¡Û¡Û"; TextColor(3, 0); cout << "¡Ü¡Ü"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û"; TextColor(3, 0); cout << "¡Ü¡Ü¡Ü¡Ü"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û"; TextColor(3, 0); cout << "¡Ü¡Ü"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û" << endl;
	cout << "¡Û¡Û¡Û¡Û"; TextColor(3, 0); cout << "¡Ü¡Ü¡Ü¡Ü"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û"; TextColor(3, 0); cout << "¡Ü¡Ü¡Ü¡Ü¡Ü¡Ü"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û" << endl;
	cout << "¡Û¡Û¡Û"; TextColor(3, 0); cout << "¡Ü¡Ü¡Ü¡Ü¡Ü¡Ü"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û"; TextColor(3, 0); cout << "¡Ü¡Ü¡Ü¡Ü"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û" << endl;
	cout << "¡Û¡Û¡Û¡Û"; TextColor(3, 0); cout << "¡Ü¡Ü"; TextColor(15, 0); cout << "¡Ü"; TextColor(3, 0); cout << "¡Ü"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û"; TextColor(3, 0); cout << "¡Ü¡Ü"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û" << endl;
	cout << "¡Û¡Û¡Û¡Û¡Û"; TextColor(3, 0); cout << "¡Ü¡Ü"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û" << endl;
	cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û" << endl;
	cout << endl;
}

void PrintArmor()
{
	// ¹æ¾î±¸ 1Á¾ ¡Ü ¡Û

TextColor(0, 0);
cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û" << endl;
cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û"; TextColor(7, 0); cout << "¡Ü"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û"; TextColor(7, 0); cout << "¡Ü"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û" << endl;
cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û"; TextColor(7, 0); cout << "¡Ü¡Ü"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û"; TextColor(7, 0); cout << "¡Ü¡Ü"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û" << endl;
cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û"; TextColor(7, 0); cout << "¡Ü¡Ü¡Ü¡Ü¡Ü¡Ü¡Ü¡Ü¡Ü¡Ü¡Ü¡Ü¡Ü¡Ü¡Ü¡Ü¡Ü¡Ü¡Ü¡Ü¡Ü"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û" << endl;
cout << "¡Û¡Û¡Û"; TextColor(7, 0); cout << "¡Ü¡Ü"; TextColor(0, 0); cout << "¡Û¡Û"; TextColor(7, 0); cout << "¡Ü¡Ü¡Ü"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û"; TextColor(7, 0); cout << "¡Ü¡Ü¡Ü"; TextColor(0, 0); cout << "¡Û¡Û"; TextColor(7, 0); cout << "¡Ü¡Ü"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û" << endl;
cout << "¡Û¡Û¡Û¡Û"; TextColor(7, 0); cout << "¡Ü¡Ü¡Ü"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û"; TextColor(4, 0); cout << "¡á¡á¡á¡á¡á¡á¡á¡á¡á"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û"; TextColor(7, 0); cout << "¡Ü¡Ü¡Ü"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û" << endl;
cout << "¡Û¡Û¡Û"; TextColor(7, 0); cout << "¡Ü¡Ü"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û"; TextColor(4, 0); cout << "¡á¡á"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û"; TextColor(4, 0); cout << "¡á¡á"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û"; TextColor(7, 0); cout << "¡Ü¡Ü"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û" << endl;
cout << "¡Û¡Û"; TextColor(7, 0); cout << "¡Ü¡Ü"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û"; TextColor(7, 0); cout << "¡Ü¡Ü"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û" << endl;
cout << "¡Û"; TextColor(7, 0); cout << "¡Ü¡Ü"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û"; TextColor(4, 0); cout << "¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û"; TextColor(7, 0); cout << "¡Ü¡Ü"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û" << endl;
cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û"; TextColor(4, 0); cout << "¡á¡á¡á"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û"; TextColor(4, 0); cout << "¡á¡á¡á"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û" << endl;
cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û"; TextColor(13, 0); cout << "l"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û"; TextColor(13, 0); cout << "l"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û" << endl;
cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û"; TextColor(13, 0); cout << "l"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û"; TextColor(13, 0); cout << "l"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û" << endl;
cout << "¡Û¡Û¡Û¡Û¡Û"; TextColor(7, 0); cout << "¡Ü¡Ü"; TextColor(0, 0); cout << "¡Û"; TextColor(13, 0); cout << "l"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û"; TextColor(13, 0); cout << "l"; TextColor(0, 0); cout << "¡Û"; TextColor(7, 0); cout << "¡Ü¡Ü"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û" << endl;
cout << "¡Û¡Û¡Û¡Û¡Û¡Û"; TextColor(7, 0); cout << "¡Ü¡Ü"; TextColor(0, 0); cout << "¡Û"; TextColor(13, 0); cout << "l"; TextColor(9, 0); cout << "^^^^^^^^^^^^^^^^^"; TextColor(13, 0); cout << "l"; TextColor(0, 0); cout << "¡Û"; TextColor(7, 0); cout << "¡Ü¡Ü"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û" << endl;
cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û"; TextColor(7, 0); cout << "¡Ü¡Ü"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û"; TextColor(7, 0); cout << "¡Ü¡Ü"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û" << endl;
cout << "¡Û¡Û¡Û¡Û"; TextColor(7, 0); cout << "¡Ü¡Ü"; TextColor(0, 0); cout << "¡Û¡Û¡Û"; TextColor(7, 0); cout << "¡Ü¡Ü¡Ü¡Ü¡Ü¡Ü¡Ü¡Ü¡Ü¡Ü¡Ü¡Ü¡Ü¡Ü¡Ü¡Ü¡Ü¡Ü¡Ü"; TextColor(0, 0); cout << "¡Û¡Û¡Û"; TextColor(7, 0); cout << "¡Ü¡Ü"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û" << endl;
cout << "¡Û¡Û¡Û¡Û¡Û"; TextColor(7, 0); cout << "¡Ü¡Ü"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û"; TextColor(7, 0); cout << "¡Ü¡Ü"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û" << endl;
cout << "¡Û¡Û¡Û¡Û¡Û¡Û"; TextColor(7, 0); cout << "¡Ü¡Ü"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û"; TextColor(4, 0); cout << "¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û"; TextColor(7, 0); cout << "¡Ü¡Ü"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û" << endl;
cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û"; TextColor(4, 0); cout << "¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û" << endl;
cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û"; TextColor(7, 0); cout << "¡Ü¡Ü"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û"; TextColor(7, 0); cout << "¡Ü¡Ü"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û" << endl;
cout << "¡Û¡Û¡Û¡Û¡Û¡Û"; TextColor(7, 0); cout << "¡Ü¡Ü"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û"; TextColor(7, 0); cout << "¡Ü¡Ü"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û" << endl;
cout << "¡Û¡Û¡Û¡Û¡Û"; TextColor(7, 0); cout << "¡Ü¡Ü"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û"; TextColor(7, 0); cout << "¡Ü¡Ü"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û" << endl;
cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û" << endl;
cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û" << endl;
cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û" << endl;
cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û" << endl;
cout << endl;
}

void PrintWeapon()
{
	// ¹«±â 1Á¾¡ã¡á
	/*TextColor(0, 0);
	cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û" << endl;
	cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û"; TextColor(15, 0); cout << "¡Ü"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û" << endl;
	cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û"; TextColor(15, 0); cout << "¡Ü"; TextColor(4, 0); cout << "¡ã"; TextColor(15, 0); cout << "¡Ü"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û" << endl;
	cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û"; TextColor(15, 0); cout << "¡Ü"; TextColor(4, 0); cout << "¡ã¡ã¡ã"; TextColor(15, 0); cout << "¡Ü"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û" << endl;
	cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û"; TextColor(15, 0); cout << "¡Ü"; TextColor(4, 0); cout << "¡ã¡ã¡ã"; TextColor(15, 0); cout << "¡Ü"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û" << endl;
	cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û"; TextColor(15, 0); cout << "¡Ü"; TextColor(4, 0); cout << "¡ã¡ã¡ã"; TextColor(15, 0); cout << "¡Ü"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û" << endl;
	cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û"; TextColor(15, 0); cout << "¡Ü"; TextColor(4, 0); cout << "¡ã¡ã¡ã"; TextColor(15, 0); cout << "¡Ü"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û" << endl;
	cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û"; TextColor(15, 0); cout << "¡Ü"; TextColor(4, 0); cout << "¡ã¡ã¡ã"; TextColor(15, 0); cout << "¡Ü"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û" << endl;
	cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û"; TextColor(15, 0); cout << "¡Ü"; TextColor(4, 0); cout << "¡ã¡ã¡ã"; TextColor(15, 0); cout << "¡Ü"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û" << endl;
	cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û"; TextColor(15, 0); cout << "¡Ü"; TextColor(4, 0); cout << "¡ã¡ã¡ã"; TextColor(15, 0); cout << "¡Ü"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û" << endl;
	cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û"; TextColor(15, 0); cout << "¡Ü"; TextColor(4, 0); cout << "¡ã¡ã¡ã"; TextColor(15, 0); cout << "¡Ü"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û" << endl;
	cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û"; TextColor(6, 0); cout << "¡á¡á"; TextColor(0, 0); cout << "¡Û¡Û"; TextColor(15, 0); cout << "¡Ü"; TextColor(4, 0); cout << "¡ã¡ã¡ã"; TextColor(15, 0); cout << "¡Ü"; TextColor(0, 0); cout << "¡Û¡Û"; TextColor(6, 0); cout << "¡á¡á"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û" << endl;
	cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û"; TextColor(6, 0); cout << "¡á¡á"; TextColor(0, 0); cout << "¡Û"; TextColor(15, 0); cout << "¡Ü"; TextColor(4, 0); cout << "¡ã¡ã¡ã"; TextColor(15, 0); cout << "¡Ü"; TextColor(0, 0); cout << "¡Û"; TextColor(6, 0); cout << "¡á¡á"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û" << endl;
	cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û"; TextColor(6, 0); cout << "¡á¡á¡á¡á"; TextColor(5, 0); cout << "¡Ü"; TextColor(6, 0); cout << "¡á¡á¡á¡á"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û" << endl;
	cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û"; TextColor(6, 0); cout << "¡á¡á¡á"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û" << endl;
	cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û"; TextColor(6, 0); cout << "¡á¡á¡á"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û" << endl;
	cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û"; TextColor(6, 0); cout << "¡á¡á¡á"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û" << endl;
	cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û"; TextColor(1, 0); cout << "¡á"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û" << endl;
	cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û" << endl;
	cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û" << endl;*/
	TextColor(0, 0);
	cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û" << endl;
	cout << "¡Û"; TextColor(15, 0); cout << "¡Ü"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û" << endl;
	cout << "¡Û"; TextColor(15, 0); cout << "¡Ü"; TextColor(4, 0); cout << "¡ã"; TextColor(15, 0); cout << "¡Ü"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û" << endl;
	cout << "¡Û"; TextColor(15, 0); cout << "¡Ü"; TextColor(4, 0); cout << "¡ã¡ã¡ã"; TextColor(15, 0); cout << "¡Ü"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û" << endl;
	cout << "¡Û"; TextColor(15, 0); cout << "¡Ü"; TextColor(4, 0); cout << "¡ã¡ã¡ã"; TextColor(15, 0); cout << "¡Ü"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û" << endl;
	cout << "¡Û"; TextColor(15, 0); cout << "¡Ü"; TextColor(4, 0); cout << "¡ã¡ã¡ã"; TextColor(15, 0); cout << "¡Ü"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û" << endl;
	cout << "¡Û"; TextColor(15, 0); cout << "¡Ü"; TextColor(4, 0); cout << "¡ã¡ã¡ã"; TextColor(15, 0); cout << "¡Ü"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û" << endl;
	cout << "¡Û"; TextColor(15, 0); cout << "¡Ü"; TextColor(4, 0); cout << "¡ã¡ã¡ã"; TextColor(15, 0); cout << "¡Ü"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û" << endl;
	cout << "¡Û"; TextColor(15, 0); cout << "¡Ü"; TextColor(4, 0); cout << "¡ã¡ã¡ã"; TextColor(15, 0); cout << "¡Ü"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û" << endl;
	cout << "¡Û"; TextColor(15, 0); cout << "¡Ü"; TextColor(4, 0); cout << "¡ã¡ã¡ã"; TextColor(15, 0); cout << "¡Ü"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û" << endl;
	cout << "¡Û"; TextColor(15, 0); cout << "¡Ü"; TextColor(4, 0); cout << "¡ã¡ã¡ã"; TextColor(15, 0); cout << "¡Ü"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û" << endl;
	cout << "¡Û"; TextColor(6, 0); cout << "¡á¡á"; TextColor(0, 0); cout << "¡Û¡Û"; TextColor(15, 0); cout << "¡Ü"; TextColor(4, 0); cout << "¡ã¡ã¡ã"; TextColor(15, 0); cout << "¡Ü"; TextColor(0, 0); cout << "¡Û¡Û"; TextColor(6, 0); cout << "¡á¡á"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û" << endl;
	cout << "¡Û"; TextColor(6, 0); cout << "¡á¡á"; TextColor(0, 0); cout << "¡Û"; TextColor(15, 0); cout << "¡Ü"; TextColor(4, 0); cout << "¡ã¡ã¡ã"; TextColor(15, 0); cout << "¡Ü"; TextColor(0, 0); cout << "¡Û"; TextColor(6, 0); cout << "¡á¡á"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û" << endl;
	cout << "¡Û"; TextColor(6, 0); cout << "¡á¡á¡á¡á"; TextColor(5, 0); cout << "¡Ü"; TextColor(6, 0); cout << "¡á¡á¡á¡á"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û" << endl;
	cout << "¡Û"; TextColor(6, 0); cout << "¡á¡á¡á"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û" << endl;
	cout << "¡Û"; TextColor(6, 0); cout << "¡á¡á¡á"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û" << endl;
	cout << "¡Û"; TextColor(6, 0); cout << "¡á¡á¡á"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û" << endl;
	cout << "¡Û¡Û"; TextColor(1, 0); cout << "¡á"; TextColor(0, 0); cout << "¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û" << endl;
	cout << "¡Û" << endl;
	cout << "¡Û" << endl;
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
		///*TextColor(10, 10);
		//cout << "¡á";
		//TextColor(0, 0);*/
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

void PixelChar(int num)
{
	int pixel[500] = {0};
	switch (num - 48)
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
	default:
	{
		for (int i = 0; i < 500; ++i)
		{
			cout << pixel[i];
		}
	}
		break;
	}
}
//°ËÁ¤0 ÆÄ¶û1 ÃÊ·Ï2 ÇÏ´Ã3 »¡°­4 º¸¶ó5
//³ë¶û6 Èò»ö7 È¸»ö8 ÆÄ¶û9
void GalagaPlayer()
{
	int plane[5][5] =
	{
		0, 0, 4, 0, 0,
		0, 7, 7, 7, 0,
		4, 7, 4, 7, 4,
		0, 4, 7, 4, 0,
		0, 0, 7, 0, 0
	};

	for (int i = 0; i < 5; ++i)
	{
		gotoxy(103, 15 + i);
		for (int j = 0; j < 5; ++j)
		{
			Pixel(plane[i][j]);
		}

	}
	for (int i = 0; i < 5; ++i)
	{
		gotoxy(113, 15 + i);
		for (int j = 0; j < 5; ++j)
		{
			Pixel(plane[i][j]);
		}

	}
	for (int i = 0; i < 5; ++i)
	{
		gotoxy(123, 15 + i);
		for (int j = 0; j < 5; ++j)
		{
			Pixel(plane[i][j]);
		}

	}
}

void GalagaEnemy()
{
	
	int enemy[5][5] =
	{
		0, 0, 0, 0, 0,
		0, 1, 3, 1, 0,
		1, 5, 1, 5, 1,
		1, 5, 1, 5, 1,
		0, 1, 1, 1, 0
	};
	for (int i = 0; i < 5; ++i)
	{
		gotoxy(10, 2 + i);
		for (int j = 0; j < 5; ++j)
		{
			Pixel(enemy[i][j]);
		}

	}
}
void GalagaEnemyA()
{

	int enemy[5][5] =
	{
		0, 0, 0, 0, 0,
		0, 4, 3, 4, 0,
		4, 1, 4, 1, 4,
		4, 1, 4, 1, 4,
		0, 4, 7, 4, 0
	};
	for (int i = 0; i < 5; ++i)
	{
		gotoxy(10, 2 + i);
		for (int j = 0; j < 5; ++j)
		{
			Pixel(enemy[i][j]);
		}

	}
}

void PrintBaseMap()
{

	const int arrX = 50;
	const int arrY = 100;
	int ground[arrY][arrX] = { 0 };
	int backGround[arrY][arrX] = { 0 };

	// ÃÊ±â¸Ê
	for (int i = 0; i < arrY; ++i)
	{
		for (int j = 0; j < arrX; ++j)
		{
			ground[i][j] = 0;
			if (j % 49 == 0)
			{
				ground[i][j] = 7;
			}
		}
	}
	// ¹é±×¶ó¿îµå º¹»çÇÏ±â
	for (int i = 0; i < arrY; ++i)
	{
		for (int j = 0; j < arrX; ++j)
		{
			backGround[i][j] = ground[i][j];
		}
	}
	// º¯°æ »çÇ× Ãâ·Â
	for (int i = 0; i < arrY; ++i)
	{
		for (int j = 0; j < arrX; ++j)
		{
			Pixel(backGround[i][j]);
		}
		cout << '\n';
	}


}

void ArrowUp()
{
	int arrow[5][5] =
	{
		0, 0, 0, 0, 0,
		0, 0, 8, 0, 0,
		0, 8, 8, 8, 0,
		8, 0, 8, 0, 8,
		0, 0, 8, 0, 0
	};

	for (int i = 0; i < 5; ++i)
	{
		gotoxy(113, 22 + i);
		for (int j = 0; j < 5; ++j)
		{
			Pixel(arrow[i][j]);
		}

	}
}

void ArrowDown()
{
	int arrow[5][5] =
	{
		0, 0, 8, 0, 0,
		8, 0, 8, 0, 8,
		0, 8, 8, 8, 0,
		0, 0, 8, 0, 0,
		0, 0, 0, 0, 0
	};

	for (int i = 0; i < 5; ++i)
	{
		gotoxy(113, 28 + i);
		for (int j = 0; j < 5; ++j)
		{
			Pixel(arrow[i][j]);
		}

	}
}

void ArrowRight()
{
	int arrow[5][5] =
	{
		0, 8, 0, 0, 0,
		0, 0, 8, 0, 0,
		8, 8, 8, 8, 0,
		0, 0, 8, 0, 0,
		0, 8, 0, 0, 0
	};

	for (int i = 0; i < 5; ++i)
	{
		gotoxy(125, 27 + i);
		for (int j = 0; j < 5; ++j)
		{
			Pixel(arrow[i][j]);
		}

	}
}

void ArrowLeft()
{
	int arrow[5][5] =
	{
		0, 0, 0, 8, 0,
		0, 0, 8, 0, 0,
		0, 8, 8, 8, 8,
		0, 0, 8, 0, 0,
		0, 0, 0, 8, 0
	};

	for (int i = 0; i < 5; ++i)
	{
		gotoxy(101, 27 + i);
		for (int j = 0; j < 5; ++j)
		{
			Pixel(arrow[i][j]);
		}

	}
}


// È­ÀÌÆ®
void ArrowUpW()
{
	int arrow[5][5] =
	{
		0, 0, 0, 0, 0,
		0, 0, 7, 0, 0,
		0, 7, 7, 7, 0,
		7, 0, 7, 0, 7,
		0, 0, 7, 0, 0
	};

	for (int i = 0; i < 5; ++i)
	{
		gotoxy(113, 22 + i);
		for (int j = 0; j < 5; ++j)
		{
			Pixel(arrow[i][j]);
		}

	}
}

void ArrowDownW()
{
	int arrow[5][5] =
	{
		0, 0, 7, 0, 0,
		7, 0, 7, 0, 7,
		0, 7, 7, 7, 0,
		0, 0, 7, 0, 0,
		0, 0, 0, 0, 0
	};

	for (int i = 0; i < 5; ++i)
	{
		gotoxy(113, 28 + i);
		for (int j = 0; j < 5; ++j)
		{
			Pixel(arrow[i][j]);
		}

	}
}

void ArrowRightW()
{
	int arrow[5][5] =
	{
		0, 7, 0, 0, 0,
		0, 0, 7, 0, 0,
		7, 7, 7, 7, 0,
		0, 0, 7, 0, 0,
		0, 7, 0, 0, 0
	};

	for (int i = 0; i < 5; ++i)
	{
		gotoxy(125, 27 + i);
		for (int j = 0; j < 5; ++j)
		{
			Pixel(arrow[i][j]);
		}

	}
}

void ArrowLeftW()
{
	int arrow[5][5] =
	{
		0, 0, 0, 7, 0,
		0, 0, 7, 0, 0,
		0, 7, 7, 7, 7,
		0, 0, 7, 0, 0,
		0, 0, 0, 7, 0
	};

	for (int i = 0; i < 5; ++i)
	{
		gotoxy(101, 27 + i);
		for (int j = 0; j < 5; ++j)
		{
			Pixel(arrow[i][j]);
		}

	}
}

void ZKey()
{
	int key[5][5] =
	{
		8, 8, 8, 8, 8,
		0, 0, 0, 0, 8,
		0, 0, 0, 8, 0,
		0, 0, 8, 0, 0,
		8, 8, 8, 8, 8
	};

	for (int i = 0; i < 5; ++i)
	{
		gotoxy(113, 35 + i);
		for (int j = 0; j < 5; ++j)
		{
			Pixel(key[i][j]);
		}

	}
}

void ZKeyW()
{
	int key[5][5] =
	{
		7, 7, 7, 7, 7,
		0, 0, 0, 0, 7,
		0, 0, 0, 7, 0,
		0, 0, 7, 0, 0,
		7, 7,7, 7, 7
	};

	for (int i = 0; i < 5; ++i)
	{
		gotoxy(113, 35 + i);
		for (int j = 0; j < 5; ++j)
		{
			Pixel(key[i][j]);
		}

	}
}

void Effect(int x,int y)
{
	int effect[5][5] = { 0 };

	// Ãæµ¹ ½Ã ÀÌÆåÆ® »ý¼º

	// ÀÌÆåÆ® Ãâ·Â
	for (int i = 0; i < 5; ++i)
	{
		gotoxy(x, y + i);
		for (int j = 0; j < 5; ++j)
		{
			Pixel(effect[i][j]);
		}
	}
}




	