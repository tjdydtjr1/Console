#include "BaseBall2.h"

BaseBall2::BaseBall2()
{
	player = new UserA;
	com = new ComA;
	printa = new Print;
	vsa = new Jujgment;

	int count = 0;
	int num = 0;

	com->setFirstNum(rand());
	com->setSecondNum(rand());
	com->setThirdNum(rand());
	// User ���� 3�� �Է�
	printf("�����Լ� ���� �߱� ���� ����\n");

	while (true)
	{
		printf("ġƮ\n");
		printf("%d %d %d \n", com->getFirstNum(), com->getSecondNum(), com->getThirdNum());

		printf("ù��° ���� �Է�\n");
		cin >> num;
		player->setFirstNum(num);


		printf("�ι�° ���� �Է�\n");
		cin >> num;
		player->setFirstNum(num);

		printf("����° ���� �Է�\n");
		cin >> num;
		player->setFirstNum(num);

		printf("User ����\n");
		// User ���� ��Ʈ
		printa->PrintNum(player->getFirstNum());
		cout << '\n';
		printa->PrintNum(player->getSecondNum());
		cout << '\n';
		printa->PrintNum(player->getThirdNum());
		cout << '\n';

		// ����
		vsa->jujgment(player->getFirstNum(), player->getSecondNum(), player->getThirdNum(), com->getFirstNum(), com->getSecondNum(), com->getThirdNum());



		Sleep(1000);
		system("cls");

		++count;

		if (player->getFirstNum() == com->getFirstNum() && player->getSecondNum() == com->getSecondNum() && player->getThirdNum() == com->getThirdNum())
		{
			break;
		}
	}
	cout << '\n';
	// Com ���� ��Ʈ
	printa->PrintNum(com->getFirstNum());
	printa->PrintNum(com->getSecondNum());
	printa->PrintNum(com->getThirdNum());

}

BaseBall2::~BaseBall2()
{
	delete player;
	delete com;
	delete printa;
	delete vsa;
}
