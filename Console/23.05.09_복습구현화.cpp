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
void PrintDot(int num);
//
void main()
{
	/*int userNum = 0;
	int randNum = 0;
	int count = 0;
	const int endGame = 5;


	while (count < endGame)
	{
		srand(time(NULL));
		randNum = rand() % 3;
		printf("ġƮ : %d\n", randNum);

		cout << '\n';

		printf("���� ����\n");
		printf("���� = 0, ���� = 1, �� = 2\n");
		printf("���ϴ� ī�带 ������. \n");

		cin >> userNum;

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

		Sleep(2000);
		system("cls");
		++count;
	}

	printf("���� ���� \n");*/
	// �ܡ�
	//cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡܡܡܡܡܡܡܡܡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	//cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡܡܡܡܡܡܡܡܡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	//cout << "�ۡۡۡۡۡۡۡܡܡܡܡܡܡܡܡܡܡܡۡۡۡܡܡܡܡܡܡܡܡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	//cout << "�ۡۡۡۡۡۡۡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	//cout << "�ۡۡۡۡۡۡۡܡܡܡܡܡܡܡܡܡܡܡܡܡܡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	//cout << "�ۡۡۡۡۡۡۡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	//cout << "�ۡۡۡۡۡۡۡܡܡܡܡܡܡܡܡܡܡܡۡۡۡܡܡܡܡܡܡܡܡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	//cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡܡܡܡܡܡܡܡܡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	//cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡܡܡܡܡܡܡܡܡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	//cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;



	system("mode con:cols=200 lines=300");




	// �ʡᤱ
	

	//�� ����
	//TextColor(0, 0);
	//cout << "�ۡ�"; TextColor(7, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡ�"; TextColor(7, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡ�" << endl;
	//cout << "�ۡۡ�"; TextColor(7, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡ�"; TextColor(7, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡ�" << endl;
	//cout << "�ۡۡۡ�"; TextColor(7, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡ�"; TextColor(7, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡ�" << endl;
	//cout << "�ۡۡۡۡ�"; TextColor(7, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡ�"; TextColor(7, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡ�" << endl;
	//cout << "�ۡۡۡۡۡ�"; TextColor(7, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(7, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡ�" << endl;
	//cout << "�ۡۡۡۡۡۡ�"; TextColor(7, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "��"; TextColor(7, 0); cout << "�ܡܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡ�" << endl;
	//cout << "�ۡۡ�"; TextColor(4, 0); cout << "��"; TextColor(0, 0); cout << "��"; TextColor(4, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�"; TextColor(4, 0); cout << "�ܡܡ�"; TextColor(0, 0); cout << "�ۡ�"; TextColor(4, 0); cout << "��"; TextColor(0, 0); cout << "��"; TextColor(4, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡۡ�" << endl;
	//cout << "�ۡ�"; TextColor(4, 0); cout << "��"; TextColor(0, 0); cout << "��"; TextColor(4, 0); cout << "��"; TextColor(0, 0); cout << "��"; TextColor(4, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(4, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "��"; TextColor(4, 0); cout << "��"; TextColor(0, 0); cout << "��"; TextColor(4, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡ�" << endl;
	//cout << "�ۡ�"; TextColor(4, 0); cout << "��"; TextColor(0, 0); cout << "��"; TextColor(4, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�"; TextColor(4, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(4, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�"; TextColor(4, 0); cout << "��"; TextColor(0, 0); cout << "��"; TextColor(4, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡ�" << endl;
	//cout << "�ۡ�"; TextColor(4, 0); cout << "��"; TextColor(0, 0); cout << "��"; TextColor(4, 0); cout << "��"; TextColor(0, 0); cout << "��"; TextColor(4, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(4, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "��"; TextColor(4, 0); cout << "��"; TextColor(0, 0); cout << "��"; TextColor(4, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡ�" << endl;
	//cout << "�ۡۡ�"; cout << "��"; cout << "��"; cout << "��"; cout << "�ۡۡۡۡۡۡ�"; cout << "��"; cout << "��"; cout << "��"; cout << "�ۡۡۡۡ�" << endl;
	//cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	//cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	
	// ���� �ܡ�
	//cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	//cout << "�ۡۡܡܡۡۡۡܡܡۡۡۡܡܡۡۡۡۡܡܡۡۡۡۡ�" << endl;
	//cout << "�ܡܡۡܡܡۡܡۡۡܡۡܡۡܡܡۡܡܡۡܡܡۡۡۡ�" << endl;
	//cout << "�ܡܡۡۡܡܡۡۡۡܡܡۡۡۡܡܡۡۡۡܡܡۡۡۡ�" << endl;
	//cout << "�ܡܡۡۡܡܡۡۡۡܡܡۡۡۡܡܡۡۡۡܡܡۡۡۡ�" << endl;
	//cout << "�ܡܡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡܡܡܡܡۡ�" << endl;
	//cout << "�ܡܡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡܡܡۡۡܡ�" << endl;
	//cout << "�ܡܡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡܡܡۡۡܡ�" << endl;
	//cout << "�ܡܡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡܡܡۡۡܡ�" << endl;
	//cout << "�ۡܡܡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡܡܡۡۡܡۡ�" << endl;
	//cout << "�ۡۡܡܡۡۡۡۡۡۡۡۡۡۡۡۡۡܡܡۡۡܡۡۡ�" << endl;
	//cout << "�ۡۡۡܡܡۡۡۡۡۡۡۡۡۡۡۡܡܡܡܡܡۡۡۡ�" << endl;
	//cout << "�ۡۡۡܡܡۡۡۡۡۡۡۡۡۡۡۡܡܡۡۡۡۡۡۡ�" << endl;
	//cout << "�ۡۡۡܡܡۡۡۡۡۡۡۡۡۡۡۡܡܡۡۡۡۡۡۡ�" << endl;
	//cout << "�ۡۡۡܡܡۡۡۡۡۡۡۡۡۡۡۡܡܡۡۡۡۡۡۡ�" << endl;
	//cout << "�ۡۡۡܡܡۡۡۡۡۡۡۡۡۡۡۡܡܡۡۡۡۡۡۡ�" << endl;
	//cout << "�ۡۡۡܡܡۡۡۡۡۡۡۡۡۡۡۡܡܡۡۡۡۡۡۡ�" << endl;
	
	// ��
	cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡܡܡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡܡۡۡܡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡܡܡۡۡۡܡۡۡܡۡۡۡܡܡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡܡۡۡܡۡۡܡۡۡܡۡۡܡۡۡܡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡܡۡۡܡۡۡܡۡۡܡۡۡܡۡۡܡۡۡۡܡܡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡܡܡۡۡۡܡۡۡܡۡۡܡۡۡܡۡۡܡۡۡܡۡۡܡۡۡܡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ܡۡۡܡۡۡܡۡۡܡۡۡܡۡۡܡۡۡܡۡۡܡۡۡܡۡۡܡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ܡۡۡܡۡۡܡۡۡܡۡۡܡۡۡܡۡۡܡۡۡܡۡۡܡۡۡܡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡܡܡۡܡܡۡۡۡۡܡܡۡۡۡۡܡܡۡۡۡۡܡܡۡۡܡܡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡܡܡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡܡܡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡܡܡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡܡܡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡܡܡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡܡܡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡܡܡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡܡܡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡܡܡۡۡۡۡۡۡۡۡۡۡۡۡۡۡܡܡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡܡܡۡۡۡۡۡۡۡۡۡۡۡۡۡۡܡܡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡܡܡۡۡۡۡۡۡۡۡۡۡۡۡۡۡܡܡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;

	

}

void TextColor(int font, int backGround)
{
	int Color = font + backGround * 16;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color);
}

void PrintDot(int num)
{
	switch (num)
	{
	case 0:
	{
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
	}
	break;
	case 1:
	{
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
	}
	break;
	case 2:
	{

	}
	break;

	default:
	{
		printf("�ش��ϴ� ī�尡 �����ϴ�.\n");
	}
		break;
	}
}