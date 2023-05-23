#include "MainGame_04.h"

MainGame_04::MainGame_04()
{
	// 선언은 부모클래스 지만 파생클래스로 할당
	_gun = new gun;
	_bow = new bow;
	//

	cout << "무기 장착" << endl;

	// 바라보는게 똑같다 virtual 키워드를 사용시 재정의 된 함수 호출
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
