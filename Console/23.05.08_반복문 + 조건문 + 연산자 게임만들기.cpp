
/*
����1. ���������� ����

- if���� �̿��� �����.
�� switch���� ������� �ʴ´�.

- ������ ���� Ƚ���� �� 5��
�� ���Ĵ� ���� ����

ġƮ : ���� �̸� �˷��� ������ ������ ���� �ϱ� ����
�ʼ� : ġƮ



����2. �ϼ� ��±�

- if���� switch�� �߿� ������ �Ǵ��� ȿ�����ΰ��� �����Ѵ�.

- �����ϸ� ������� �Է��� �ް� �Է��� ���ڿ� ���� ??�� ���� ���

EX) 4 �Է½� -> : 4���� 30�� �Դϴ�. -> �ٽ� Ŀ�ǵ� Ȱ��ȭ

- 1������ 12������ Ȯ���� �����ؾ� �ϰ� �̿��� ���ڴ� ���� ó��

- �� 5���� �Է��ϸ� ���α׷� ����


���� ����. �Լ�
- ��Ʈ�� ���� �´�.
- �����Ұ� ������ �´�. (EX: �Լ��� ooo�̴�)



���� ����1. �Լ��� �����͸� Ȱ���� ���������� �ϼ�

- ����� �����ϸ� �ȵǸ� �����Լ������� �Լ� ȣ���̿ܿ��� �ƹ��͵� �ۼ��� �� �� ����.

void Function(int* a, int** b, int*** c)
{
	// ���� �ۼ�
}

void main()
{
	Function();
}
*/

#include <iostream>
#include <time.h>
#include <Windows.h>

using std::cout;
using std::cin;
using std::endl;

// ���� ����

int aNum;
int bNum;
int cNum;

int* pbNum = &bNum;
int* pcNum = &cNum;
int** ppcNum = &pcNum;

int* paNum = &aNum;
int** ppbNum = &pbNum;
int*** pppcNum = &ppcNum;
int tempA = 0;
int userNum;

void Function(int* a, int** b, int*** c)
{
	srand(time(NULL));

	*paNum			= rand() % 3;
	**ppbNum		= rand() % 3;
	***pppcNum		= rand() % 3;
	
	// ���� �ۼ�
	while (tempA < 5)
	{
		
		cout << "ġƮ aNum : " << *a << '\n';
		cout << "ġƮ bNum : " << **b << '\n';
		cout << "ġƮ cNum : " << ***c << '\n';
		cout << '\n' << '\n';
		cout << "���������� ���� ����" << endl;
		cout << "���� ���� ���� ������." << endl;
		printf("�ָ� = 0, ���� = 1, �� = 2\n");
		cin >> userNum;

		cout << endl;

		// ���� ó��
		if (userNum > 2)
		{
			cout << "�ش��ϴ� ī��� �����ϴ�." << endl;
			--tempA;
			Sleep(2000);
			system("cls");
			continue;
		}
		
		cout << "aUser ���� ����" << endl;
		if (*a == userNum)
		{
			cout << "����" << endl;
		}
		else if(*a == 0 && userNum == 2)
		{
			cout << "�̰��" << endl;
		}
		else if (*a == 1 && userNum == 0)
		{
			cout << "�̰��" << endl;
		}
		else if (*a == 2 && userNum == 1)
		{
			cout << "�̰��" << endl;
		}
		else
		{
			cout << "����" << endl;
		}

		cout << '\n';

		cout << "bUser ���� ����" << endl;
		if (**b == userNum)
		{
			cout << "����" << endl;
		}
		else if (**b == 0 && userNum == 2)
		{
			cout << "�̰��" << endl;
		}
		else if (**b == 1 && userNum == 0)
		{
			cout << "�̰��" << endl;
		}
		else if (**b == 2 && userNum == 1)
		{
			cout << "�̰��" << endl;
		}
		else
		{
			cout << "����" << endl;
		}

		cout << '\n';

		cout << "cUser ���� ����" << endl;
		if (***c == userNum)
		{
			cout << "����" << endl;
		}
		else if (***c == 0 && userNum == 2)
		{
			cout << "�̰��" << endl;
		}
		else if (***c == 1 && userNum == 0)
		{
			cout << "�̰��" << endl;
		}
		else if (***c == 2 && userNum == 1)
		{
			cout << "�̰��" << endl;
		}
		else
		{
			cout << "����" << endl;
		}

		Sleep(2000);
		system("cls");
		++tempA;
	}
	cout << "���� ����" << endl;

}
// =============================================================

void main()
{
	//printf("%d %d %d", *a, **b, ***c);

	// ���� ����
	//Function(paNum,ppbNum,pppcNum);
	// 
// =============================================================
	Sleep(2000);
	system("cls");

	//����1.���������� ����
	// 0 ~ 2 
	int randNum;
	int myNum;
	int temp = 0;

	// ����
	srand(time(NULL));

	while (temp < 5)
	{
		randNum = rand() % 3;
		cout << "ġƮ : " << randNum << endl;
		cout << endl << endl;

		cout << "���������� ���� ����" << endl;
		cout << "���� ���� ���� ������." << endl;
		printf("�ָ� = 0, ���� = 1, �� = 2\n");
		cin >> myNum;
		cout << endl;

		if (myNum > 2)
		{
			cout << "�ش��ϴ� ī��� �����ϴ�." << endl;
			--temp;
			Sleep(2000);
			system("cls");
			continue;
		}

		if (randNum == myNum)
		{
			cout << "����" << endl;
		}
		else if(randNum == 0 && myNum == 2)
		{
			cout << "�̰��" << endl;
		}
		else if (randNum == 1 && myNum == 0)
		{
			cout << "�̰��" << endl;
		}
		else if (randNum == 2 && myNum == 1)
		{
			cout << "�̰��" << endl;
		}
		else
		{
			cout << "����" << endl;
		}
		
		Sleep(2000);
		system("cls");

		++temp;
	}

	cout << "���� ����" << endl;
	
	Sleep(2000);
	system("cls");


// =============================================================


	//����2.�ϼ� ��±�

	temp = 0;
	int monthNum = 0;

	while (temp < 5)
	{
		cout << "�ϼ� ��±�" << endl;
		cout << "�ϼ� Ȯ���� �� : ";
		cin >> monthNum;

		switch (monthNum)
		{
		case 1:
			cout << "1�� 31�� �Դϴ�." << endl;
			break;
		case 2:
			cout << "2�� 28�� �Դϴ�." << endl;
			break;
		case 3:
			cout << "3�� 31�� �Դϴ�." << endl;
			break;
		case 4:
			cout << "4�� 30�� �Դϴ�." << endl;
			break;
		case 5:
			cout << "5�� 31�� �Դϴ�." << endl;
			break;
		case 6:
			cout << "6�� 30�� �Դϴ�." << endl;
			break;
		case 7:
			cout << "7�� 31�� �Դϴ�." << endl;
			break;
		case 8:
			cout << "8�� 30�� �Դϴ�." << endl;
			break;
		case 9:
			cout << "9�� 31�� �Դϴ�." << endl;
			break;
		case 10:
			cout << "10�� 30�� �Դϴ�." << endl;
			break;
		case 11:
			cout << "11�� 31�� �Դϴ�." << endl;
			break;
		case 12:
			cout << "12�� 30�� �Դϴ�." << endl;
			break;
		default:
		{
			cout << "�ش��ϴ� ���� �����ϴ�." << endl;
			cout << "�ٽ� �Է��ϼ���." << endl;
		}
			break;
		}
		Sleep(1000);
		system("cls");
		++temp;
	}

}


