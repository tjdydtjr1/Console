#include <iostream>
#include <time.h>
#include <Windows.h>

using std::cout;
using std::cin;
using std::endl;


//����2.���� ����ȭ
//
//- ���ݱ��� ��� ������ �����Ѵ�.
//	����, �ݺ���, ���ǹ�, �Լ�, ���, ������, ����, �����
//- ��� ������ �ߴ��� ����ȭ ���ѿ´�.

// 
void TextColor(int font, int backGround);

namespace DOT
{
	void PrintCard(int num);
	void PrintVS();
}
//
void main()
{
	system("mode con:cols=300 lines=600");
	
	TextColor(15, 0);

	int userNum = 0;
	int randNum = 0;
	int count = 0;
	const int endPlay = 5;


	while (count < endPlay)
	{
		srand(time(NULL));
		randNum = rand() % 3;
		printf("ġƮ : %d\n", randNum);

		cout << '\n';

		printf("���� ����\n");
		printf("���� = 0, ���� = 1, �� = 2\n");
		printf("���ϴ� ī�带 ������. \n");

		cin >> userNum;

		cout << '\n' << '\n';
		

		if (userNum > 2 || userNum < 0)
		{
			printf("�ش��ϴ� ī�尡 �����ϴ�. \n");
			--count;
			system("cls");
		}
		else
		{
			if (userNum == 0)
			{
				printf("Player ī��\n\n");
				DOT::PrintCard(userNum);
				cout << '\n';

				DOT::PrintVS();
				Sleep(1000);
				cout << '\n';
				printf("���� ī��\n");
				DOT::PrintCard(randNum);
				
				cout << '\n';
				
				if (userNum == randNum)
				{
					printf("�����ϴ�.\n");
				}
				else if (randNum == 1)
				{
					printf("�̰���ϴ�.\n");
				}
				else
				{
					printf("�����ϴ�.\n");
				}
			}
			else if (userNum == 1)
			{
				printf("Player ī��\n");
				DOT::PrintCard(userNum);
				cout << '\n';

				DOT::PrintVS();
				Sleep(1000);
				cout << '\n';
				printf("���� ī��\n");
				DOT::PrintCard(randNum);

				if (userNum == randNum)
				{
					printf("�����ϴ�.\n");
				}
				else if (randNum == 0)
				{
					printf("�̰���ϴ�.\n");
				}
				else
				{
					printf("�����ϴ�.\n");
				}
			}
			else
			{
				printf("Player ī��\n");
				DOT::PrintCard(userNum);
				cout << '\n';

				DOT::PrintVS();
				Sleep(1000);
				cout << '\n';
				printf("���� ī��\n");
				DOT::PrintCard(randNum);

				if (userNum == randNum)
				{
					printf("�����ϴ�.\n");
				}
				else if (randNum == 1)
				{
					printf("�̰���ϴ�.\n");
				}
				else
				{
					printf("�����ϴ�.\n");
				}
			}
		}

		Sleep(5000);
		system("cls");
		++count;
	}

	printf("���� ���� \n");
		
}

void TextColor(int font, int backGround)
{
	int Color = font + backGround * 16;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color);
}

void DOT::PrintCard(int num)
{
	switch (num)
	{
	case 0:
	{

		//
		TextColor(0, 0);
		cout << "�ۡ�"; TextColor(7, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡ�"; TextColor(7, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡ�" << endl;
		cout << "�ۡۡ�"; TextColor(7, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡ�"; TextColor(7, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡ�" << endl;
		cout << "�ۡۡۡ�"; TextColor(7, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡ�"; TextColor(7, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡ�" << endl;
		cout << "�ۡۡۡۡ�"; TextColor(7, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡ�"; TextColor(7, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡ�" << endl;
		cout << "�ۡۡۡۡۡ�"; TextColor(7, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(7, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡ�" << endl;
		cout << "�ۡۡۡۡۡۡ�"; TextColor(7, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "��"; TextColor(7, 0); cout << "�ܡܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡ�" << endl;
		cout << "�ۡۡ�"; TextColor(4, 0); cout << "��"; TextColor(0, 0); cout << "��"; TextColor(4, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�"; TextColor(4, 0); cout << "�ܡܡ�"; TextColor(0, 0); cout << "�ۡ�"; TextColor(4, 0); cout << "��"; TextColor(0, 0); cout << "��"; TextColor(4, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡۡ�" << endl;
		cout << "�ۡ�"; TextColor(4, 0); cout << "��"; TextColor(0, 0); cout << "��"; TextColor(4, 0); cout << "��"; TextColor(0, 0); cout << "��"; TextColor(4, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(4, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "��"; TextColor(4, 0); cout << "��"; TextColor(0, 0); cout << "��"; TextColor(4, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡ�" << endl;
		cout << "�ۡ�"; TextColor(4, 0); cout << "��"; TextColor(0, 0); cout << "��"; TextColor(4, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�"; TextColor(4, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(4, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�"; TextColor(4, 0); cout << "��"; TextColor(0, 0); cout << "��"; TextColor(4, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡ�" << endl;
		cout << "�ۡ�"; TextColor(4, 0); cout << "��"; TextColor(0, 0); cout << "��"; TextColor(4, 0); cout << "��"; TextColor(0, 0); cout << "��"; TextColor(4, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(4, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "��"; TextColor(4, 0); cout << "��"; TextColor(0, 0); cout << "��"; TextColor(4, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡ�" << endl;
		cout << "�ۡۡ�"; cout << "��"; cout << "��"; cout << "��"; cout << "�ۡۡۡۡۡۡ�"; cout << "��"; cout << "��"; cout << "��"; cout << "�ۡۡۡۡ�" << endl;
		cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
		cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
		TextColor(15, 0);
	}
	break;
	case 1:
	{
		//
		TextColor(0, 0);
		cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
		cout << "�ۡ�"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡ�"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡ�" << endl;
		TextColor(15, 0);	cout << "�ܡ�"; TextColor(0, 0); cout << "��"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "��"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "��"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "��"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "��"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "��"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡ�" << endl;
		TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡ�"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡ�" << endl;
		TextColor(15, 0);	cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡ�"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡ�" << endl;
		TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�"; TextColor(15, 0); cout << "�ܡܡܡ�"; TextColor(0, 0); cout << "�ۡ�" << endl;
		TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡ�"; TextColor(15, 0); cout << "�ܡ�" << endl;
		cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡ�"; TextColor(15, 0); cout << "�ܡ�" << endl;
		cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡ�"; TextColor(15, 0); cout << "�ܡ�" << endl;
		TextColor(0, 0); cout << "��"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�" << endl;
		cout << "�ۡ�"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡ�"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡ�" << endl;
		cout << "�ۡۡ�"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡ�"; TextColor(15, 0); cout << "�ܡܡܡܡ�"; TextColor(0, 0); cout << "�ۡۡۡ�" << endl;
		cout << "�ۡۡ�"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡ�"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡ�" << endl;
		cout << "�ۡۡ�"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡ�"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡ�" << endl;
		cout << "�ۡۡ�"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡ�"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡ�" << endl;
		cout << "�ۡۡ�"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡ�"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡ�" << endl;
		cout << "�ۡۡ�"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡ�"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡ�" << endl;
		TextColor(15, 0);

	}
	break;
	case 2:
	{
		
		//
		TextColor(0, 0);
		cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
		cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
		cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡ�"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
		cout << "�ۡۡۡۡۡۡۡۡۡۡۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
		cout << "�ۡۡۡۡۡۡ�"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
		cout << "�ۡۡۡۡۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
		cout << "�ۡۡۡۡۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
		cout << "��"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
		TextColor(15, 0);	cout << "��"; TextColor(0, 0); cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
		TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
		cout << "��"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "��"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡ�"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡ�"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡ�"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡ�"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
		cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡ�" << endl;
		cout << "�ۡۡ�"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡ�" << endl;
		cout << "�ۡۡۡ�"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡ�" << endl;
		cout << "�ۡۡۡۡ�"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡ�" << endl;
		cout << "�ۡۡۡۡۡ�"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡ�"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
		cout << "�ۡۡۡۡۡ�"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡ�"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
		cout << "�ۡۡۡۡۡ�"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡ�"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
		TextColor(15, 0);


	}
	break;

	default:
	/*{
		printf("�ش��ϴ� ī�尡 �����ϴ�.\n");
	}*/
		break;
	}
}

void DOT::PrintVS()
{
	// VS
	TextColor(4, 0);
	cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡ�"; TextColor(4, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡ�"; TextColor(4, 0); cout << "�ܡܡܡܡܡ�" << endl;
	TextColor(0, 0); cout << "��"; TextColor(4, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡ�"; TextColor(4, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡ�"; TextColor(4, 0); cout << "�ܡܡܡܡ�"; TextColor(0, 0); cout << "�ۡۡۡ�" << endl;
	TextColor(0, 0); cout << "�ۡ�"; TextColor(4, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡ�"; TextColor(4, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡ�"; TextColor(4, 0); cout << "�ܡܡܡܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡ�" << endl;
	TextColor(0, 0); cout << "�ۡۡ�"; TextColor(4, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡ�"; TextColor(4, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡ�"; TextColor(4, 0); cout << "�ܡܡܡܡܡܡ�"; TextColor(0, 0); cout << "��" << endl;
	TextColor(0, 0); cout << "�ۡۡۡ�"; TextColor(4, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡ�"; TextColor(4, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡ�"; TextColor(4, 0); cout << "�ܡܡܡܡܡ�" << endl;
	TextColor(0, 0); cout << "�ۡۡۡۡ�"; TextColor(4, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(4, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡ�"; TextColor(4, 0); cout << "�ܡܡܡܡ�" << endl;
	TextColor(0, 0); cout << "�ۡۡۡۡۡ�"; TextColor(4, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "��"; TextColor(4, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡ�"; TextColor(4, 0); cout << "�ܡܡܡܡ�"; TextColor(0, 0); cout << "�ۡ�" << endl;
	TextColor(0, 0); cout << "�ۡۡۡۡۡۡ�"; TextColor(4, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡ�"; TextColor(4, 0); cout << "�ܡܡܡܡ�"; TextColor(0, 0); cout << "�ۡۡۡ�" << endl;

}

