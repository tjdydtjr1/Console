//����3.¦ ���߱�
//
//- ������ : 5 x 4
//
//- �� �� �� �� �� �� �� �� �� ��
//
//- ¦�� ������ ��ȣ�� ��� ���µ� ���·� �־�� �Ѵ�.
//
//- 2���� �������� ġƮ �����
//�� 1. ġƮŰ�� ������ �и� ���� ���� ���� �÷��̾�� �����ְ� 5�ʵڿ� �ٽ� ���� ���� ��Ų��.
//�� 2. ġƮŰ�� ������ �ѽ��� ī�带 �����ϰ� ���� ���µȴ�.
//����ڰ� ������ �ѽ��� ���߸鼭 ������ ����Ǹ� ok

#include <iostream>
#include <Windows.h>

using std::cout;
using std::cin;
using std::endl;

void TextColor(int font, int backGround);

// ��Ʈ ���� ī��Ʈ
namespace DOTPRINT
{
	void CountNum();
}

void main()
{
	//- ��0 ��1 ��2 ��3 ��4 ��5 ��6 ��7 ��8 ��9
	// ������ ���� ����
	char starA[3] = "��";
	char starB[3] = "��";
	char diaA[3] = "��";
	char diaB[3] = "��";
	char spaceA[3] = "��";
	char spaceB[3] = "��";
	char heartA[3] = "��";
	char heartB[3] = "��";
	char cloverA[3] = "��";
	char cloverB[3] = "��";
	
	
	// ī�� �迭 ����
	int arr[20] = { 0 };
	const int arrMax = sizeof(arr) / sizeof(arr[0]);

	// ��ü 100���� �ʱ�ȭ
	// ���µ� ī�� ���� Ȯ�ο�
	for (int i = 0; i < arrMax; ++i)
	{
		arr[i] = 100;
	}

	// ī�� ��ȣ
	int cardNum1 = 0;
	int cardNum2 = 0;

	// ���� ���� ����
	const int endGame = 200;
	int temp = 0;
	
	while (temp > endGame)
	{
		printf("ġƮŰ\n��ü ī�� ���� : 100\n�� ��Ʈ ���� ���� ���� : 1000\n");
		cout << '\n';

		printf("===== ¦ ���߱� ���� ���� ===== \n");
		printf("���� ī�� �ڸ� ���ڸ� �Է��ϼ���\n");
		cout << '\n';

		// =================================================
		printf("���� ���� �� ī�� �ڸ�\n");
		printf("%s\t", (arr[0] == 100 ? "1" : "��"));
		printf("%s\t", (arr[1] == 100 ? "2" : "��"));
		printf("%s\t", (arr[2] == 100 ? "3" : "��"));
		printf("%s\t", (arr[3] == 100 ? "4" : "��"));
		printf("%s\t", (arr[4] == 100 ? "5" : "��"));
		cout << '\n';
		printf("%s\t", (arr[5] == 100 ? "6" : "��"));
		printf("%s\t", (arr[6] == 100 ? "7" : "��"));
		printf("%s\t", (arr[7] == 100 ? "8" : "��"));
		printf("%s\t", (arr[8] == 100 ? "9" : "��"));
		printf("%s\t", (arr[9] == 100 ? "10" : "��"));
		cout << '\n';
		printf("%s\t", (arr[10] == 100 ? "11" : "��"));
		printf("%s\t", (arr[11] == 100 ? "12" : "��"));
		printf("%s\t", (arr[12] == 100 ? "13" : "��"));
		printf("%s\t", (arr[13] == 100 ? "14" : "��"));
		printf("%s\t", (arr[14] == 100 ? "15" : "��"));
		cout << '\n';
		printf("%s\t", (arr[15] == 100 ? "16" : "��"));
		printf("%s\t", (arr[16] == 100 ? "17" : "��"));
		printf("%s\t", (arr[17] == 100 ? "18" : "��"));
		printf("%s\t", (arr[18] == 100 ? "19" : "��"));
		printf("%s\t", (arr[19] == 100 ? "20" : "��"));
		// =================================================
		cout << '\n' << '\n';
		
		// ¦�� Ʋ������ goto�� ���� ��ġ
		Play:
		
		
		//- ��0 ��1 ��2 ��3 ��4 ��5 ��6 ��7 ��8 ��9
		printf("��, ��, ��, ��, ��, �� , ��, ��, ��, ��\n\n");

		printf("ù��° ī�� ����\n");
		cin >> cardNum1;
		
		printf("�ι�° ī�� ����\n");
		cin >> cardNum2;
		
		if (cardNum1 == 100 || cardNum2 == 100)
		{
			// ��ü ī�� 5�� ���� ����
			printf("ġƮ ���\n5�ʰ� ��ü ���� \n");
			printf("%s\t%s\t%s\t%s\t%s\n", starA, starB, diaA, diaB, spaceA);
			printf("%s\t%s\t%s\t%s\t%s\n", spaceB, heartA, heartB, cloverA, cloverB);
			printf("%s\t%s\t%s\t%s\t%s\n", starA, starB, diaA, diaB, spaceA);
			printf("%s\t%s\t%s\t%s\t%s\n", spaceB, heartA, heartB, cloverA, cloverB);

			DOTPRINT::CountNum();
			system("cls");
			continue;
		}
		else if (cardNum1 == 1000 || cardNum2 == 1000)
		{
			// ġƮ ��� �� Ʋ���� �� �ٽ� ����
			reGame:
			// �Ѽ�Ʈ ���� ī�� ����
			printf("ġƮ ���\n�� ��Ʈ ���� ��ü ����\n");
			printf("%s\t%s\t%s\t%s\t%s\n", starA, starB, diaA, diaB, spaceA);
			printf("%s\t%s\t%s\t%s\t%s\n", spaceB, heartA, "?", cloverA, cloverB);
			printf("%s\t%s\t%s\t%s\t%s\n", starA, starB, diaA, diaB, spaceA);
			printf("%s\t%s\t%s\t%s\t%s\n", spaceB, heartA, "?", cloverA, cloverB);
			
			cout << '\n';

			printf("ù��° ī�� ����\n");
			cin >> cardNum1;

			printf("�ι�° ī�� ����\n");
			cin >> cardNum2;

			cout << '\n';

			if ((cardNum1 + cardNum2) == 26)
			{
				printf("��ü ¦�� ������ϴ�.\n");
				printf("%s\t%s\t%s\t%s\t%s\n", starA, starB, diaA, diaB, spaceA);
				printf("%s\t%s\t%s\t%s\t%s\n", spaceB, heartA, heartB, cloverA, cloverB);
				printf("%s\t%s\t%s\t%s\t%s\n", starA, starB, diaA, diaB, spaceA);
				printf("%s\t%s\t%s\t%s\t%s\n", spaceB, heartA, heartB, cloverA, cloverB);
				Sleep(2000);
				break;
			}
			else
			{
				printf("¦�� �ٽ� ����ּ���\n");
				goto reGame;
			}
		}
		else
		{
			// ī�� �ε��� ��ȣ�� ī�� �� �ֱ�
			arr[cardNum1 - 1] = cardNum1;
			arr[cardNum2 - 1] = cardNum2;

			// ġƮŰ ��� ���� ��
			//- ��0 ��1 ��2 ��3 ��4 ��5 ��6 ��7 ��8 ��9
			
			printf("%s\t", (arr[0] == 100 ? "1" : "��"));
			printf("%s\t", (arr[1] == 100 ? "2" : "��"));
			printf("%s\t", (arr[2] == 100 ? "3" : "��"));
			printf("%s\t", (arr[3] == 100 ? "4" : "��"));
			printf("%s\t", (arr[4] == 100 ? "5" : "��"));
			cout << '\n';
			printf("%s\t", (arr[5] == 100 ? "6" : "��"));
			printf("%s\t", (arr[6] == 100 ? "7" : "��"));
			printf("%s\t", (arr[7] == 100 ? "8" : "��"));
			printf("%s\t", (arr[8] == 100 ? "9" : "��"));
			printf("%s\t", (arr[9] == 100 ? "10" : "��"));
			cout << '\n';
			printf("%s\t", (arr[10] == 100 ? "11" : "��"));
			printf("%s\t", (arr[11] == 100 ? "12" : "��"));
			printf("%s\t", (arr[12] == 100 ? "13" : "��"));
			printf("%s\t", (arr[13] == 100 ? "14" : "��"));
			printf("%s\t", (arr[14] == 100 ? "15" : "��"));
			cout << '\n';
			printf("%s\t", (arr[15] == 100 ? "16" : "��"));
			printf("%s\t", (arr[16] == 100 ? "17" : "��"));
			printf("%s\t", (arr[17] == 100 ? "18" : "��"));
			printf("%s\t", (arr[18] == 100 ? "19" : "��"));
			printf("%s\t", (arr[19] == 100 ? "20" : "��"));
			cout << '\n' << '\n';
			
			if ((cardNum1 - cardNum2 == 10 || cardNum1 - cardNum2 == -10))
			{
				printf("¦�� ������ϴ�.\n");
			}
			else
			{
				printf("¦�� ���� �ʽ��ϴ�.\n�ٽ� ����ּ���.\n");
				// �� �ʱ�ȭ
				arr[cardNum1 - 1] = 100;
				arr[cardNum2 - 1] = 100;
				Sleep(2000);
				system("cls");

				// =================================================
				printf("���� ���� �� ī�� �ڸ�\n");
				printf("%s\t", (arr[0] == 100 ? "1" : "��"));
				printf("%s\t", (arr[1] == 100 ? "2" : "��"));
				printf("%s\t", (arr[2] == 100 ? "3" : "��"));
				printf("%s\t", (arr[3] == 100 ? "4" : "��"));
				printf("%s\t", (arr[4] == 100 ? "5" : "��"));
				cout << '\n';
				printf("%s\t", (arr[5] == 100 ? "6" : "��"));
				printf("%s\t", (arr[6] == 100 ? "7" : "��"));
				printf("%s\t", (arr[7] == 100 ? "8" : "��"));
				printf("%s\t", (arr[8] == 100 ? "9" : "��"));
				printf("%s\t", (arr[9] == 100 ? "10" : "��"));
				cout << '\n';
				printf("%s\t", (arr[10] == 100 ? "11" : "��"));
				printf("%s\t", (arr[11] == 100 ? "12" : "��"));
				printf("%s\t", (arr[12] == 100 ? "13" : "��"));
				printf("%s\t", (arr[13] == 100 ? "14" : "��"));
				printf("%s\t", (arr[14] == 100 ? "15" : "��"));
				cout << '\n';
				printf("%s\t", (arr[15] == 100 ? "16" : "��"));
				printf("%s\t", (arr[16] == 100 ? "17" : "��"));
				printf("%s\t", (arr[17] == 100 ? "18" : "��"));
				printf("%s\t", (arr[18] == 100 ? "19" : "��"));
				printf("%s\t", (arr[19] == 100 ? "20" : "��"));
				// =================================================
				cout << '\n' << '\n';
				goto Play;
			}
		}
		
		for (int i = 0; i < arrMax; ++i)
		{
			temp += arr[i];
		}

		Sleep(2000);
		system("cls");
	}
	printf("¦ ���߱� ���� ����\n");
}

void TextColor(int font, int backGround)
{
	int Color = font + backGround * 16;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color);
}

// ���� ī��Ʈ
void DOTPRINT::CountNum()
{
	int count = 5;
	while (count > 0)
	{
		switch (count)
		{
		case 0:
		{
			TextColor(15, 0);	
			// 0	
			cout << "�ܡܡܡܡ�" << endl;
			cout << "��"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "��" << endl;
			cout << "��"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "��" << endl;
			cout << "�ܡܡܡܡ�" << endl; Sleep(1000);
			system("cls");
		}
		break;
		case 1:
		{
			TextColor(0, 0); cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�" << endl;
			cout << "��"; TextColor(15, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡ�" << endl;
			TextColor(0, 0); cout << "��"; TextColor(0, 0); cout << "��"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�" << endl;
			cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�" << endl;
			TextColor(15, 0);	cout << "�ܡܡܡܡ�" << endl;

			Sleep(1000);
			cout << '\n';
			//system("cls");
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

			Sleep(1000);
			cout << '\n';

			//system("cls");

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

			Sleep(1000);
			cout << '\n';

			//system("cls");
		}
		break;
		case 4:
		{
			// 4
			TextColor(15, 0);
			cout << "��"; TextColor(0, 0); cout << "��"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�" << endl;
			TextColor(15, 0);	cout << "��"; TextColor(0, 0); cout << "��"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�" << endl;
			TextColor(15, 0); cout << "�ܡܡܡܡ�" << endl;
			TextColor(0, 0); cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�" << endl;
			cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�" << endl;
			TextColor(15, 0);

			Sleep(1000);
			cout << '\n';

			//system("cls");
		}
		break;
		case 5:
		{
			// 5
			TextColor(15, 0);
			cout << "�ܡܡܡܡ�" << endl;
			cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡ�" << endl;
			TextColor(15, 0); cout << "�ܡܡܡܡ�" << endl;
			TextColor(0, 0); cout << "�ۡۡ�"; TextColor(15, 0); cout << "�ܡ�" << endl;
			cout << "�ܡܡܡܡ�" << endl;
			TextColor(15, 0);

			Sleep(1000);
			cout << '\n';

			//system("cls");

		}
		break;
		default:
		break;
		}
		--count;

	}
}