#include "BattleCruser.h"
BattleCruser::BattleCruser()
{
	name = "��Ʋũ����";
	hp = 1000;
	mp = 200;
	atk = 1500;
	die = false;

	cout << "�� �̸��� : " << name << endl;
	cout << "ü�� : " << hp << endl;
	cout << "���� : " << mp << endl;
	cout << "���ݷ� : " << atk << endl;
	cout << std::boolalpha;
	cout << "���� ���� �ʴ´�." << die << endl;

}

BattleCruser::~BattleCruser()
{
}

void BattleCruser::attack()
{
}

