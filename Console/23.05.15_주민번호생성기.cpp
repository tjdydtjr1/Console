/*
* ��Ʈ�� ��� ����

����1. �ֹι�ȣ ������

- �����ϸ� ���ϴ� ������ �Է¹޴´�. (4�ڸ�, 2�ڸ� ó��)
�� EX: 1975 / 75

- ���� ���� �Է� (2�ڸ�, 1�ڸ� ó��)
�� EX : 06 / 6

- ����ó�� : 31���� �ִ� �ް� 30�ϱ����� �ִ� ��, �׸��� 2���� ����ó�� �Ѵ�.

- ���� ���� (���ڴ� 1 �Ǵ� 3 / ���ڴ� 2 �Ǵ� 4 )
�� ���� �ٸ� ���� �Է��ϸ� ������ �������� ����

- ������ 6�ڸ��� �������� ���
�� ����ó�� : ��, 0�� ������ �ȵȴ�.

*/

#include <iostream>
#include <time.h>
#include <Windows.h>

using std::cout;
using std::cin;
using std::endl;

void String(int num);
char RandNum(int num);

void main()
{
	// ����
	char years[5]	= { 0 };
	// ��
	char month[3]	= { 0 };
	// ��
	int day			= 0;
	bool dayCheck = true;

	// ����
	int sex = 0;

	//-�����ϸ� ���ϴ� ������ �Է¹޴´�. (4�ڸ�, 2�ڸ� ó��)
	//	�� EX : 1975 / 75
	printf("���� �Է� : ");
	for (int i = 0; i < 4; ++i)
	{
		cin >> years[i];
		if (years[0] != '1')
		{
			cin >> years[1];
			years[2] = '\0';
			break;
		}
	}

	//	- ���� ���� �Է�(2�ڸ�, 1�ڸ� ó��)
	//	�� EX : 06 / 6     1 01 11
	printf("�� �Է� : ");
	for (int i = 0; i < 2; ++i)
	{
		cin >> month[i];
		if (month[0] != '0' && month[0] != '1')
		{
			month[1] = '\0';
			break;
		}	
	}
	

	//	- ����ó�� : 31���� �ִ� �ް� 30�ϱ����� �ִ� ��, �׸��� 2���� ����ó�� �Ѵ�.
	printf("�� �Է� : ");
	while (dayCheck)
	{
		cin >> day;

		if (month[1] == '2')
		{
			if (day > 31)
			{
				continue;
			}
			dayCheck = true;
		}
		else if (month[1] == '1')
		{
			if (day > 30)
			{
				continue;
			}
			dayCheck = true;
		}
		else if (month[1] == '0')
		{
			if (day > 31)
			{
				continue;
			}
			dayCheck = true;

		}
		else if (month[1] == '9')
		{
			if (day > 30)
			{
				continue;
			}
			dayCheck = true;

		}
		else if (month[1] == '8')
		{
			if (day > 31)
			{
				continue;
			}
			dayCheck = true;

		}
		else if (month[1] == '7')
		{
			if (day > 31)
			{
				continue;
			}
			dayCheck = true;

		}
		else if (month[1] == '6')
		{
			if (day > 30)
			{
				continue;
			}
			dayCheck = true;

		}
		else if (month[1] == '5')
		{
			if (day > 31)
			{
				continue;
			}
			dayCheck = true;

		}
		else if (month[1] == '4')
		{
			if (day > 30)
			{
				continue;
			}
			dayCheck = true;

		}
		else if (month[1] == '3')
		{
			if (day > 31)
			{
				continue;
			}
			dayCheck = true;

		}
		else if (month[1] == '2')
		{
			if (day > 28)
			{
				continue;
			}
			dayCheck = true;

		}
		else if (month[1] == '1')
		{
			if (day > 31)
			{
				continue;
			}
			dayCheck = true;

		}

	}

	//	- ���� ����(���ڴ� 1 �Ǵ� 3 / ���ڴ� 2 �Ǵ� 4)
	//	�� ���� �ٸ� ���� �Է��ϸ� ������ �������� ����
	printf("���� �Է�\n ���� = 1, 3 ���� = 2, 4\n");
	cin >> sex;

	//	- ������ 6�ڸ��� �������� ���
	//	�� ����ó�� : ��, 0�� ������ �ȵȴ�.
	// ��� ���
	printf("�ֹι�ȣ ����\n");
	String(sex);
	printf("%s%s%d - %c%c%c%c%c%c", years, month, day, RandNum(rand() % 9 + 1), RandNum(rand() % 9 + 1), RandNum(rand() % 9 + 1), RandNum(rand() % 9 + 1), RandNum(rand() % 9 + 1), RandNum(rand() % 9 + 1));

}

void String(int num)
{
	switch (num)
	{
	case 1:
		printf("����\n");
		break;
	case 2:
		printf("����\n");
		break;
	case 3:
		printf("����\n");
		break;
	case 4:
		printf("����\n");
		break;
	default:
		String(rand() % 4 + 1);
		break;
	}
}
char RandNum(int num)
{
	switch (num)
	{
	case 1:
		return '1';
	case 2:
		return '2';
	case 3:
		return '3';
	case 4:
		return '4';
	case 5:
		return '5';
	case 6:
		return '6';
	case 7:
		return '7';
	case 8:
		return '8';
	case 9:
		return '9';

	default:
		break;
	}
}