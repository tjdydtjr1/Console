#include "Tank.h"


Tank::Tank()
{
	name = "���� ��ũ";
	hp = 600;
	mp = 0;
	atk = 1000;
	die = false;

	cout << "�� �̸��� : " << name << endl;
	cout << "ü�� : " << hp << endl;
	cout << "���� : " << mp << endl;
	cout << "���ݷ� : " << atk << endl;
	cout << std::boolalpha;
	cout << "���� ���� �ʴ´�." << die << endl;

}

Tank::~Tank()
{

}

void Tank::attack()
{
	cout << "�� �߻�!" << endl;
}

