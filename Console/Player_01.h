#pragma once
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#pragma region ������ ������
/*
=> ������ + ������

- ������ (Accessor)
�� ��� ���� ���� ��ȯ�ϴ� ��� �Լ��� ��Ī

- ������ (Mutator)
�� ��� ���� ���� �����ϴ� ��� �Լ��� ��Ī

- �Ϲ������� Getter(get) / Setter(set) �̶�� �Ҹ���.
�� ������ ���� �̸��� ������Ƽ�� �ٲ��.

*/
#pragma endregion

class Player_01
{
private:
	int _hp;
	int _mp;
	int _def;
	int _att;
	float _speed;

public:
	/*
	C++ ����� �Լ��� �⺻������ ȣ���� �� �� �Լ��� ���𿡼� ����� ��ŭ��
	�Է��� �Ѱ��ִ°��� ��Ģ�̴�.

	������ ����Ʈ �Ű������� �̿��ϸ� �Լ� ȣ��� �Է� ���� �ѱ�°���
	������ �� �ִ�.

	�̴� �� �ƹ��� �Է��� ���� ��� �⺻������ ���ϴ� ���� �����ϴ°���
	�����ϴٴ� 
	
	*/
	//void SetID(int ID = 0);

	//void setName(std::string Name = "");

public:
	// ĸ�� �Լ� (Getter + Setter)
	// �Ϲ������� ��� �Լ� ������ cpp�� �����ؾ� �ϳ� ���� + ���ʹ� ������Ͽ��� ������ ��Ģ���� �Ѵ�.
	// ����ӵ� ���� �޸� ȿ������ ì�� �� �ִ�.
	int getHP() { return _hp; }
	void setHP(int hp) { _hp = hp; }

	int getMP() { return _mp; }
	void setMP(int mp) { _mp = mp; }

	int getDEF() { return _def; }
	void setDEF(int def) { _def = def; }

	int getATT() { return _att; }
	void setATT(int att) { _att = att; }

	float getSpeed() { return _speed; }
	void setSpeed(float speed) { _speed = speed; }


	//Player_01();
	//~Player_01();

};

