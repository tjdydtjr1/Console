#include "Unit.h"

// ������
Unit::Unit()
{
	// �θ� Ŭ�������� �Ʒ��� ���� Ư���ϰ� ��ø� �ϸ� �ȵȴ�.
	// ����
	/*name = "�׶� ����";
	hp = 100;
	mp = 50;
	atk = 800;
	die = false;

	cout << "�� �̸��� : " << name << endl;
	cout << "ü�� : " << hp << endl;
	cout << "���� : " << mp << endl;
	cout << "���ݷ� : " << atk << endl;
	cout << "���� ���� �ʴ´�. " << die << endl;*/

}

// �Ҹ���
Unit::~Unit()
{
	//! Do Nothing
}

void Unit::attack(char* myName, char* enemyName)
{
	cout << myName << " ��" << enemyName << " �� �����Ѵ�." << endl;
}

void Unit::attack(int atk, int enemyHP)
{
	cout << atk << "�� �������� ���� ü�� : " << enemyHP << " �� ���� ���״�." << endl;
}

void Unit::attack(bool enemyDie)
{
	cout << std::boolalpha;
	cout << "�� ���� ���� : " << enemyDie << endl;
}

void Unit::attack()
{
	cout << "���� �����Ѵ�." << endl;
}

