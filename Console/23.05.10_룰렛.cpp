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

void TextColor(int font, int backGround);

// ��Ʈ ���
namespace DOT
{
	void RandomNum();
	void DotNumber(int num);
	void DotSuc(int num);
}

void main()
{
	system("mode con:cols=400 lines=600");
	
	srand(time(NULL));
	int firstNum = rand() % 10;
	int secondNum = rand() % 10;
	int thirdNum = rand() % 10;

	int money = 100000000;
	int bat = 0;

	int userNum1 = 0;
	int userNum2 = 0;
	int userNum3 = 0;
	
	while (money > 0)
	{
		printf("ġƮŰ ������ �Է� : 100\n");
		printf("���� ��ȣ : %d %d %d\n", firstNum, secondNum, thirdNum);

		DOT::DotNumber(firstNum);
		cout << '\n';
		DOT::DotNumber(secondNum);
		cout << '\n';
		DOT::DotNumber(thirdNum);

		cout << '\n' << '\n';

		printf("�귿 ����\n");
		printf("���� �ݾ� : %d\n", money);
		printf("���� �ݾ� : ");
		cin >> bat;

		cout << '\n' << '\n';
		printf("���� ���� �Է�\n");
		cin >> userNum1;
		printf("ù��° ���� : %d\n", userNum1);
		DOT::DotNumber(userNum1);
		cout << '\n';
		
		cin >> userNum2;
		printf("�ι�° ���� : %d\n", userNum2);
		DOT::DotNumber(userNum2);
		cout << '\n';
		cin >> userNum3;
		printf("����° ���� : %d\n", userNum3);
		DOT::DotNumber(userNum3);
		Sleep(1000);
		
		// �귿 ������
		DOT::RandomNum();
		//

		if (userNum1 == 100 || userNum2 == 100 || userNum3 == 100)
		{
			printf(" ġƮ �Է� : ");
			cin >> firstNum >> secondNum >> thirdNum;
			printf("����� ��ȣ : %d %d %d", firstNum, secondNum, thirdNum);
			DOT::DotNumber(firstNum);
			cout << '\n';
			DOT::DotNumber(secondNum);
			cout << '\n';
			DOT::DotNumber(thirdNum);
			cout << '\n';
			if (firstNum == secondNum == thirdNum)
			{
				DOT::DotSuc(firstNum);
			}
		}

		if ((userNum1 + userNum2 + userNum3) == (firstNum + secondNum + thirdNum))
		{
			if ((firstNum + secondNum + thirdNum) == 21)
			{
				printf("7 7 7 ��÷\n ���ñݾ� x 12\n");
				DOT::DotSuc(firstNum);
				money += bat * 12;
				printf("���� �ݾ� : %d\n", money);
			}
			else if(firstNum == userNum1 && secondNum == userNum2 && thirdNum == userNum3)
			{
				system("cls");
				printf("������ ���� 3��\n");
				DOT::DotNumber(userNum1);
				cout << '\n';
				DOT::DotNumber(userNum2);
				cout << '\n';
				DOT::DotNumber(userNum3);
				money += bat * 5;
				printf("���� �ݾ� : %d\n", money);
			}
		}
		else if (userNum1 == firstNum && userNum2 == secondNum || userNum1 == firstNum && userNum3 == thirdNum || userNum2 == secondNum && thirdNum == thirdNum)
		{
			printf("������ ���� 2��\n");
			DOT::DotNumber(firstNum);
			cout << '\n';
			DOT::DotNumber(secondNum);
			cout << '\n';
			DOT::DotNumber(thirdNum);
			money += bat * 2;
			printf("���� �ݾ� : %d\n", money);
		}
		else
		{
			printf("���� ��ȣ ���� ��\n");
			money -= bat;
			printf("���� �ݾ� : %d\n", money);
		}

		Sleep(5000);
		system("cls");
	}
}

void TextColor(int font, int backGround)
{
	int Color = font + backGround * 16;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color);
}

void DOT::DotNumber(int num)
{
	switch (num)
	{
	case 0:
	{
		// 0	
		cout << "�ܡܡܡܡ�" << endl;
		cout << "��"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "��" << endl;
		cout << "��"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "��" << endl;
		cout << "�ܡܡܡܡ�" << endl;

	}
	break;
	case 1:
	{
		// 1
		TextColor(0, 0); cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�" << endl;
		cout << "��"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡ�" << endl;
		TextColor(0, 0); cout << "��"; TextColor(0, 0); cout << "��"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�" << endl;
		cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�" << endl;
		TextColor(15, 0);	cout << "�ܡܡܡܡ�" << endl;

	}
	break;
	case 2:
	{
		// 2
		cout << "�ܡܡܡܡ�" << endl;
		TextColor(0, 0); cout << "�ۡۡۡ�"; TextColor(15, 0); cout << "��" << endl;
		TextColor(15, 0); cout << "�ܡܡܡܡ�" << endl;
		cout << "��"; TextColor(0, 0); cout << "�ۡۡۡ�" << endl;
		TextColor(15, 0); cout << "�ܡܡܡܡ�" << endl;
			
	}
	break;
	case 3:
	{
		// 3
		TextColor(15, 0);
		cout << "�ܡܡܡܡ�" << endl;
		TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "�ܡ�" << endl;
		cout << "�ܡܡܡܡ�" << endl;
		TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "�ܡ�" << endl;
		cout << "�ܡܡܡܡ�" << endl;
			
	}
	break;
	case 4:
	{
		TextColor(15, 0);
		cout << "��"; TextColor(0, 0); cout << "��"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�" << endl;
		TextColor(15, 0);	cout << "��"; TextColor(0, 0); cout << "��"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�" << endl;
		TextColor(15, 0); cout << "�ܡܡܡܡ�" << endl;
		TextColor(0, 0); cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�" << endl;
		cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�" << endl;
		TextColor(15, 0);


	}
	break;
	case 5:
	{
		TextColor(15, 0);
		cout << "�ܡܡܡܡ�" << endl;
		cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡ�" << endl;
		TextColor(15, 0); cout << "�ܡܡܡܡ�" << endl;
		TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "�ܡ�" << endl;
		cout << "�ܡܡܡܡ�" << endl;
		TextColor(15, 0);

	}
	break;
	case 6:
	{
		// 6
		TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "�ܡ�" << endl;
		TextColor(0, 0); cout << "��"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡ�" << endl;
		cout << "��"; TextColor(15, 0); cout << "�ܡܡ�"; TextColor(0, 0); cout << "��" << endl;
		TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "��" << endl;
		TextColor(0, 0); cout << "��"; TextColor(15, 0); cout << "�ܡܡ�"; TextColor(0, 0); cout << "��" << endl;
		TextColor(15, 0);

	}
	break;
	case 7:
	{
		TextColor(15, 0); cout << "�ܡܡܡܡ�" << endl;
		cout << "��"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "��" << endl;
		cout << "��"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "��" << endl;
		TextColor(0, 0); cout << "�ۡۡۡ�"; TextColor(15, 0); cout << "��" << endl;
		TextColor(0, 0); cout << "�ۡۡۡ�"; TextColor(15, 0); cout << "��" << endl;
		TextColor(15, 0);

			
	}
	break;
	case 8:
	{
		// 8
		TextColor(15, 0); cout << "�ܡܡܡܡ�" << endl;
		cout << "��"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "��" << endl;
		cout << "�ܡܡܡܡ�" << endl;
		cout << "��"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "��" << endl;
		cout << "�ܡܡܡܡ�" << endl;
		TextColor(15, 0);

			
	}
	break;
	case 9:
	{
		// 9
		TextColor(15, 0); cout << "�ܡܡܡܡ�" << endl;
		cout << "��"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "��" << endl;
		cout << "�ܡܡܡܡ�" << endl;
		TextColor(0, 0); cout << "�ۡۡۡ�"; TextColor(15, 0); cout << "��" << endl;
		TextColor(0, 0); cout << "�ۡۡۡ�"; TextColor(15, 0); cout << "��" << endl;
		TextColor(15, 0);

			
	}
	break;


	default:
		break;
	}

}

void DOT::RandomNum()
{
	int randNum = -1;

	while (true)
	{
		if (randNum < 9)
		{
			randNum += 1;
		}
		else
		{
			randNum = 0;
		}
		switch (randNum)
		{
		case 0:
		{
			TextColor(15, 0);
			// 0	
			cout << "�ܡܡܡܡ�"; cout << "�ܡܡܡܡ�"; cout << "�ܡܡܡܡ�" << endl;
			cout << "��"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "��"; cout << "��"; TextColor(0, 0); cout << "�ۡۡۡ�"; TextColor(15, 0); cout << "��" << endl;
			cout << "��"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "��"; cout << "��"; TextColor(0, 0); cout << "�ۡۡۡ�"; TextColor(15, 0); cout << "��" << endl;
			cout << "�ܡܡܡܡ�"; cout << "�ܡܡܡܡ�"; cout << "�ܡܡܡܡ�" << endl;
			Sleep(200);
			system("cls");
		}
		break;
		case 1:
		{
			// 1
			/*TextColor(0, 0); cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�" << endl;
			cout << "��"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡ�" << endl;
			TextColor(0, 0); cout << "��"; TextColor(0, 0); cout << "��"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�" << endl;
			cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�" << endl;
			TextColor(15, 0);	cout << "�ܡܡܡܡ�" << endl;
			*/
			// 1
			TextColor(0, 0); cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�"; TextColor(0, 0); cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�"; TextColor(0, 0); cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�" << endl;
			cout << "��"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡ�"; cout << "��"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡ�"; cout << "��"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡ�" << endl;
			TextColor(0, 0); cout << "��"; TextColor(0, 0); cout << "��"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�"; TextColor(0, 0); cout << "��"; TextColor(0, 0); cout << "��"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�"; TextColor(0, 0); cout << "��"; TextColor(0, 0); cout << "��"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�" << endl;
			cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�"; cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�"; cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�" << endl;
			TextColor(15, 0);	cout << "�ܡܡܡܡ�"; TextColor(15, 0);	cout << "�ܡܡܡܡ�"; TextColor(15, 0);	cout << "�ܡܡܡܡ�" << endl;

			
			Sleep(200);
			system("cls");
		}
		break;
		case 2:
		{
			// 2
			/*cout << "�ܡܡܡܡ�" << endl;
			TextColor(0, 0); cout << "�ۡۡۡ�"; TextColor(15, 0); cout << "��" << endl;
			TextColor(15, 0); cout << "�ܡܡܡܡ�" << endl;
			cout << "��"; TextColor(0, 0); cout << "�ۡۡۡ�" << endl;
			TextColor(15, 0); cout << "�ܡܡܡܡ�" << endl;
			*/
			TextColor(15, 0);
			cout << "�ܡܡܡܡ�"; cout << "�ܡܡܡܡ�"; cout << "�ܡܡܡܡ�" << endl;
			TextColor(0, 0); cout << "�ۡۡۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡ�"; TextColor(15, 0); cout << "��" << endl;
			TextColor(15, 0); cout << "�ܡܡܡܡ�"; TextColor(15, 0); cout << "�ܡܡܡܡ�"; TextColor(15, 0); cout << "�ܡܡܡܡ�" << endl;
			cout << "��"; TextColor(0, 0); cout << "�ۡۡۡ�"; cout << "��"; TextColor(0, 0); cout << "�ۡۡۡ�"; cout << "��"; TextColor(0, 0); cout << "�ۡۡۡ�" << endl;
			TextColor(15, 0); cout << "�ܡܡܡܡ�"; TextColor(15, 0); cout << "�ܡܡܡܡ�"; TextColor(15, 0); cout << "�ܡܡܡܡ�" << endl;


			Sleep(200);
			system("cls");
			
		}
		break;
		case 3:
		{
			// 3
			/*cout << "�ܡܡܡܡ�" << endl;
			TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "�ܡ�" << endl;
			cout << "�ܡܡܡܡ�" << endl;
			TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "�ܡ�" << endl;
			cout << "�ܡܡܡܡ�" << endl;
			*/
			TextColor(15, 0);
			cout << "�ܡܡܡܡ�"; cout << "�ܡܡܡܡ�"; cout << "�ܡܡܡܡ�" << endl;
			TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "�ܡ�" << endl;
			cout << "�ܡܡܡܡ�"; cout << "�ܡܡܡܡ�"; cout << "�ܡܡܡܡ�" << endl;
			TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "�ܡ�" << endl;
			cout << "�ܡܡܡܡ�"; cout << "�ܡܡܡܡ�"; cout << "�ܡܡܡܡ�" << endl;

			
			Sleep(200);
			system("cls");
		}
		break;
		case 4:
		{
			// 4
			TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "��"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "��"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "��"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�" << endl;
			TextColor(15, 0);	cout << "��"; TextColor(0, 0); cout << "��"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�"; TextColor(15, 0);	cout << "��"; TextColor(0, 0); cout << "��"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�"; TextColor(15, 0);	cout << "��"; TextColor(0, 0); cout << "��"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�" << endl;
			TextColor(15, 0); cout << "�ܡܡܡܡ�"; TextColor(15, 0); cout << "�ܡܡܡܡ�"; TextColor(15, 0); cout << "�ܡܡܡܡ�" << endl;
			TextColor(0, 0); cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�"; TextColor(0, 0); cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�"; TextColor(0, 0); cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�" << endl;
			cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�"; cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�"; cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�" << endl;
			TextColor(15, 0);
			Sleep(200);
			system("cls");
		}
		break;
		case 5:
		{
			// 5
			/*TextColor(15, 0);
			cout << "�ܡܡܡܡ�" << endl;
			cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡ�" << endl;
			TextColor(15, 0); cout << "�ܡܡܡܡ�" << endl;
			TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "�ܡ�" << endl;
			cout << "�ܡܡܡܡ�" << endl;*/

			TextColor(15, 0);
			cout << "�ܡܡܡܡ�"; cout << "�ܡܡܡܡ�"; cout << "�ܡܡܡܡ�" << endl;
			cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡ�"; cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡ�"; cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡ�" << endl;
			TextColor(15, 0); cout << "�ܡܡܡܡ�"; TextColor(15, 0); cout << "�ܡܡܡܡ�"; TextColor(15, 0); cout << "�ܡܡܡܡ�" << endl;
			TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "�ܡ�" << endl;
			cout << "�ܡܡܡܡ�"; cout << "�ܡܡܡܡ�"; cout << "�ܡܡܡܡ�" << endl;
			
			Sleep(200);
			system("cls");

		}
		break;
		case 6:
		{
			// 6
			/*TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "�ܡ�" << endl;
			TextColor(0, 0); cout << "��"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡ�" << endl;
			cout << "��"; TextColor(15, 0); cout << "�ܡܡ�"; TextColor(0, 0); cout << "��" << endl;
			TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "��" << endl;
			TextColor(0, 0); cout << "��"; TextColor(15, 0); cout << "�ܡܡ�"; TextColor(0, 0); cout << "��" << endl;
			*/
			
			TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "�ܡ�" << endl;
			TextColor(0, 0); cout << "��"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡ�"; TextColor(0, 0); cout << "��"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡ�"; TextColor(0, 0); cout << "��"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡ�" << endl;
			cout << "��"; TextColor(15, 0); cout << "�ܡܡ�"; TextColor(0, 0); cout << "��"; cout << "��"; TextColor(15, 0); cout << "�ܡܡ�"; TextColor(0, 0); cout << "��"; cout << "��"; TextColor(15, 0); cout << "�ܡܡ�"; TextColor(0, 0); cout << "��" << endl;
			TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "��"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "��"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "��" << endl;
			TextColor(0, 0); cout << "��"; TextColor(15, 0); cout << "�ܡܡ�"; TextColor(0, 0); cout << "��"; TextColor(0, 0); cout << "��"; TextColor(15, 0); cout << "�ܡܡ�"; TextColor(0, 0); cout << "��"; TextColor(0, 0); cout << "��"; TextColor(15, 0); cout << "�ܡܡ�"; TextColor(0, 0); cout << "��" << endl;
			TextColor(15, 0);

			Sleep(200);
			system("cls");
		}
		break;
		case 7:
		{
			// 7
			/*TextColor(15, 0); cout << "�ܡܡܡܡ�" << endl;
			cout << "��"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "��" << endl;
			cout << "��"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "��" << endl;
			TextColor(0, 0); cout << "�ۡۡۡ�"; TextColor(15, 0); cout << "��" << endl;
			TextColor(0, 0); cout << "�ۡۡۡ�"; TextColor(15, 0); cout << "��" << endl;
			*/
			
			TextColor(15, 0); cout << "�ܡܡܡܡ�"; TextColor(15, 0); cout << "�ܡܡܡܡ�"; TextColor(15, 0); cout << "�ܡܡܡܡ�" << endl;
			cout << "��"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "��"; cout << "��"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "��"; cout << "��"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "��" << endl;
			cout << "��"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "��"; cout << "��"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "��"; cout << "��"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "��" << endl;
			TextColor(0, 0); cout << "�ۡۡۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡ�"; TextColor(15, 0); cout << "��" << endl;
			TextColor(0, 0); cout << "�ۡۡۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡ�"; TextColor(15, 0); cout << "��" << endl;
			TextColor(15, 0);


			Sleep(200);
			system("cls");
		}
		break;
		case 8:
		{
			// 8
			/*TextColor(15, 0); cout << "�ܡܡܡܡ�" << endl;
			cout << "��"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "��" << endl;
			cout << "�ܡܡܡܡ�" << endl;
			cout << "��"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "��" << endl;
			cout << "�ܡܡܡܡ�" << endl;
			*/
			
			TextColor(15, 0); cout << "�ܡܡܡܡ�"; TextColor(15, 0); cout << "�ܡܡܡܡ�"; TextColor(15, 0); cout << "�ܡܡܡܡ�" << endl;
			cout << "��"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "��"; cout << "��"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "��"; cout << "��"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "��" << endl;
			cout << "�ܡܡܡܡ�"; cout << "�ܡܡܡܡ�"; cout << "�ܡܡܡܡ�" << endl;
			cout << "��"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "��"; cout << "��"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "��"; cout << "��"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "��" << endl;
			cout << "�ܡܡܡܡ�"; cout << "�ܡܡܡܡ�"; cout << "�ܡܡܡܡ�" << endl;
			TextColor(15, 0);


			Sleep(200);
			system("cls");
		}
		break;
		case 9:
		{
			// 9
			/*TextColor(15, 0); cout << "�ܡܡܡܡ�" << endl;
			cout << "��"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "��" << endl;
			cout << "�ܡܡܡܡ�" << endl;
			TextColor(0, 0); cout << "�ۡۡۡ�"; TextColor(15, 0); cout << "��" << endl;
			TextColor(0, 0); cout << "�ۡۡۡ�"; TextColor(15, 0); cout << "��" << endl;
			*/
			
			TextColor(15, 0); cout << "�ܡܡܡܡ�"; TextColor(15, 0); cout << "�ܡܡܡܡ�"; TextColor(15, 0); cout << "�ܡܡܡܡ�" << endl;
			cout << "��"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "��"; cout << "��"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "��"; cout << "��"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "��" << endl;
			cout << "�ܡܡܡܡ�"; cout << "�ܡܡܡܡ�"; cout << "�ܡܡܡܡ�" << endl;
			TextColor(0, 0); cout << "�ۡۡۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡ�"; TextColor(15, 0); cout << "��" << endl;
			TextColor(0, 0); cout << "�ۡۡۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡ�"; TextColor(15, 0); cout << "��" << endl;
			TextColor(15, 0);


			Sleep(200);
			system("cls");
		}
		break;
		default:
			break;
		}
	}	
}

void DOT::DotSuc(int num)
{
	switch (num)
	{
	case 0:
	{
		TextColor(15, 0);
		// 0	
		cout << "�ܡܡܡܡ�"; cout << "�ܡܡܡܡ�"; cout << "�ܡܡܡܡ�" << endl;
		cout << "��"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "��"; cout << "��"; TextColor(0, 0); cout << "�ۡۡۡ�"; TextColor(15, 0); cout << "��" << endl;
		cout << "��"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "��"; cout << "��"; TextColor(0, 0); cout << "�ۡۡۡ�"; TextColor(15, 0); cout << "��" << endl;
		cout << "�ܡܡܡܡ�"; cout << "�ܡܡܡܡ�"; cout << "�ܡܡܡܡ�" << endl;
		TextColor(15, 0);

		Sleep(2000);
		system("cls");
	}
	break;
	case 1:
	{
		// 1
		/*TextColor(0, 0); cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�" << endl;
		cout << "��"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡ�" << endl;
		TextColor(0, 0); cout << "��"; TextColor(0, 0); cout << "��"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�" << endl;
		cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�" << endl;
		TextColor(15, 0);	cout << "�ܡܡܡܡ�" << endl;
		*/
		// 1
		TextColor(0, 0); cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�"; TextColor(0, 0); cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�"; TextColor(0, 0); cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�" << endl;
		cout << "��"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡ�"; cout << "��"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡ�"; cout << "��"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡ�" << endl;
		TextColor(0, 0); cout << "��"; TextColor(0, 0); cout << "��"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�"; TextColor(0, 0); cout << "��"; TextColor(0, 0); cout << "��"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�"; TextColor(0, 0); cout << "��"; TextColor(0, 0); cout << "��"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�" << endl;
		cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�"; cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�"; cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�" << endl;
		TextColor(15, 0);	cout << "�ܡܡܡܡ�"; TextColor(15, 0);	cout << "�ܡܡܡܡ�"; TextColor(15, 0);	cout << "�ܡܡܡܡ�" << endl;
		TextColor(15, 0);


		Sleep(2000);
		system("cls");
	}
	break;
	case 2:
	{
		// 2
		/*cout << "�ܡܡܡܡ�" << endl;
		TextColor(0, 0); cout << "�ۡۡۡ�"; TextColor(15, 0); cout << "��" << endl;
		TextColor(15, 0); cout << "�ܡܡܡܡ�" << endl;
		cout << "��"; TextColor(0, 0); cout << "�ۡۡۡ�" << endl;
		TextColor(15, 0); cout << "�ܡܡܡܡ�" << endl;
		*/
		TextColor(15, 0);
		cout << "�ܡܡܡܡ�"; cout << "�ܡܡܡܡ�"; cout << "�ܡܡܡܡ�" << endl;
		TextColor(0, 0); cout << "�ۡۡۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡ�"; TextColor(15, 0); cout << "��" << endl;
		TextColor(15, 0); cout << "�ܡܡܡܡ�"; TextColor(15, 0); cout << "�ܡܡܡܡ�"; TextColor(15, 0); cout << "�ܡܡܡܡ�" << endl;
		cout << "��"; TextColor(0, 0); cout << "�ۡۡۡ�"; cout << "��"; TextColor(0, 0); cout << "�ۡۡۡ�"; cout << "��"; TextColor(0, 0); cout << "�ۡۡۡ�" << endl;
		TextColor(15, 0); cout << "�ܡܡܡܡ�"; TextColor(15, 0); cout << "�ܡܡܡܡ�"; TextColor(15, 0); cout << "�ܡܡܡܡ�" << endl;
		TextColor(15, 0);


		Sleep(2000);
		system("cls");

	}
	break;
	case 3:
	{
		// 3
		/*cout << "�ܡܡܡܡ�" << endl;
		TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "�ܡ�" << endl;
		cout << "�ܡܡܡܡ�" << endl;
		TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "�ܡ�" << endl;
		cout << "�ܡܡܡܡ�" << endl;
		*/
		TextColor(15, 0);
		cout << "�ܡܡܡܡ�"; cout << "�ܡܡܡܡ�"; cout << "�ܡܡܡܡ�" << endl;
		TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "�ܡ�" << endl;
		cout << "�ܡܡܡܡ�"; cout << "�ܡܡܡܡ�"; cout << "�ܡܡܡܡ�" << endl;
		TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "�ܡ�" << endl;
		cout << "�ܡܡܡܡ�"; cout << "�ܡܡܡܡ�"; cout << "�ܡܡܡܡ�" << endl;
		TextColor(15, 0);


		Sleep(2000);
		system("cls");
	}
	break;
	case 4:
	{
		// 4
		TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "��"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "��"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "��"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�" << endl;
		TextColor(15, 0);	cout << "��"; TextColor(0, 0); cout << "��"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�"; TextColor(15, 0);	cout << "��"; TextColor(0, 0); cout << "��"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�"; TextColor(15, 0);	cout << "��"; TextColor(0, 0); cout << "��"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�" << endl;
		TextColor(15, 0); cout << "�ܡܡܡܡ�"; TextColor(15, 0); cout << "�ܡܡܡܡ�"; TextColor(15, 0); cout << "�ܡܡܡܡ�" << endl;
		TextColor(0, 0); cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�"; TextColor(0, 0); cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�"; TextColor(0, 0); cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�" << endl;
		cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�"; cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�"; cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�" << endl;
		TextColor(15, 0);

		Sleep(2000);
		system("cls");
	}
	break;
	case 5:
	{
		// 5
		/*TextColor(15, 0);
		cout << "�ܡܡܡܡ�" << endl;
		cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡ�" << endl;
		TextColor(15, 0); cout << "�ܡܡܡܡ�" << endl;
		TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "�ܡ�" << endl;
		cout << "�ܡܡܡܡ�" << endl;*/

		TextColor(15, 0);
		cout << "�ܡܡܡܡ�"; cout << "�ܡܡܡܡ�"; cout << "�ܡܡܡܡ�" << endl;
		cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡ�"; cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡ�"; cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡ�" << endl;
		TextColor(15, 0); cout << "�ܡܡܡܡ�"; TextColor(15, 0); cout << "�ܡܡܡܡ�"; TextColor(15, 0); cout << "�ܡܡܡܡ�" << endl;
		TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "�ܡ�" << endl;
		cout << "�ܡܡܡܡ�"; cout << "�ܡܡܡܡ�"; cout << "�ܡܡܡܡ�" << endl;
		TextColor(15, 0);

		Sleep(2000);
		system("cls");

	}
	break;
	case 6:
	{
		// 6
		/*TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "�ܡ�" << endl;
		TextColor(0, 0); cout << "��"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡ�" << endl;
		cout << "��"; TextColor(15, 0); cout << "�ܡܡ�"; TextColor(0, 0); cout << "��" << endl;
		TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "��" << endl;
		TextColor(0, 0); cout << "��"; TextColor(15, 0); cout << "�ܡܡ�"; TextColor(0, 0); cout << "��" << endl;
		*/

		TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "�ܡ�" << endl;
		TextColor(0, 0); cout << "��"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡ�"; TextColor(0, 0); cout << "��"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡ�"; TextColor(0, 0); cout << "��"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡ�" << endl;
		cout << "��"; TextColor(15, 0); cout << "�ܡܡ�"; TextColor(0, 0); cout << "��"; cout << "��"; TextColor(15, 0); cout << "�ܡܡ�"; TextColor(0, 0); cout << "��"; cout << "��"; TextColor(15, 0); cout << "�ܡܡ�"; TextColor(0, 0); cout << "��" << endl;
		TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "��"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "��"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "��" << endl;
		TextColor(0, 0); cout << "��"; TextColor(15, 0); cout << "�ܡܡ�"; TextColor(0, 0); cout << "��"; TextColor(0, 0); cout << "��"; TextColor(15, 0); cout << "�ܡܡ�"; TextColor(0, 0); cout << "��"; TextColor(0, 0); cout << "��"; TextColor(15, 0); cout << "�ܡܡ�"; TextColor(0, 0); cout << "��" << endl;
		TextColor(15, 0);


		Sleep(2000);
		system("cls");
	}
	break;
	case 7:
	{
		// 7
		/*TextColor(15, 0); cout << "�ܡܡܡܡ�" << endl;
		cout << "��"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "��" << endl;
		cout << "��"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "��" << endl;
		TextColor(0, 0); cout << "�ۡۡۡ�"; TextColor(15, 0); cout << "��" << endl;
		TextColor(0, 0); cout << "�ۡۡۡ�"; TextColor(15, 0); cout << "��" << endl;
		*/

		TextColor(15, 0); cout << "�ܡܡܡܡ�"; TextColor(15, 0); cout << "�ܡܡܡܡ�"; TextColor(15, 0); cout << "�ܡܡܡܡ�" << endl;
		cout << "��"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "��"; cout << "��"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "��"; cout << "��"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "��" << endl;
		cout << "��"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "��"; cout << "��"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "��"; cout << "��"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "��" << endl;
		TextColor(0, 0); cout << "�ۡۡۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡ�"; TextColor(15, 0); cout << "��" << endl;
		TextColor(0, 0); cout << "�ۡۡۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡ�"; TextColor(15, 0); cout << "��" << endl;
		TextColor(15, 0);


		Sleep(2000);
		system("cls");
	}
	break;
	case 8:
	{
		// 8
		/*TextColor(15, 0); cout << "�ܡܡܡܡ�" << endl;
		cout << "��"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "��" << endl;
		cout << "�ܡܡܡܡ�" << endl;
		cout << "��"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "��" << endl;
		cout << "�ܡܡܡܡ�" << endl;
		*/

		TextColor(15, 0); cout << "�ܡܡܡܡ�"; TextColor(15, 0); cout << "�ܡܡܡܡ�"; TextColor(15, 0); cout << "�ܡܡܡܡ�" << endl;
		cout << "��"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "��"; cout << "��"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "��"; cout << "��"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "��" << endl;
		cout << "�ܡܡܡܡ�"; cout << "�ܡܡܡܡ�"; cout << "�ܡܡܡܡ�" << endl;
		cout << "��"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "��"; cout << "��"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "��"; cout << "��"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "��" << endl;
		cout << "�ܡܡܡܡ�"; cout << "�ܡܡܡܡ�"; cout << "�ܡܡܡܡ�" << endl;
		TextColor(15, 0);


		Sleep(2000);
		system("cls");
	}
	break;
	case 9:
	{
		// 9
		/*TextColor(15, 0); cout << "�ܡܡܡܡ�" << endl;
		cout << "��"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "��" << endl;
		cout << "�ܡܡܡܡ�" << endl;
		TextColor(0, 0); cout << "�ۡۡۡ�"; TextColor(15, 0); cout << "��" << endl;
		TextColor(0, 0); cout << "�ۡۡۡ�"; TextColor(15, 0); cout << "��" << endl;
		*/

		TextColor(15, 0); cout << "�ܡܡܡܡ�"; TextColor(15, 0); cout << "�ܡܡܡܡ�"; TextColor(15, 0); cout << "�ܡܡܡܡ�" << endl;
		cout << "��"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "��"; cout << "��"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "��"; cout << "��"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "��" << endl;
		cout << "�ܡܡܡܡ�"; cout << "�ܡܡܡܡ�"; cout << "�ܡܡܡܡ�" << endl;
		TextColor(0, 0); cout << "�ۡۡۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡ�"; TextColor(15, 0); cout << "��" << endl;
		TextColor(0, 0); cout << "�ۡۡۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡ�"; TextColor(15, 0); cout << "��" << endl;
		TextColor(15, 0);


		Sleep(2000);
		system("cls");
	}
	break;
	default:
		break;
	}
}
