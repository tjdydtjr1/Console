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

#define MAX_SIZE 13

void main()
{
	/*  -��  1 ~13������ ī��
		- �� 1 ~13������ ī��
		- ��  1 ~13������ ī��
		- ��  1 ~13������ ī��*/

	int cardNum[52] = { 0 };
	int temp = 0;
	int count = 0;

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
	const int endGame = 18;
	// ���� �Է�
	int batMoney = 0;

	count = 0;
	// ī�� �ٶ������ų� ������ ���� ��
	while (myMoney > 0 && count < endGame)
	{
		srand(time(NULL));
		// ī�带 �������� 3�� �̴´�.
		randNumA = rand() % 52 + 1;
		randNumB = rand() % 52 + 1;
		randNumC = rand() % 52 + 1;

		// �ߺ�����
		if (randNumA == randNumB)
		{
			randNumA = (rand() % 52) + 1;
		}
		if (randNumA == randNumB)
		{
			randNumC = (rand() % 52) + 1;
		}
		if (randNumC == randNumB)
		{
			randNumC = (rand() % 52) + 1;
		}
		

		if (cardNum[randNumA] < 14 && cardNum[randNumB] < 14 && cardNum[randNumC] < 14)
		{
			// ī�� 3���� 2�� ���� 1�� ����
			// A B ���� C ����
			printf("ù��° ī�� : %d, �ι�° ī�� : %d , ����° ī�� : ?\n", cardNum[randNumA], cardNum[randNumB]);

			// ���� �ϱ�
			printf("���� ������ : %d\n", myMoney);
			printf("���� �ݾ� : ");
			cin >> batMoney;

			cout << '\n';

			// A B C ���� ����
			printf("ù��° ī�� : %d, �ι�° ī�� : %d, ����° ī�� : %d\n", cardNum[randNumA], cardNum[randNumB], cardNum[randNumC]);

			// ���� ���
			//if(cardNum[randNumA])

			// ����� ī�� ����
			cardNum[randNumA] = 20;
			cardNum[randNumB] = 20;
			cardNum[randNumC] = 20;
		}
		else
		{
			for (int i = 0; i < arrSize; i++)
			{
				temp += cardNum[i];
			}

			if (temp > 980)
			{
				break;
			}

			temp = 0;
			continue;
		}

		Sleep(1000);
		system("cls");

		// ����Ƚ�� ����
		++count;
	}
}

		

	


	


