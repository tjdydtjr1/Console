//����4.���̷ο켼��
//- ��  1 ~13������ ī��
//- �� 1 ~13������ ī��
//- ��  1 ~13������ ī��
//- ��  1 ~13������ ī��
//
//������ 13 ��->�� 52��
//- 52���� ī�带 �ּ� �ѹ��̻� �������� ���� �� �� ���ϸ��� 5�徿 �����´�.
//
//- ���ʿ� ��ġ�� �ټ����� ī�带 ���� 6��° ī���� ���ڸ� �����ϴ� ����
//
//- ���캸�� ������ ����, ������ �ο�, �ƴϸ� �������� �߿� 1�� ����
//
//- �����̸� 13�� ���� ȹ��
//
//- �� �� ������ ��

#include <iostream>
#include <Windows.h>
#include <time.h>

using std::cout;
using std::cin;
using std::endl;

char AlterChar(int num);

void main()
{
	srand(time(NULL));

	// ī����� ��
	/*int cloverNum[13]	= { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 };
	int diaNum[13]		= { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 };
	int spaceNum[13]    = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 };
	int heartNum[13]	= { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 };
	*/
	int randNum[52] = { 0 };

	const int arrMax = sizeof(randNum) / sizeof(randNum[0]);

	int idx = 1;
	for (int i = 0; i < arrMax; ++i)
	{
		randNum[i] = idx;
		if (idx > 13)
		{
			idx = 0;
		}
		++idx;
	}
	// �ӽ� �����
	int openCard[6] = {0};
	int temp = 0;
	// �����ϱ�
	int myMoney = 10000;
	int batMoney = 0;
	
	while (true)
	{
		printf("���̷ο켼�� ���� ����\n\n");
		
		// 1. ī�带 ���´�.
		for (int i = 0; i < arrMax; ++i)
		{
			temp = rand() % 51 + 1;
			if (randNum[temp])
			{
				continue;
			}
			randNum[temp] = 1;
			openCard[i] = temp;
		}
		

		// 2. 5���� �����Ѵ�.
		Sleep(1000);
		// 3. ���� �ݾ��� �Է� �޴´�.
		//printf("���� �ݾ� �Է� : ");
		//cin >> batMoney;
		// 4. 6��° ī�尡 ���캸�� ������ ������ ������ �Է¹޴´�.
		// 5. 6��° ī���� ����� ���� ���� �ݾ� �����ϱ� �����̸� 13 �� ���߸� ���ñݾ׸�ŭ ����
	}
}


char AlterChar(int num)
{

	switch (num)
	{
	case 1:
		return 'A';
		break;
	case 2:
		return '2';
		break;
	case 3:
		return '3';
		break;
	case 4:
		return '4';
		break;
	case 5:
		return '5';
	case 6:
		return '6';
	case 7:
		return '7';
	case 8:
		return '8';
		break;
	case 9:
		return '9';
		break;
	case 10:
		cout << "10";
		break;
	case 11:
		return 'J';
		break;
	case 12:
		return 'Q';
		break;
	case 13:
		return 'K';
	default:
		break;
	}

}