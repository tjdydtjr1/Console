#include "MainGame_03.h"

MainGame_03::MainGame_03()
{
	cout << "���Ⱑ �ٷ� ���� ��" << endl;

	_terran = new Unit;
	cout << endl;

	_siegeTank = new Tank;
	cout << endl;

	_battleCruser = new BattleCruser;

	_terran->attack("����", "���۸�");
	cout << endl;

	_terran->attack(20, 50);
	cout << endl;

	_terran->attack(true);
	cout << endl;

	_terran->attack();
	cout << endl;

	_siegeTank->attack();
	cout << endl;

	_battleCruser->attack();
	cout << endl;
}

MainGame_03::~MainGame_03()
{
	delete _terran;
	delete _siegeTank;
	delete _battleCruser;
}
