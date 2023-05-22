#include "Unit.h"

// 생성자
Unit::Unit()
{
	// 부모 클래스에서 아래와 같이 특정하게 명시를 하면 안된다.
	// 설계
	/*name = "테란 유닛";
	hp = 100;
	mp = 50;
	atk = 800;
	die = false;

	cout << "내 이름은 : " << name << endl;
	cout << "체력 : " << hp << endl;
	cout << "마나 : " << mp << endl;
	cout << "공격력 : " << atk << endl;
	cout << "나는 죽지 않는다. " << die << endl;*/

}

// 소멸자
Unit::~Unit()
{
	//! Do Nothing
}

void Unit::attack(char* myName, char* enemyName)
{
	cout << myName << " 이" << enemyName << " 을 공격한다." << endl;
}

void Unit::attack(int atk, int enemyHP)
{
	cout << atk << "의 공격으로 적의 체력 : " << enemyHP << " 을 감소 시켰다." << endl;
}

void Unit::attack(bool enemyDie)
{
	cout << std::boolalpha;
	cout << "적 제거 여부 : " << enemyDie << endl;
}

void Unit::attack()
{
	cout << "적을 공격한다." << endl;
}

