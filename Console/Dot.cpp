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
		/*TextColor(10, 10);
		cout << "��";
		TextColor(0, 0);*/
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
	
