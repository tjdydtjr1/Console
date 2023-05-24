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
	// User 숫자 3개 입력
	printf("가상함수 숫자 야구 게임 시작\n");

	while (true)
	{
		printf("치트\n");
		printf("%d %d %d \n", com->getFirstNum(), com->getSecondNum(), com->getThirdNum());

		printf("첫번째 숫자 입력\n");
		cin >> num;
		player->setFirstNum(num);


		printf("두번째 숫자 입력\n");
		cin >> num;
		player->setFirstNum(num);

		printf("세번째 숫자 입력\n");
		cin >> num;
		player->setFirstNum(num);

		printf("User 숫자\n");
		// User 숫자 도트
		printa->PrintNum(player->getFirstNum());
		cout << '\n';
		printa->PrintNum(player->getSecondNum());
		cout << '\n';
		printa->PrintNum(player->getThirdNum());
		cout << '\n';

		// 판정
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
	// Com 숫자 도트
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
