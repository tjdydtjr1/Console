#include <iostream>
#include <time.h>
#include <Windows.h>


using std::cout;
using std::cin;
using std::endl;


/*
����1. ����������

- ����ġ���� �̿��� �����.

- ġƮ ��ɰ� ���� ��� �߰�
�� �ʱ� ������ : 10,000��
�� �ּ� ������ 1,000��

- 5���� �ϰų� ���� ���� ���� ���� ������ ���� ����

- �̱�� �ǵ��� x�� ��� ���� �ǵ��� x7�踦 �Ҵ´�.

- ��� ��� �ǵ��� x5�踦 ��´�.

*/

/*
����2. ���� ����ȭ

- ���ݱ��� ��� ������ �����Ѵ�.0 

- ��� ������ �ߴ��� ����ȭ ���ѿ´�.


���� ����. �迭

- ��Ʈ�� ����´�.

- ������ �� ������ �´�. (EX: �迭�� ooo�̴�.) ������ x


Ÿ�� ����. ���������� (if)

- 13��

- �־��� �ð��ȿ� ���������� ������ �ۼ��� �����Ͽ�
�˻縦 �ް� ����ϸ� ok

- ���� �� : ���� ��÷ -> 3 x @

*/

void main()
{
	
	/*int randNumA;
	int userNum;
	int myMoney = 10000;
	int count = 0;
	int bat = 0;
	

	while (count < 5 && myMoney > 0)
	{
		srand(time(NULL));
		randNumA = rand() % 3;
		printf(" ġƮ : %d\n\n", randNumA);
		printf("���������� ���� ����\n");
		printf("���� = 0, ���� = 1, �� = 2\n");
		printf("�ش��ϴ� ī�带 �Է��ϼ���.\n\n");
		cin >> userNum;
	
		cout << '\n';

		printf("���� ���� �ݾ� : %d\n", myMoney);
		printf("������ �ݾ��� �Է��ϼ���.\n");
		cin >> bat;

		cout << '\n';

		if (bat > myMoney)
		{
			printf("���� ������ �����ϴ�.\n");
			--count;
			Sleep(1000);
			system("cls");
			continue;
		}
		else if (bat < 1000)
		{
			printf("�ּ� 1,000�� �̻� �����ϼ���.\n");
			--count;
			Sleep(1000);
			system("cls");
			continue;
		}
		
		switch (userNum)
		{
		case 0:
		{
			switch (randNumA)
			{
			case 0:
			{
				printf("�����ϴ�.\n");
				printf("���� �ݾ� x5 = %d ����\n", bat * 5);
				myMoney += bat * 5;
				printf("���� ���� �ݾ� : %d\n", myMoney);
			}
			break;
			case 1:
			{
				printf("�����ϴ�.\n");
				printf("���� �ݾ� x7 = %d ����\n", bat * 7);
				myMoney -= bat * 7;
				printf("���� ���� �ݾ� : %d\n", myMoney);
			}
			break;
			case 2:
			{
				printf("�̰���ϴ�.\n");
				printf("���� �ݾ� x2 = %d ����\n", bat * 2);
				myMoney += bat * 2;
				printf("���� ���� �ݾ� : %d\n", myMoney);
			}
			break;
			default:
			{
				printf("�ش��ϴ� ī�尡 �����ϴ�.\n");
				--count;
			}
			break;
			}
		}
		case 1:
		{
			switch (randNumA)
			{
			case 1:
			{
				printf("�����ϴ�.\n");
				printf("���� �ݾ� x5 = %d ����\n", bat * 5);
				myMoney += bat * 5;
				printf("���� ���� �ݾ� : %d\n", myMoney);
			}
			break;
			case 2:
			{
				printf("�����ϴ�.\n");
				printf("���� �ݾ� x7 = %d ����\n", bat * 7);
				myMoney -= bat * 7;
				printf("���� ���� �ݾ� : %d\n", myMoney);
			}
			break;
			case 0:
			{
				printf("�̰���ϴ�.\n");
				printf("���� �ݾ� x2 = %d ����\n", bat * 2);
				myMoney += bat * 2;
				printf("���� ���� �ݾ� : %d\n", myMoney);
			}
			break;
			default:
			{
				printf("�ش��ϴ� ī�尡 �����ϴ�.\n");
				--count;
			}
			break;
			}
		}
		break;
		case 2:
		{
			switch (randNumA)
			{
			case 2:
			{
				printf("�����ϴ�.\n");
				printf("���� �ݾ� x5 = %d ����\n", bat * 5);
				myMoney += bat * 5;
				printf("���� ���� �ݾ� : %d\n", myMoney);
			}
			break;
			case 0:
			{
				printf("�����ϴ�.\n");
				printf("���� �ݾ� x7 = %d ����\n", bat * 7);
				myMoney -= bat * 7;
				printf("���� ���� �ݾ� : %d\n", myMoney);
			}
			break;
			case 1:
			{
				printf("�̰���ϴ�.\n");
				printf("���� �ݾ� x2 = %d ����\n", bat * 2);
				myMoney += bat * 2;
				printf("���� ���� �ݾ� : %d\n", myMoney);
			}
			break;
			default:
			{
				printf("�ش��ϴ� ī�尡 �����ϴ�.\n");
				--count;
			}
			break;
			}
		}
		break;
		default:
		{
			printf("�ش��ϴ� ī�尡 �����ϴ�.\n");
		}
		break;
		}
		
		Sleep(3000);
		system("cls");
		++count;
	}

	if (myMoney < 0)
	{
		printf("���� ���� �� �Ҿ����ϴ�.\n");
	}
	else
	{
		printf("���� ����\n");
		printf("�ǵ� ȹ�� : %d\n", myMoney);
	}*/


// Ÿ�Ӿ���

	




}