#include "MainGame_04.h"

MainGame_04::MainGame_04()
{
	// ������ �θ�Ŭ���� ���� �Ļ�Ŭ������ �Ҵ�
	_gun = new gun;
	_bow = new bow;
	//

	cout << "���� ����" << endl;

	// �ٶ󺸴°� �Ȱ��� virtual Ű���带 ���� ������ �� �Լ� ȣ��
	_myWeapon = _gun;
	_myWeapon->attack();

	_myWeapon = _bow;
	_myWeapon->attack();

}

MainGame_04::~MainGame_04()
{
	delete _gun;
	delete _bow;
}
