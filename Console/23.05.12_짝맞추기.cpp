//����3.¦ ���߱�
//
//- ������ : 5 x 4
//
//- �� �� �� �� �� �� �� �� �� ��
//
//- ¦�� ������ ��ȣ�� ��� ���µ� ���·� �־�� �Ѵ�.
//
//- 2���� �������� ġƮ �����
//�� 1. ġƮŰ�� ������ �и� ���� ���� ���� �÷��̾�� �����ְ� 5�ʵڿ� �ٽ� ���� ���� ��Ų��.
//�� 2. ġƮŰ�� ������ �ѽ��� ī�带 �����ϰ� ���� ���µȴ�.
//����ڰ� ������ �ѽ��� ���߸鼭 ������ ����Ǹ� ok

#include <iostream>
#include <Windows.h>

using std::cout;
using std::cin;
using std::endl;

char Char(int num);

void main()
{
	//- ��0 ��1 ��2 ��3 ��4 ��5 ��6 ��7 ��8 ��9

	int firstLine[5] = { 0 };
	int secondLine[5] = { 0 };
	int thirdLine[5] = { 0 };
	int foursLine[5] = { 0 };

	char a[3] = "��";
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
		return '��';
	}
	break;
	case 1:
	{
		return '��';
	}
	break;
	case 2:
	{
		return '��';
	}
	break;
	case 3:
	{
		return '��';
	}
	break;
	case 4:
	{
		return '��';
	}
	break;
	case 5:
	{
		return '��';
	}
	break;
	case 6:
	{
		return '��';
	}
	break;
	case 7:
	{
		return '��';
	}
	break;
	case 8:
	{
		return '��';
	}
	break;
	case 9:
	{
		return '��';
	}
	break;
	default:
		break;
	}
	return 0;
}
