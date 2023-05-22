#include "MainGame_02.h"

MainGame_02::MainGame_02()
{
	// 3.
	_Player = new Player_01;
	_Player->setHP(100);

	//cout << "플레이어 현재 체력 : " << _Player->getHP() << endl;

	//cout << "소형 물약(1번) , 대형 물약(2번)" << endl;

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
	//		cout << "깜지 콜 ?" << endl;
	//	}
	//	
	//	cout << endl;
	//	cout << "물약 먹은 후 체력 : ";
	//	cout << _Player->getHP() << endl;
	// }
		/*
		실습
		1. 독약을 만들어 보자
			ㄴ 도트 데미지 (턴당 체력의 -20%)
		2. 즉사 물약을 만들자.
			ㄴ 한번에 사망
		3. 플레이어 체력이 0이하로 내려가면 음수값 예외 처리한다.
		4. 체력 재생 물약 만들자.
			ㄴ 지속적인 체력회복(플레이어 체력 7%)		
		*/
	cout << "현재 체력 시작 : " <<  _Player->getHP() << endl;
	while ((_Player->getHP()) > 0)
	{
		printf("1. 독약(턴당 -20%), 2. 즉사, 3. 회복(+7%)\n ");
		
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
			printf("사망\n");
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


// 소멸자 : 생성자에서 new를 사용했으면 이곳에서 delete를 할 수 있다.
MainGame_02::~MainGame_02()
{
	delete _Player;
}
