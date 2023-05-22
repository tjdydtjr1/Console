#pragma once
#include <iostream>
#include "Unit.h"
#include "Tank.h"
#include "BattleCruser.h"

using std::cout;
using std::cin;
using std::endl;


class MainGame_03
{
private:
	Unit*			_terran;
	Tank*			_siegeTank;
	BattleCruser*	_battleCruser;

public:
	MainGame_03();
	~MainGame_03();
};

/*
����1. ���� + ���� ����
- �ڵ� ���� ������ �����.
- Ŭ������ 5�� �̻�
- �÷��̾� �ɷ�ġ�� 7�� (�ʼ� �ɷ�ġ: ��)
�� �� �ɷ�ġ�� ���� ũ��Ƽ�� �߻�

- ������ ���� 3����
�� ��з� : ����, ��, �Ǽ��縮, ����
�� �ߺз� : ��з��� �ش��ϴ� �׸�� ������ 2����
�� ����	 : ���� �ð��� ������ �ǽ� ����� �������� �����.

- �÷��̾� ��ų 2�� �̻� / �� ��ų�� 1�� �̻�
�� ��ų�� ��Ÿ�� ���� ��Ų��. (��Ÿ�� �� ������ ����)

- ��Ʈ�� ������ ����� �� ��Ʈ�� Ȱ���Ѵ�.

*/