#include "BaseBall.h"

BaseBall::BaseBall()
{
	player = new User;
	com = new Com;
	vs = new Jujgment;
	print = new Print;
	count = new CountGame;
	game = new EndGame;
	temp = new Temp;
	game->setGame(true);
	count->m_nCount = 0;
	

	
	int num = 0;
	// User ���� 3�� �Է�
	printf("Ŭ���� 8�� ���� �߱� ���� ����\n");

	// Com ���� 3�� ���� �Է�
	com->setFirstNum(rand() % 9 + 1);
	com->setSecondNum(rand() % 9 + 1);
	com->setThirdNum(rand() % 9 + 1);
	com->m_nFirstNum = com->getFirstNum();
	com->m_nSecondNum = com->getSecondNum();
	com->m_nThirdNum = com->getThirdNum();

	while (game->getGame())
	{
		printf("%d %d %d \n", com->getFirstNum(), com->getSecondNum(), com->getThirdNum());
		printf("ù��° ���� �Է�\n");
		cin >> num;
		temp->setTemp(num);

		player->setFirstNum(temp->getTemp());
		printf("�ι�° ���� �Է�\n");
		cin >> num;
		temp->setTemp(num);
		player->setSecondNum(temp->getTemp());

		printf("����° ���� �Է�\n");
		cin >> num;
		temp->setTemp(num);
		player->setThirdNum(temp->getTemp());

		printf("User ����\n");
		// User ���� ��Ʈ
		print->PrintNum(player->getFirstNum());
		cout << '\n';
		print->PrintNum(player->getSecondNum());
		cout << '\n';
		print->PrintNum(player->getThirdNum());
		cout << '\n';

		// ���� Ƚ�� ����
		count->countGame();

		// ����
		vs->jujgment(player->getFirstNum(), player->getSecondNum(), player->getThirdNum(), com->getFirstNum(), com->getSecondNum(), com->getThirdNum());

		if (player->getFirstNum() == com->getFirstNum() && player->getSecondNum() == com->getSecondNum() && player->getThirdNum() == com->getThirdNum())
		{
			game->setGame(false);
		}

		Sleep(1000);
		system("cls");
	}

	cout << '\n';
	// Com ���� ��Ʈ
	print->PrintNum(com->m_nFirstNum);
	print->PrintNum(com->m_nSecondNum);
	print->PrintNum(com->m_nThirdNum);
	printf("�� ���� Ƚ�� : %d\n", count->m_nCount);
	
}

BaseBall::~BaseBall()
{
	delete player;
	delete com;
	delete vs;
	delete print;
	delete count;
	delete game;
	delete temp;
}
