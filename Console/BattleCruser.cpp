#include "BattleCruser.h"
BattleCruser::BattleCruser()
{
	name = "배틀크루져";
	hp = 1000;
	mp = 200;
	atk = 1500;
	die = false;

	cout << "내 이름은 : " << name << endl;
	cout << "체력 : " << hp << endl;
	cout << "마나 : " << mp << endl;
	cout << "공격력 : " << atk << endl;
	cout << std::boolalpha;
	cout << "나는 죽지 않는다." << die << endl;

}

BattleCruser::~BattleCruser()
{
}

void BattleCruser::attack()
{
}

