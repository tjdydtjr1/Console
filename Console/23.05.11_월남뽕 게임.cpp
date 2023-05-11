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
#include <time.h>
#include <Windows.h>


using std::cout;
using std::cin;
using std::endl;

char Char(int num);

void main()
{
	/*  -��  1 ~13������ ī��
		- �� 1 ~13������ ī��
		- ��  1 ~13������ ī��
		- ��  1 ~13������ ī��*/

	int cardNum[52] = { 0 };
	int count = 0;

	// �ӽ� �����
	int tempA = 0;
	int tempB = 0;
	

	// �ݺ����� �ִ� ����
	const int arrSize = sizeof(cardNum) / sizeof(cardNum[0]);

	for (int i = 1; count < arrSize; ++i)
	{
		if (i > 13)
		{
			i = 1;
		}

		cardNum[count] = i;
		++count;
	}

	// ī�� �������� ���� ����
	int randNumA = 0;
	int randNumB = 0;
	int randNumC = 0;

	// ������
	int myMoney = 10000;

	// ���� ���� ī��Ʈ
	const int endGame = 51;
	// ���� �Է�
	int batMoney = 0;

	count = 0;
	// ī�� �ٶ������ų� ������ ���� ��
	while (myMoney > 0 || count < endGame)
	{
		srand(time(NULL));
		// ī�带 �������� 3�� �̴´�.
		randNumA = rand() % 17 + 1;
		randNumB = rand() % 18 + 17;
		randNumC = rand() % 18 + 34;
		
		if (cardNum[randNumA] > 14)
		{
			randNumA = rand() % 17 + 1;
		}
		if (cardNum[randNumA] > 14)
		{
			randNumB = rand() % 18 + 17;
		}
		if (cardNum[randNumA] > 14)
		{
			randNumB = rand() % 18 + 34;
		}

		if (cardNum[randNumA] < 14 && cardNum[randNumB] < 14 && cardNum[randNumC] < 14)
		{

			// ���ߢ��� 6 16 16
			// ġƮ�� ���� �����ֱ�
			if(cardNum[randNumA])
			printf("ġƮ\n");
			printf("\t      %s                %s                %s\n", (randNumA < 13) ? "��" : "��", (randNumB < 26) ? "��" : "��", (randNumC < 40) ? "��" : "��");
			cout << "ù��° ī�� : " << Char(cardNum[randNumA]) << ", " << "�ι�° ī�� : " << Char(cardNum[randNumB]) << ", " << "����° ī�� : " << Char(cardNum[randNumC]) << endl << endl;

			cout << '\n';

			// ī�� 3���� 2�� ���� 1�� ����
			// A B ���� C ����
			printf("\t      %s                %s                \n", (randNumA < 13) ? "��" : "��", (randNumB < 26) ? "��" : "��");

			cout << "ù��° ī�� : " << Char(cardNum[randNumA]) << ", " << "�ι�° ī�� : " << Char(cardNum[randNumB]) << ", " << "����° ī�� : ? \n";
			
			cout << '\n';

			// ���� �ϱ�
			printf("���� ������ : %d\n", myMoney);
			printf("���� �ݾ� : ");
			cin >> batMoney;

			cout << '\n';

			// A B C ���� ����
			printf("\t      %s                %s                %s\n", (randNumA < 13) ? "��" : "��", (randNumB < 26) ? "��" : "��", (randNumC < 40) ? "��" : "��");
			cout << "ù��° ī�� : " << Char(cardNum[randNumA]) << ", " << "�ι�° ī�� : " << Char(cardNum[randNumB]) << ", " << "����° ī�� : " << Char(cardNum[randNumC]) << endl;;

			cout << '\n';

			// ���� ��� ���̰��� 2�� �ƴϸ� ���ñݾ� ����
			if (cardNum[randNumA] < cardNum[randNumC] < cardNum[randNumB])
			{
				printf("�����Դϴ�.\n");
				printf("%d X2 ������ ����\n", batMoney);
				myMoney += batMoney;
				printf("���� ���� �ݾ� : %d\n", myMoney);

			}
			else if (cardNum[randNumB] < cardNum[randNumC] < cardNum[randNumA])
			{
				printf("�����Դϴ�.\n");
				printf("%d X2 ������ ����\n", batMoney);
				myMoney += batMoney * 2;
				printf("���� ���� �ݾ� : %d\n", myMoney);
			}
			else
			{
				printf("Ʋ�Ƚ��ϴ�.\n");
				printf("%d ������ ����\n", batMoney);
				myMoney -= batMoney;
				printf("���� ���� �ݾ� : %d\n", myMoney);

			}

			// ����� ī�� ����
			cardNum[randNumA] = 20;
			cardNum[randNumB] = 20;
			cardNum[randNumC] = 20;		
		}
		else
		{
			continue;
		}

		Sleep(3000);
		system("cls");

		// ����Ƚ�� ����
		count += 3;
	}
}

char Char(int num)
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
		return '10';
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
