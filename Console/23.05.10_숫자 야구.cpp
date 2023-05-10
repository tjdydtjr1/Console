/*
����1. ���� �߱�

- 0 ~ 9������ ���� �� ��ǻ�Ͱ� ���Ƿ� 3���� �̴´�.

- ��ǻ�Ͱ� ���� ���ڸ� �÷��̾ ���� ���� 3���� �����Ͽ� ���ڿ� �ڸ������� ���ߴ� ����

- ���� ������ ���ڰ� ��ǻ�� ���ڿ� ������ �ڸ����� �ٸ� ���
�� 1 ��(1B)

- ���� ������ ���ڰ� ��ǻ�� ���ڿ� ���� �ڸ������� ��ġ�� ���
�� 1 ��Ʈ����ũ(1S)

- ���� ������ ���ڰ� ��ǻ�� ���ڿ� ���� �ʰ� �ڸ����� ��ġ���� ������
�� 1 �ƿ�(1 Out)

- �̷��� �� �Ͽ� 3S�� ���� ��� ������� ������� ����� �����ָ� ���� ����

- �ʼ� : ġƮ O, �迭 x
*/

#include <iostream>
#include <time.h>
#include <Windows.h>

using std::cout;
using std::cin;
using std::endl;


void main()
{
	srand(time(NULL));

	int firstNum = rand() % 10;
	int secondNum = rand() % 10;
	int thirdNum = rand() % 10;
	
	// �ߺ�����
	if (firstNum == secondNum)
	{
		firstNum = rand() % 10;
	}
	if (firstNum == thirdNum)
	{
		thirdNum = rand() % 10;
	}
	if (thirdNum == secondNum)
	{
		thirdNum = rand() % 10;
	}
	
	int userNum1 = 0;
	int userNum2 = 0;
	int userNum3 = 0;
	
	int playCount = 1;

	while (true)
	{
		printf("ġƮ ��ȣ Ȯ�� : ");
		printf("%d %d %d\n\n", firstNum, secondNum, thirdNum);

		printf("���� �߱� ���� ����\n");
		printf("���� 3�ڸ��� �Է��ϼ���.\n");

		cin >> userNum1 >> userNum2 >> userNum3;

		printf("ù��° ���� : %d, �ι�° ���� : %d, ����° ���� : %d\n", userNum1, userNum2, userNum3);

		cout << '\n';

		if (firstNum == userNum1 && secondNum == userNum2 && thirdNum == userNum3)
		{
			printf("Ȩ��\n");
			printf("���� ����\n");
			printf("�÷��� Ƚ�� : %d\n", playCount);
			Sleep(2000);
			break;
		}
		else if((0 < userNum1 && userNum1 < 10) && (0 < userNum2 && userNum2 < 10) && (0 < userNum3 && userNum3 < 10))
		{
			// ù��° ��ȣ
			if (userNum1 == firstNum)
			{
				// 1s
				printf("1S ");
				Sleep(1000);
			}
			else if (userNum1 == secondNum || userNum1 == thirdNum)
			{
				// 1b
				printf("1B ");
				Sleep(1000);
			}
			else
			{
				// out
				printf("1 Out ");
				Sleep(1000);
			}

			// �ι�° ��ȣ
			if (userNum2 == secondNum)
			{
				// 1s
				printf("1S ");
				Sleep(1000);
			}
			else if (userNum2 == firstNum || userNum2 == thirdNum)
			{
				// 1b
				printf("1B ");
				Sleep(1000);
			}
			else
			{
				// out
				printf("1 Out ");
				Sleep(1000);
			}
			// 3��° ��ȣ
			if (userNum3 == thirdNum)
			{
				// 1s
				printf("1S ");
				Sleep(1000);
			}
			else if (userNum3 == secondNum || userNum3 == firstNum)
			{
				// 1b
				printf("1B ");
				Sleep(1000);
			}
			else
			{
				// out
				printf("1 Out ");
				Sleep(1000);
			}
		}
		else
		{
			printf("0 ~ 9 �� �ش��ϴ� ���ڸ� �Է��ϼ���\n");
			Sleep(1000);
		}

		++playCount;
		Sleep(2000);

		system("cls");
	}
}