/*
����2. ������ (Ÿ�� ����)

- ġƮ �ʼ�

- ��  1 ~ 13������ ī��
- �� 1 ~ 13������ ī��
- ��  1 ~ 13������ ī��
- ��  1 ~ 13������ ī��

������ 13�� -> �� 52��

- ����ó��
�� A -> 1
�� j -> 11
�� Q -> 12
�� K -> 13

- 52���� ī�带 �ּ� �ѹ� �������� �����ְ� �� �� ���� ���� 3�徿 �����´�.

- ���ʿ� ��ġ�� ������ ī�带 ���� �ּ� ���þ� �̻�(����)�� �ݾ��� �����Ѵ�.
- ���� �� ����° ī���� ���� �ռ� ���� �� ī�� ������ ���̿� �ִٸ� ���ñ��� 2��
	ȹ���Ͽ� ������ �߰�
- �ݴ��� �����ݿ��� ������ ��ŭ ���̳ʽ�

- �ʼ� : ������ ������ ���� ī��� ������ ����� �� ����.
*/

#include <iostream>
#include <Windows.h>
#include <time.h>

using std::cout;
using std::cin;
using std::endl;

int Char(char a);

void main()
{

	char cloverCard[13] = { 'A','2','3','4','5','6','7','8','9','T','J','Q','K' };
	char diaCard[13] = { 'A','2','3','4','5','6','7','8','9','T','J','Q','K' };
	char spaceCard[13] = { 'A','2','3','4','5','6','7','8','9','T','J','Q','K' };
	char heartCard[13] = { 'A','2','3','4','5','6','7','8','9','T','J','Q','K' };

	// dia0 ~ 12 space13 ~ 25 clover26 ~ 38 ...heart
	// ī��
	int openCard[3] = { 0 };
	char resultCard[3] = { 0 };
	int temp = 0;
	
	// ����
	int myMoney = 10000;
	int batMoney = 0;
	
	// ����� ī�� ī��Ʈ
	int count = 0;
	while (count < 51)
	{
		// ���� ����
		for (int i = 0; i < 3; ++i)
		{
			openCard[i] = rand() % 4;
		}

		for (int i = 0; i < 2; ++i)
		{
			if (openCard[i] == 0)
			{
			RE1:
				temp = rand() % 13;
				resultCard[i] = cloverCard[temp];
				if (resultCard[i] == '0')
				{
					++count;
					goto RE1;
				}

				printf("�� ");
				if (resultCard[i] == 'T')
				{
					cout << "10";
				}
				else
				{
					cout << resultCard[i];
				}
				cloverCard[temp] = '0';
			}
			else if (openCard[i] == 1)
			{
			RE2:

				resultCard[i] = diaCard[rand() % 13];
				if (resultCard[i] == '0')
				{
					++count;

					goto RE2;
				}

				printf("�� ");
				if (resultCard[i] == 'T')
				{
					cout << "10";
				}
				else
				{
					cout << resultCard[i] << endl;
				}
				diaCard[rand() % 13] = '0';

			}
			else if (openCard[i] == 2)
			{
			RE3:

				resultCard[i] = spaceCard[rand() % 13];
				if (resultCard[i] == '0')
				{
					++count;

					goto RE3;
				}

				printf("�� ");
				if (resultCard[i] == 'T')
				{
					cout << "10" << endl;;
				}
				else
				{
					cout << resultCard[i] << endl;
				}
				spaceCard[rand() % 13] = '0';

			}
			else
			{
			RE4:

				resultCard[i] = heartCard[rand() % 13];
				if (resultCard[i] == '0')
				{
					++count;

					goto RE4;
				}

				printf("�� ");
				if (resultCard[i] == 'T')
				{
					cout << "10" << endl;
				}
				else
				{
					cout << resultCard[i] << endl;
				}
				heartCard[rand() % 13] = '0';

			}
		}
		printf("%d\n", Char(resultCard[0]));
		printf("%d\n", Char(resultCard[1]));

		// =====
		
		Sleep(1000);

	}



}

int Char(char a)
{
	switch (a)
	{
	case 'A':
		return 0;
	case '2':
		return 2;
	case '3':
		return 3;
	case '4':
		return 4;
	case '5':
		return 5;
	case '6':
		return 6;
	case '7':
		return 7;
	case '8':
		return 8;
	case '9':
		return 9;
	case 'T':
		return 10;
	case 'J':
		return 11;
	case 'Q':
		return 12;
	case 'K':
		return 13;
	default:
		break;
	}
}