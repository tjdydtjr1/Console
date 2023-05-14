//����4.���̷ο켼��
//- ��  1 ~13������ ī��
//- �� 1 ~13������ ī��
//- ��  1 ~13������ ī��
//- ��  1 ~13������ ī��
//���ߢ���
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

// ī�� ��ü �迭 ����
#define SUPPLECARD 52

// ������ ������ ī�� 
#define LASTCARD 5

void main()
{
	srand(time(NULL));

	// ī����� ��
	// 10�� ©���� T�� ġȯ
	char cloverNum[SUPPLECARD]		= { 'A','2','3','4','5','6','7','8','9','T','J','Q','K','A','2','3','4','5','6','7','8','9','T','J','Q','K','A','2','3','4','5','6','7','8','9','T','J','Q','K','A','2','3','4','5','6','7','8','9','T','J','Q','K' };
	char diaNum[SUPPLECARD]			= { 'A','2','3','4','5','6','7','8','9','T','J','Q','K','A','2','3','4','5','6','7','8','9','T','J','Q','K','A','2','3','4','5','6','7','8','9','T','J','Q','K','A','2','3','4','5','6','7','8','9','T','J','Q','K' };
	char spaceNum[SUPPLECARD]		= { 'A','2','3','4','5','6','7','8','9','T','J','Q','K','A','2','3','4','5','6','7','8','9','T','J','Q','K','A','2','3','4','5','6','7','8','9','T','J','Q','K','A','2','3','4','5','6','7','8','9','T','J','Q','K' };
	char heartNum[SUPPLECARD]		= { 'A','2','3','4','5','6','7','8','9','T','J','Q','K','A','2','3','4','5','6','7','8','9','T','J','Q','K','A','2','3','4','5','6','7','8','9','T','J','Q','K','A','2','3','4','5','6','7','8','9','T','J','Q','K' };
	
	// �����ϱ�
	// ������
	int myMoney = 10000;
	// ���� �ݾ�
	int batMoney = 0;
	// ��� ����
	int choice = 0;

	// ī�� ���� ����
	int openCard[6] = { 0 };
	// ���� ���� �� ī�� �� ����
	char resultCard[6] = { 0 };

	while (myMoney > 0)
	{
		printf("���̷ο켼�� ���� ���� \n\n");
		for (int i = 0; i < 6; ++i)
		{
			openCard[i] = rand() % 4;
		}

		// ���� ���� ī�� �� �� ��� ī�忡 �ִ´�.
		printf("ī�� 5���� �����մϴ�\n");
		for (int i = 0; i < 5; ++i)
		{
			// clover : 0 dia : 1 space : 2 heart : 3
			// �����ߢ�
			if (openCard[i] == 0)
			{
				printf("�� ");
				resultCard[i] = cloverNum[rand() % 52];
				if (resultCard[i] == 'T')
				{
					cout << "10" << '\n';
				}
				else
				{
					cout << resultCard[i] << '\n';
				}
			}
			else if (openCard[i] == 1)
			{
				printf("�� ");
				resultCard[i] = diaNum[rand() % 52];
				if (resultCard[i] == 'T')
				{
					cout << "10" << '\n';
				}
				else
				{
					cout << resultCard[i] << '\n';
				}
			}
			else if (openCard[i] == 2)
			{
				printf("�� ");
				resultCard[i] = spaceNum[rand() % 52];
				if (resultCard[i] == 'T')
				{
					cout << "10" << '\n';
				}
				else
				{
					cout << resultCard[i] << '\n';
				}
			}
			else
			{
				printf("�� ");
				resultCard[i] = heartNum[rand() % 52];
				if (resultCard[i] == 'T')
				{
					cout << "10" << '\n';
				}
				else
				{
					cout << resultCard[i] << '\n';
				}
			}
		}
		cout << '\n';
		// 5���� ī�带 ���� ���� �ϱ�
		printf("���� �ݾ��� �Է��ϼ���.\n");
		cin >> batMoney;
		cout << '\n';
		
		printf("���캸�� �� �Ʒ� ������ ����\n");
		printf("�� = 0, �Ʒ� = 1, ���� = 2\n");
		cin >> choice;
		cout << '\n';
		
		
		// 6��° ī�� ����
		printf("6��° ī�� ����\n");
		if (openCard[LASTCARD] == 0)
		{
			printf("�� ");
			resultCard[LASTCARD] = cloverNum[rand() % 52];
			if (resultCard[LASTCARD] == 'T')
			{
				cout << "10" << '\n';
			}
			else
			{
				cout << resultCard[LASTCARD] << '\n';
			}
		}
		else if (openCard[LASTCARD] == 1)
		{
			printf("�� ");
			resultCard[LASTCARD] = diaNum[rand() % 52];
			if (resultCard[LASTCARD] == 'T')
			{
				cout << "10" << '\n';
			}
			else
			{
				cout << resultCard[LASTCARD] << '\n';
			}
		}
		else if (openCard[LASTCARD] == 2)
		{
			printf("�� ");
			resultCard[LASTCARD] = spaceNum[rand() % 52];
			if (resultCard[LASTCARD] == 'T')
			{
				cout << "10" << '\n';
			}
			else
			{
				cout << resultCard[LASTCARD] << '\n';
			}
		}
		else
		{
			printf("�� ");
			resultCard[LASTCARD] = heartNum[rand() % 52];
			if (resultCard[LASTCARD] == 'T')
			{
				cout << "10" << '\n';
			}
			else
			{
				cout << resultCard[LASTCARD] << '\n';
			}
		}

		// ���� ��� �Ǻ�
		if (resultCard[LASTCARD] != 'A' && choice == 0 && resultCard[LASTCARD] > '7')
		{
			printf("������ϴ�.\n���� �ݾ� x2\n\n");
			myMoney += batMoney * 2;
		}
		else if (resultCard[LASTCARD] == 'A' || choice == 1 && resultCard[LASTCARD] < '7')
		{
			printf("������ϴ�.\n���� �ݾ� x2\n\n");
			myMoney += batMoney * 2;
		}
		else if (choice == 2 && resultCard[LASTCARD] == '7')
		{
			printf("������ ������ϴ�.\n���� �ݾ� x12\n\n");
			myMoney += batMoney * 12;
		}
		else
		{
			printf("Ʋ�Ƚ��ϴ�.\n���� �ݾ� ����\n\n");
			myMoney -= batMoney;
		}
		printf("���� ���� �ݾ� : %d\n", myMoney);
		Sleep(2000);
		system("cls");
	}
		
	
	printf("���� ����\n");
}
