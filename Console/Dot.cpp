#include "Dot.h"

//����0 �Ķ�1 �ʷ�2 �ϴ�3 ����4 ����5
//���6 ���7 ȸ��8 �Ķ�9

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
	// �Ǽ��縮 1��
	//�ۡۡۡۡۡ� �ܡܡܡܡܡ�
	TextColor(0, 0);
	cout << "�ۡۡۡۡۡۡۡۡ�"; TextColor(8, 0); cout << "**"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡ�"; TextColor(8, 0); cout << "**"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡ�"; TextColor(8, 0); cout << "**"; TextColor(0, 0); cout << "�ۡۡۡ�"; TextColor(8, 0); cout << "&"; TextColor(0, 0); cout << "�ۡۡۡۡۡ�"; TextColor(8, 0); cout << "**"; TextColor(0, 0); cout << "�ۡۡۡۡۡ�"; TextColor(8, 0); cout << "&"; TextColor(0, 0); cout << "�ۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡ�"; TextColor(8, 0); cout << "**"; TextColor(0, 0); cout << "��"; TextColor(8, 0); cout << "&&&&&&"; TextColor(0, 0); cout << "�ۡۡۡ�"; TextColor(8, 0); cout << "**"; TextColor(0, 0); cout << "�ۡ�"; TextColor(8, 0); cout << "*"; TextColor(8, 0); cout << "&&&&&&"; TextColor(0, 0); cout << "�ۡ�" << endl;
	cout << "�ۡۡۡۡۡ�"; TextColor(8, 0); cout << "**"; TextColor(0, 0); cout << "��"; TextColor(8, 0); cout << "*"; TextColor(8, 0); cout << "&&"; TextColor(0, 0); cout << "�ۡ�"; TextColor(8, 0); cout << "&"; TextColor(0, 0); cout << "�ۡۡۡۡ�"; TextColor(8, 0); cout << "**"; TextColor(0, 0); cout << "��"; TextColor(8, 0); cout << "**"; TextColor(8, 0); cout << "&&"; TextColor(0, 0); cout << "�ۡ�"; TextColor(8, 0); cout << "&"; TextColor(0, 0); cout << "�ۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡ�"; TextColor(8, 0); cout << "****"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡ�"; TextColor(8, 0); cout << "*****"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡ�"; TextColor(3, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡ�"; TextColor(8, 0); cout << "**"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡ�"; TextColor(3, 0); cout << "�ܡܡܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡ�"; TextColor(3, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡ�"; TextColor(3, 0); cout << "�ܡܡܡܡܡ�"; TextColor(8, 0); cout << "**"; TextColor(0, 0); cout << "�ۡۡۡۡۡ�"; TextColor(3, 0); cout << "�ܡܡܡ�"; TextColor(8, 0); cout << "**"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡ�"; TextColor(3, 0); cout << "�ܡܡܡ�"; TextColor(0, 0); cout << "��"; TextColor(3, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡ�"; TextColor(3, 0); cout << "�ܡܡܡܡܡ�"; TextColor(8, 0); cout << "**"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡ�"; TextColor(8, 0); cout << "*"; TextColor(3, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "��"; TextColor(3, 0); cout << "�ܡܡܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡ�"; TextColor(3, 0); cout << "�ܡܡܡ�"; TextColor(0, 0); cout << "�ۡ�"; TextColor(3, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡ�"; TextColor(8, 0); cout << "**"; TextColor(0, 0); cout << "��"; TextColor(3, 0); cout << "�ܡܡܡܡܡ�"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(8, 0); cout << "**"; TextColor(3, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡ�"; TextColor(3, 0); cout << "�ܡܡܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡ�"; TextColor(8, 0); cout << "**"; TextColor(0, 0); cout << "�ۡ�"; TextColor(3, 0); cout << "�ܡܡܡ�"; TextColor(0, 0); cout << "�ۡۡۡ�"; TextColor(8, 0); cout << "**"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(3, 0); cout << "�ܡܡܡܡܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡ�"; TextColor(8, 0); cout << "**"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(3, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡ�"; TextColor(3, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡ�"; TextColor(3, 0); cout << "�ܡܡܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡ�"; TextColor(3, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡ�"; TextColor(3, 0); cout << "�ܡܡܡ�"; TextColor(0, 0); cout << "�ۡۡۡ�"; TextColor(3, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡ�"; TextColor(3, 0); cout << "�ܡܡܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡ�"; TextColor(3, 0); cout << "�ܡܡܡܡܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡ�"; TextColor(3, 0); cout << "�ܡܡܡܡܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡ�"; TextColor(3, 0); cout << "�ܡܡܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡ�"; TextColor(3, 0); cout << "�ܡ�"; TextColor(15, 0); cout << "��"; TextColor(3, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡ�"; TextColor(3, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡ�"; TextColor(3, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << endl;
}

void PrintArmor()
{
	// �� 1�� �� ��

TextColor(0, 0);
cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
cout << "�ۡۡۡۡۡۡۡۡۡ�"; TextColor(7, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�"; TextColor(7, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
cout << "�ۡۡۡۡۡۡۡۡ�"; TextColor(7, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�"; TextColor(7, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
cout << "�ۡۡۡۡۡۡۡ�"; TextColor(7, 0); cout << "�ܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
cout << "�ۡۡ�"; TextColor(7, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡ�"; TextColor(7, 0); cout << "�ܡܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�"; TextColor(7, 0); cout << "�ܡܡ�"; TextColor(0, 0); cout << "�ۡ�"; TextColor(7, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡ�" << endl;
cout << "�ۡۡۡ�"; TextColor(7, 0); cout << "�ܡܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡ�"; TextColor(4, 0); cout << "����������"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡ�"; TextColor(7, 0); cout << "�ܡܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡ�" << endl;
cout << "�ۡۡ�"; TextColor(7, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡ�"; TextColor(4, 0); cout << "���"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡ�"; TextColor(4, 0); cout << "���"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡ�"; TextColor(7, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡ�" << endl;
cout << "�ۡ�"; TextColor(7, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�"; TextColor(7, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡ�" << endl;
cout << "��"; TextColor(7, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡ�"; TextColor(4, 0); cout << "����������������"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡ�"; TextColor(7, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡ�" << endl;
cout << "�ۡۡۡۡۡۡۡ�"; TextColor(4, 0); cout << "����"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�"; TextColor(4, 0); cout << "����"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
cout << "�ۡۡۡۡۡۡۡ�"; TextColor(13, 0); cout << "l"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�"; TextColor(13, 0); cout << "l"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
cout << "�ۡۡۡۡۡۡۡ�"; TextColor(13, 0); cout << "l"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�"; TextColor(13, 0); cout << "l"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
cout << "�ۡۡۡۡ�"; TextColor(7, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "��"; TextColor(13, 0); cout << "l"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�"; TextColor(13, 0); cout << "l"; TextColor(0, 0); cout << "��"; TextColor(7, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡ�" << endl;
cout << "�ۡۡۡۡۡ�"; TextColor(7, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "��"; TextColor(13, 0); cout << "l"; TextColor(9, 0); cout << "^^^^^^^^^^^^^^^^^"; TextColor(13, 0); cout << "l"; TextColor(0, 0); cout << "��"; TextColor(7, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡ�" << endl;
cout << "�ۡۡۡۡۡۡ�"; TextColor(7, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�"; TextColor(7, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡ�" << endl;
cout << "�ۡۡۡ�"; TextColor(7, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(7, 0); cout << "�ܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡ�"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(7, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡ�" << endl;
cout << "�ۡۡۡۡ�"; TextColor(7, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�"; TextColor(7, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡ�" << endl;
cout << "�ۡۡۡۡۡ�"; TextColor(7, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡ�"; TextColor(4, 0); cout << "��������������"; TextColor(0, 0); cout << "�ۡۡۡ�"; TextColor(7, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡ�" << endl;
cout << "�ۡۡۡۡۡۡۡۡۡۡۡ�"; TextColor(4, 0); cout << "��������������"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
cout << "�ۡۡۡۡۡۡ�"; TextColor(7, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�"; TextColor(7, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡ�" << endl;
cout << "�ۡۡۡۡۡ�"; TextColor(7, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�"; TextColor(7, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡ�" << endl;
cout << "�ۡۡۡۡ�"; TextColor(7, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�"; TextColor(7, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡ�" << endl;
cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
cout << endl;
}

void PrintWeapon()
{
	// ���� 1�����
	/*TextColor(0, 0);
	cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡۡۡۡۡ�"; TextColor(15, 0); cout << "��"; TextColor(4, 0); cout << "��"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡۡۡۡ�"; TextColor(15, 0); cout << "��"; TextColor(4, 0); cout << "����"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡۡۡۡ�"; TextColor(15, 0); cout << "��"; TextColor(4, 0); cout << "����"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡۡۡۡ�"; TextColor(15, 0); cout << "��"; TextColor(4, 0); cout << "����"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡۡۡۡ�"; TextColor(15, 0); cout << "��"; TextColor(4, 0); cout << "����"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡۡۡۡ�"; TextColor(15, 0); cout << "��"; TextColor(4, 0); cout << "����"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡۡۡۡ�"; TextColor(15, 0); cout << "��"; TextColor(4, 0); cout << "����"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡۡۡۡ�"; TextColor(15, 0); cout << "��"; TextColor(4, 0); cout << "����"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡۡۡۡ�"; TextColor(15, 0); cout << "��"; TextColor(4, 0); cout << "����"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡ�"; TextColor(6, 0); cout << "���"; TextColor(0, 0); cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(4, 0); cout << "����"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�"; TextColor(6, 0); cout << "���"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡ�"; TextColor(6, 0); cout << "���"; TextColor(0, 0); cout << "��"; TextColor(15, 0); cout << "��"; TextColor(4, 0); cout << "����"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "��"; TextColor(6, 0); cout << "���"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡۡ�"; TextColor(6, 0); cout << "�����"; TextColor(5, 0); cout << "��"; TextColor(6, 0); cout << "�����"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡۡۡۡۡ�"; TextColor(6, 0); cout << "����"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡۡۡۡۡ�"; TextColor(6, 0); cout << "����"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡۡۡۡۡ�"; TextColor(6, 0); cout << "����"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡ�"; TextColor(1, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;*/
	TextColor(0, 0);
	cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "��"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "��"; TextColor(15, 0); cout << "��"; TextColor(4, 0); cout << "��"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "��"; TextColor(15, 0); cout << "��"; TextColor(4, 0); cout << "����"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "��"; TextColor(15, 0); cout << "��"; TextColor(4, 0); cout << "����"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "��"; TextColor(15, 0); cout << "��"; TextColor(4, 0); cout << "����"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "��"; TextColor(15, 0); cout << "��"; TextColor(4, 0); cout << "����"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "��"; TextColor(15, 0); cout << "��"; TextColor(4, 0); cout << "����"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "��"; TextColor(15, 0); cout << "��"; TextColor(4, 0); cout << "����"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "��"; TextColor(15, 0); cout << "��"; TextColor(4, 0); cout << "����"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "��"; TextColor(15, 0); cout << "��"; TextColor(4, 0); cout << "����"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "��"; TextColor(6, 0); cout << "���"; TextColor(0, 0); cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(4, 0); cout << "����"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�"; TextColor(6, 0); cout << "���"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "��"; TextColor(6, 0); cout << "���"; TextColor(0, 0); cout << "��"; TextColor(15, 0); cout << "��"; TextColor(4, 0); cout << "����"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "��"; TextColor(6, 0); cout << "���"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "��"; TextColor(6, 0); cout << "�����"; TextColor(5, 0); cout << "��"; TextColor(6, 0); cout << "�����"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "��"; TextColor(6, 0); cout << "����"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "��"; TextColor(6, 0); cout << "����"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "��"; TextColor(6, 0); cout << "����"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡ�"; TextColor(1, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "��" << endl;
	cout << "��" << endl;
}

void Pixel(int num)
{

	switch (num)
	{
	case 0:
	{
		// ������
		TextColor(0, 0);
		cout << "��";
		TextColor(7, 0);
	}
	break;
	case 1:
	{
		// �Ķ���
		TextColor(1, 1);
		cout << "��";
		TextColor(7, 0);

	}
	break;
	case 2:
	{
		// �ʷϻ�
		TextColor(2, 2);
		cout << "��";
		TextColor(7, 0);
	}
	break;
	case 3:
	{
		// �ϴû�
		TextColor(3, 3);
		cout << "��";
		TextColor(7, 0);
	}
	break;
	case 4:
	{
		// ������
		TextColor(4, 4);
		cout << "��";
		TextColor(7, 0);
	}
	break;
	case 5:
	{
		// �����
		TextColor(5, 5);
		cout << "��";
		TextColor(7, 0);
	}
	break;
	case 6:
	{
		// �����
		TextColor(6, 6);
		cout << "��";
		TextColor(7, 0);
	}
	break;
	case 7:
	{
		// ���
		TextColor(7, 7);
		cout << "��";
		TextColor(7, 0);
	}
	break;
	case 8:
	{
		// ȸ��
		TextColor(8, 8);
		cout << "��";
		TextColor(7, 0);
	}
	break;
	case 9:
	{
		// ���� �Ķ�
		TextColor(9, 9);
		cout << "��";
		TextColor(0, 0);

	}
	break;
	case 10:
	{
		// ���� �ʷ�
		///*TextColor(10, 10);
		//cout << "��";
		//TextColor(0, 0);*/
		// �Ѿ�
		TextColor(4, 0);
		cout << "��";
		TextColor(7, 0);
	}
	break;
	case 11:
	{
		TextColor(11, 0);
		cout << "��";
		TextColor(7, 0);
	}
	break;
	case 12:
	{
		TextColor(5, 0);
		cout << "��";
		TextColor(7, 0);
	}
	break;
	case 13:
	{
		// ���� �ʷ�
		/*TextColor(10, 10);
		cout << "��";
		TextColor(0, 0);*/
		// �Ѿ�
		TextColor(5, 0);
		cout << "��";
		TextColor(7, 0);
	}
	break;
	//case 11:
	//{
	//	// ���� �ϴ�
	//	TextColor(11, 11);
	//	cout << "��";
	//	TextColor(0, 0);
	//}
	//break;
	//case 12:
	//{
	//	// ���� ����
	//	TextColor(12, 12);
	//	cout << "��";
	//	TextColor(0, 0);
	//}
	//break;
	//case 13:
	//{
	//	// ���� �����
	//	TextColor(13, 13);
	//	cout << "��";
	//	TextColor(0, 0);
	//}
	//break;
	//case 14:
	//{
	//	// ���� �����
	//	TextColor(14, 14);
	//	cout << "��";
	//	TextColor(0, 0);
	//}
	//break;
	//case 15:
	//{
	//	// ���� ���
	//	TextColor(15, 15);
	//	cout << "��";
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
		// ������
		TextColor(0, 0);
		cout << "��";
		TextColor(7, 0);
	}
	break;
	case 1:
	{
		// �Ķ���
		TextColor(1, 1);
		cout << "��";
		TextColor(7, 0);

	}
	break;
	case 2:
	{
		// �ʷϻ�
		TextColor(2, 2);
		cout << "��";
		TextColor(7, 0);
	}
	break;
	case 3:
	{
		// �ϴû�
		TextColor(3, 3);
		cout << "��";
		TextColor(7, 0);
	}
	break;
	case 4:
	{
		// ������
		TextColor(4, 4);
		cout << "��";
		TextColor(7, 0);
	}
	break;
	case 5:
	{
		// �����
		TextColor(5, 5);
		cout << "��";
		TextColor(7, 0);
	}
	break;
	case 6:
	{
		// �����
		TextColor(6, 6);
		cout << "��";
		TextColor(7, 0);
	}
	break;
	case 7:
	{
		// ���
		TextColor(7, 7);
		cout << "��";
		TextColor(7, 0);
	}
	break;
	case 8:
	{
		// ȸ��
		TextColor(8, 8);
		cout << "��";
		TextColor(7, 0);
	}
	break;
	case 9:
	{
		// ���� �Ķ�
		TextColor(9, 9);
		cout << "��";
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
//����0 �Ķ�1 �ʷ�2 �ϴ�3 ����4 ����5
//���6 ���7 ȸ��8 �Ķ�9
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

	// �ʱ��
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
	// ��׶��� �����ϱ�
	for (int i = 0; i < arrY; ++i)
	{
		for (int j = 0; j < arrX; ++j)
		{
			backGround[i][j] = ground[i][j];
		}
	}
	// ���� ���� ���
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


// ȭ��Ʈ
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

	// �浹 �� ����Ʈ ����

	// ����Ʈ ���
	for (int i = 0; i < 5; ++i)
	{
		gotoxy(x, y + i);
		for (int j = 0; j < 5; ++j)
		{
			Pixel(effect[i][j]);
		}
	}
}




	