#include "Dot.h"
#include "AutoGame.h"

void Pixel(int num);
/*
����1. ���� + ���� ����
- �ڵ� ���� ������ �����.
- Ŭ������ 5�� �̻�
- �÷��̾� �ɷ�ġ�� 7�� (�ʼ� �ɷ�ġ: ��)
�� �� �ɷ�ġ�� ���� ũ��Ƽ�� �߻�

- ������ ���� 3����
�� ��з� : ����, ��, �Ǽ��縮, ����
�� �ߺз� : ��з��� �ش��ϴ� �׸�� ������ 2����
�� ����	 : ���� �ð��� ������ �ǽ� ����� �������� �����.

- �÷��̾� ��ų 2�� �̻� / �� ��ų�� 1�� �̻�
�� ��ų�� ��Ÿ�� ���� ��Ų��. (��Ÿ�� �� ������ ����)

- ��Ʈ�� ������ ����� �� ��Ʈ�� Ȱ���Ѵ�.

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
		// ������
		TextColor(0, 0);
		cout << "��";
		TextColor(7, 0);
		pixelNum = 0;
	}
	break;
	case 1:
	{
		// �Ķ���
		TextColor(1, 1);
		cout << "��";
		TextColor(7, 0);
		pixelNum = 1;

	}
	break;
	case 2:
	{
		// �ʷϻ�
		TextColor(2, 2);
		cout << "��";
		TextColor(7, 0);
		pixelNum = 2;
	}
	break;
	case 3:
	{
		// �ϴû�
		TextColor(3, 3);
		cout << "��";
		TextColor(7, 0);
		pixelNum = 3;
	}
	break;
	case 4:
	{
		// ������
		TextColor(4, 4);
		cout << "��";
		TextColor(7, 0);
		pixelNum = 4;
	}
	break;
	case 5:
	{
		// �����
		TextColor(5, 5);
		cout << "��";
		TextColor(7, 0);
		pixelNum = 5;
	}
	break;
	case 6:
	{
		// �����
		TextColor(6, 6);
		cout << "��";
		TextColor(7, 0);
		pixelNum = 6;
	}
	break;
	case 7:
	{
		// ���
		TextColor(7, 7);
		cout << "��";
		TextColor(7, 0);
		pixelNum = 7;
	}
	break;
	case 8:
	{
		// ȸ��
		TextColor(8, 8);
		cout << "��";
		TextColor(7, 0);
		pixelNum = 8;
	}
	break;
	case 9:
	{
		// ���� �Ķ�
		TextColor(9, 9);
		cout << "��";
		TextColor(0, 0);
		pixelNum = 9;

	}
	break;
	case 10:
	{
		// ���� �ʷ�
		/*TextColor(10, 10);
		cout << "��";
		TextColor(0, 0);*/
		// �Ѿ�
		TextColor(4, 7);
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