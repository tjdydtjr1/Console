/*
����1. �ڽ��� ���� ��Ʈ������ ����
- � ���⼺�� ������ ������ ������ΰ�?

- �帣 ���� 3���� / ���� ���� 3���� ��
1. ���� ����	(1945)					

2. �׼� ��庥�� ����(���۸�����)

3. ��庥��(���� Ż��, ��ź���ϱ�)		

- �帣 1
�� 1. �����ӿ� ���� ��Ʈ ��� ���ڿ������� (������)
�� 2. ���� �����ӿ� ���� ���
�� 3. �̻����� ���� �� ���� ǥ��

- �帣 2
�� 1. �����ӿ� ���� ��Ʈ ��� ���ڿ������� (������)
�� 2. �̵��ϸ� �����ϴ� ���� ǥ��
�� 3. �� �̵��� �ڿ������� ȭ�� �̵�

- �帣 3
�� 1. �����ӿ� ���� ���ڿ������� (������)
�� 2. �����ο� ������ �� �� �ִ�.
�� 3. �׷����� ����Ʈ ȿ�� ǥ��

- Ư�� ���� : ����.

- �ʿ��ϴٸ� ��Ʈ �۾��Ѵ�.

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
		// �Ķ���
		TextColor(1, 1);
		
		TextColor(0, 0);
	}
	break;
	case 2:
	{
		// �ʷϻ�
		TextColor(2, 2);
		TextColor(0, 0);


	}
	break;
	case 3:
	{
		// �ϴû�
		TextColor(3, 3);
		TextColor(0, 0);


	}
	break;
	case 4:
	{
		// ������
		TextColor(4, 4);
		TextColor(0, 0);


	}
	break;
	case 5:
	{
		// �����
		TextColor(5, 5);
		TextColor(0, 0);


	}
	break;
	case 6:
	{
		// �����
		TextColor(6, 6);
		TextColor(0, 0);


	}
	break;
	case 7:
	{
		// ���
		TextColor(7, 7);
		TextColor(0, 0);


	}
	break;
	case 8:
	{
		// ȸ��
		TextColor(8, 8);
		TextColor(0, 0);


	}
	break;
	case 9:
	{
		// ���� �Ķ�
		TextColor(9, 9);
		TextColor(0, 0);


	}
	break;
	case 10:
	{
		// ���� �ʷ�
		TextColor(10, 10);
		TextColor(0, 0);


	}
	break;
	case 11:
	{
		// ���� �ϴ�
		TextColor(11, 11);
		TextColor(0, 0);


	}
	break;
	case 12:
	{
		// ���� ����
		TextColor(12, 12);
		TextColor(0, 0);


	}
	break;
	case 13:
	{
		// ���� �����
		TextColor(13, 13);
		TextColor(0, 0);


	}
	break;
	case 14:
	{
		// ���� �����
		TextColor(14, 14);
		TextColor(0, 0);


	}
	break;
	case 15:
	{
		// ���� ���
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