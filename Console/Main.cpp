#include "UseClass.h"
#include "Family.h"
#include "HandGame.h"
#include <conio.h>
void Pixel(int num);

void main()
{
	// ����1
	/*UseClass* useClass = new UseClass;
	
	delete useClass;*/
	// ����2
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
����1. Ŭ���� ���� ������

- ���� �ٸ� Ŭ���� 5���� �����ϰ� ���� �ٸ� ������ ����Ѵ�.

EX)
(Ŭ���� �̸�) Ŭ���� 1��
(Ŭ���� �̸�) Ŭ���� 2��
(Ŭ���� �̸�) Ŭ���� 3��
.
.
.
(Ŭ���� �̸�) Ŭ���� N��
=> �ִ��� ȿ���� �����ϸ鼭 �غ���.

����2. �츮 ������ ������...
- Ŭ������ Ȱ���� �츮 ������ �Ұ��ϴ� ������ ����Ѵ�.

��ü���������� �����Ѵ�.


����3. ���� ���� �����
- ��ŸƮ ���� ���� ������ ������ ���� ����

- ��Ʈ�� ����, ü�¹ٸ� �ʼ��� �����Ѵ�.

- �÷��̾ ������ �ϸ� �ȵǸ� �� ���� ������ �ؾ� �Ѵ�.
�� + ���� ���� ���� ���� �ݵ�� �־�� �Ѵ�.


����4. ����������

- Ŭ������ Ȱ���� ��ü�������� �����´�.

- �ּ� Ŭ������ 3��


*/

void Pixel(int num)
{

	switch (num -48)
	{
	case 1:
	{
		// �Ķ���
		TextColor(1, 1);
		cout << "��";
		TextColor(0, 0);
	}
	break;
	case 2:
	{
		// �ʷϻ�
		TextColor(2, 2);
		cout << "��";
		TextColor(0, 0);


	}
	break;
	case 3:
	{
		// �ϴû�
		TextColor(3, 3);
		cout << "��";
		TextColor(0, 0);


	}
	break;
	case 4:
	{
		// ������
		TextColor(4, 4);
		cout << "��";
		TextColor(0, 0);


	}
	break;
	case 5:
	{
		// �����
		TextColor(5, 5);
		cout << "��";
		TextColor(0, 0);


	}
	break;
	case 6:
	{
		// �����
		TextColor(6, 6);
		cout << "��";
		TextColor(0, 0);


	}
	break;
	case 7:
	{
		// ���
		TextColor(7, 7);
		cout << "��";
		TextColor(0, 0);


	}
	break;
	case 8:
	{
		// ȸ��
		TextColor(8, 8);
		cout << "��";
		TextColor(0, 0);


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
		TextColor(10, 10);
		cout << "��";
		TextColor(0, 0);


	}
	break;
	case 11:
	{
		// ���� �ϴ�
		TextColor(11, 11);
		cout << "��";
		TextColor(0, 0);


	}
	break;
	case 12:
	{
		// ���� ����
		TextColor(12, 12);
		cout << "��";
		TextColor(0, 0);


	}
	break;
	case 13:
	{
		// ���� �����
		TextColor(13, 13);
		cout << "��";
		TextColor(0, 0);


	}
	break;
	case 14:
	{
		// ���� �����
		TextColor(14, 14);
		cout << "��";
		TextColor(0, 0);


	}
	break;
	case 15:
	{
		// ���� ���
		TextColor(15, 15);
		cout << "��";
		TextColor(0, 0);


	}
	break;

	default:
		break;
	}
}