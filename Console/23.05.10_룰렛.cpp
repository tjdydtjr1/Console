/*
����2. ���Ըӽ�

- �ʱ� ������ : 100,000,000 (1��)

- 777���� ���� 3�� ���ý� ���ñݾ��� 12��

- 7�� ������ ���� ���� 3�� ���ý� ���ñݾ��� 5��

- ���� ���� 2�� ���ý� ���ñݾ��� 2��

- �� �ܿ��� ���ñݾ� �ұ�

�ʼ�:
1. �귿�� �����ϴ� ��� �ð�ȭ
2. ������ �ϰ� ���� �귿�� ������ ������ �귿�� �ڵ����� ��� �ݺ� �ȴ�.
3. ġƮ �ʼ� -> �귿�� ������ ���߸鼭 ���ڸ� �����ְ� ġƮ �Է�
�� ġƮ�� Ȱ��ȭ �Ǹ� ���� 3���� �Է� �޴´�. (EX: 777)
�� �������� �귿�� �õ��� �ǰ� 777�� ��÷�Ǵ°� Ȯ���� �� �ְ� �����

*/

#include <iostream>
#include <time.h>
#include <Windows.h>

using std::cout;
using std::cin;
using std::endl;

void main()
{
	int firstNum = rand() % 10;
	int secondNum = rand() % 10;
	int thirdNum = rand() % 10;

	int money = 100000000;
	int bat = 0;

	int userNum1 = 0;
	int userNum2 = 0;
	int userNum3 = 0;

	int stop = 0;

	while (money < 0)
	{
		printf("�귿 ����\n");
		printf("���� �ݾ� : %d\n", money);
		printf("���� �ݾ� : ");
		cin >> bat;

		cout << '\n' << '\n';
		printf("���� ���� �Է� : ");
		cin >> userNum1 >> userNum2 >> userNum3;

		while (userNum1 == 100)
		{
			printf(" ġƮ �Է� : ");
			cin >> firstNum >> secondNum >> thirdNum;
			break;
		}

		if ((userNum1 + userNum2 + userNum3) == (firstNum + secondNum + thirdNum))
		{
			if ((firstNum + secondNum + thirdNum) == 21)
			{
				money *= 12;
			}
			else
			{
				money *= 5;
			}
		}
		else if (userNum1 == firstNum && userNum2 == secondNum || userNum1 == firstNum && userNum3 == thirdNum || userNum2 == secondNum && thirdNum == thirdNum)
		{
			money *= 2;
		}
		else
		{
			money -= bat;
		}
	
		Sleep(2000);
		system("cls");

	}
}