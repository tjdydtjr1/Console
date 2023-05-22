#include "UseClass.h"
#include "Family.h"
#include "HandGame.h"
#include <conio.h>

//void Pixel(int num);
//int pixelNum = 0;
//
//enum
//{
//	LEFT = 1,
//	DOWN,
//	RIGHT,
//	UP = 5,
//	ATTACK
//};

void main()
{
	system("mode con:cols=300 lines=400");
	Player* player  = new Player;
	HandGame* game  = new HandGame;
	Dot* card		= new Dot;
	int comCard = 0;
	int cardSelect = 0;
	int money = 0;
	int batMoney = 0;
	
	
	// �ں���
	printf("�ں��� ����\n");
	cin >> money;
	player->setMoney(money);

	while (money > 0)
	{
		printf("���������� ���� ����\n\n");
		printf("���ñ� ����\n");
		cin >> batMoney;
		player->setMoney(batMoney);

		printf("�� ī�� ����\n�ָ� = 0, ���� = 1, �� = 2\n");
		cin >> cardSelect;

		switch (cardSelect)
		{// �ָ�
		case ROCK:
		{
			card->printCard(cardSelect);
		}
		break;
		// ����
		case PAPER:
		{
			card->printCard(cardSelect);

		}
		break;
		// ��
		case SCISSORS:
		{
			card->printCard(cardSelect);
		}
		break;
		default:
			break;
		}

		card->printVS();
		Sleep(2000);
		comCard = rand() % 3;
		card->printCard(comCard);

		if (cardSelect == comCard)
		{
			printf("���º�\n");
			Sleep(1000);
			system("cls");
			continue;

		}
		else if (cardSelect == 0 && comCard == 1)
		{
			printf("�¸��Ͽ����ϴ�.\n���ñ� * 10\n");
			player->setMoney(batMoney * 10);
			Sleep(1000);
			system("cls");


		}
		else if (cardSelect == 1 && comCard == 2)
		{
			printf("�¸��Ͽ����ϴ�.\n���ñ� * 10\n");
			player->setMoney(batMoney * 10);
			Sleep(1000);
			system("cls");


		}
		else if (cardSelect == 2 && comCard == 0)
		{
			printf("�¸��Ͽ����ϴ�.\n���ñ� * 10\n");
			player->setMoney(batMoney * 10);
			Sleep(1000);
			system("cls");

		}
		else
		{
			printf("�й��Ͽ����ϴ�.\n���ñ� ����\n");
			player->setMoney(-batMoney);
			Sleep(1000);
			system("cls");

		}
	}
}

	
///*
//����1. Ŭ���� ���� ������
//
//- ���� �ٸ� Ŭ���� 5���� �����ϰ� ���� �ٸ� ������ ����Ѵ�.
//
//EX)
//(Ŭ���� �̸�) Ŭ���� 1��
//(Ŭ���� �̸�) Ŭ���� 2��
//(Ŭ���� �̸�) Ŭ���� 3��
//.
//.
//.
//(Ŭ���� �̸�) Ŭ���� N��
//=> �ִ��� ȿ���� �����ϸ鼭 �غ���.
//
//����2. �츮 ������ ������...
//- Ŭ������ Ȱ���� �츮 ������ �Ұ��ϴ� ������ ����Ѵ�.
//
//��ü���������� �����Ѵ�.
//
//
//����3. ���� ���� �����
//- ��ŸƮ ���� ���� ������ ������ ���� ����
//
//- ��Ʈ�� ����, ü�¹ٸ� �ʼ��� �����Ѵ�.
//
//- �÷��̾ ������ �ϸ� �ȵǸ� �� ���� ������ �ؾ� �Ѵ�.
//�� + ���� ���� ���� ���� �ݵ�� �־�� �Ѵ�.
//
//
//����4. ����������
//
//- Ŭ������ Ȱ���� ��ü�������� �����´�.
//
//- �ּ� Ŭ������ 3��
//
//
//*/
//
//void Pixel(int num)
//{
//
//	switch (num)
//	{
//	case 0:
//	{
//		// ������
//		TextColor(0, 0);
//		cout << "��";
//		TextColor(7, 0);
//		pixelNum = 0;
//	}
//	break;
//	case 1:
//	{
//		// �Ķ���
//		TextColor(1, 1);
//		cout << "��";
//		TextColor(7, 0);
//		pixelNum = 1;
//
//	}
//	break;
//	case 2:
//	{
//		// �ʷϻ�
//		TextColor(2, 2);
//		cout << "��";
//		TextColor(7, 0);
//		pixelNum = 2;
//	}
//	break;
//	case 3:
//	{
//		// �ϴû�
//		TextColor(3, 3);
//		cout << "��";
//		TextColor(7, 0);
//		pixelNum = 3;
//	}
//	break;
//	case 4:
//	{
//		// ������
//		TextColor(4, 4);
//		cout << "��";
//		TextColor(7, 0);
//		pixelNum = 4;
//	}
//	break;
//	case 5:
//	{
//		// �����
//		TextColor(5, 5);
//		cout << "��";
//		TextColor(7, 0);
//		pixelNum = 5;
//	}
//	break;
//	case 6:
//	{
//		// �����
//		TextColor(6, 6);
//		cout << "��";
//		TextColor(7, 0);
//		pixelNum = 6;
//	}
//	break;
//	case 7:
//	{
//		// ���
//		TextColor(7, 7);
//		cout << "��";
//		TextColor(7, 0);
//		pixelNum = 7;
//	}
//	break;
//	case 8:
//	{
//		// ȸ��
//		TextColor(8, 8);
//		cout << "��";
//		TextColor(7, 0);
//		pixelNum = 8;
//	}
//	break;
//	case 9:
//	{
//		// ���� �Ķ�
//		TextColor(9, 9);
//		cout << "��";
//		TextColor(0, 0);
//		pixelNum = 9;
//		
//	}
//	break;
//	case 10:
//	{
//		// ���� �ʷ�
//		/*TextColor(10, 10);
//		cout << "��";
//		TextColor(0, 0);*/
//		// �Ѿ�
//		TextColor(4, 7);
//		cout << "��";
//		TextColor(7, 0);
//	}
//	break;
//	//case 11:
//	//{
//	//	// ���� �ϴ�
//	//	TextColor(11, 11);
//	//	cout << "��";
//	//	TextColor(0, 0);
//	//}
//	//break;
//	//case 12:
//	//{
//	//	// ���� ����
//	//	TextColor(12, 12);
//	//	cout << "��";
//	//	TextColor(0, 0);
//	//}
//	//break;
//	//case 13:
//	//{
//	//	// ���� �����
//	//	TextColor(13, 13);
//	//	cout << "��";
//	//	TextColor(0, 0);
//	//}
//	//break;
//	//case 14:
//	//{
//	//	// ���� �����
//	//	TextColor(14, 14);
//	//	cout << "��";
//	//	TextColor(0, 0);
//	//}
//	//break;
//	//case 15:
//	//{
//	//	// ���� ���
//	//	TextColor(15, 15);
//	//	cout << "��";
//	//	TextColor(0, 0);
//	//}
//	//break;
//
//	default:
//		break;
//	}
//}