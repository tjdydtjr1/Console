#include "MainGame_02.h"

MainGame_02::MainGame_02()
{
	// 3.
	_Player = new Player_01;
	_Player->setHP(100);

	//cout << "�÷��̾� ���� ü�� : " << _Player->getHP() << endl;

	//cout << "���� ����(1��) , ���� ����(2��)" << endl;

	int Input;
	int state[2] = { 0 };
	int idx = 0;

	//while (true)
	//{
	//	cin >> Input;

	//	if (Input == 1)
	//	{
	//		_Player->setHP(_Player->getHP() + 100);
	//	}
	//	else if (Input == 2)
	//	{
	//		_Player->setHP(_Player->getHP() + 500);
	//	}
	//	else
	//	{
	//		cout << "���� �� ?" << endl;
	//	}
	//	
	//	cout << endl;
	//	cout << "���� ���� �� ü�� : ";
	//	cout << _Player->getHP() << endl;
	// }
		/*
		�ǽ�
		1. ������ ����� ����
			�� ��Ʈ ������ (�ϴ� ü���� -20%)
		2. ��� ������ ������.
			�� �ѹ��� ���
		3. �÷��̾� ü���� 0���Ϸ� �������� ������ ���� ó���Ѵ�.
		4. ü�� ��� ���� ������.
			�� �������� ü��ȸ��(�÷��̾� ü�� 7%)		
		*/
	cout << "���� ü�� ���� : " <<  _Player->getHP() << endl;
	while ((_Player->getHP()) > 0)
	{
		printf("1. ����(�ϴ� -20%), 2. ���, 3. ȸ��(+7%)\n ");
		
		cin >> Input;

		for (int i = 0; i < 2; ++i)
		{
			if (state[i] == 1)
			{
				_Player->setHP(_Player->getHP() - (_Player->getHP() * 0.2));
			}
			else if (state[i] == 3)
			{
				_Player->setHP(_Player->getHP() + (_Player->getHP() * 0.07));
			}
		}

		if (Input == 1)
		{
			_Player->setHP(_Player->getHP() - (_Player->getHP() * 0.2));
			state[0] = 1;
		}
		else if (Input == 2)
		{
			_Player->setHP(0);
			printf("���\n");
		}
		else if (Input == 3)
		{
			_Player->setHP(_Player->getHP() + (_Player->getHP() * 0.07));
			state[1] = 3;

		}
		else if (Input == 4)
		{
			// 
			_Player->getHP();
		}

		cout << '\n';
		
		cout << _Player->getHP() << endl;
		++idx;
	}
}


// �Ҹ��� : �����ڿ��� new�� ��������� �̰����� delete�� �� �� �ִ�.
MainGame_02::~MainGame_02()
{
	delete _Player;
}
