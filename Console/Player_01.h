#pragma once
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#pragma region 접근자 설정자
/*
=> 접근자 + 설정자

- 접근자 (Accessor)
ㄴ 멤버 변수 값을 반환하는 멤버 함수를 지칭

- 설정자 (Mutator)
ㄴ 멤버 변수 값을 변경하는 멤버 함수를 지칭

- 일반적으로 Getter(get) / Setter(set) 이라고 불린다.
ㄴ 엔진에 들어가면 이름이 프로퍼티로 바뀐다.

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
	C++ 언어의 함수는 기본적으로 호출이 될 때 함수의 선언에서 명시한 만큼의
	입력을 넘겨주는것이 원칙이다.

	하지만 디폴트 매개변수를 이용하면 함수 호출시 입력 값을 넘기는것을
	생략할 수 있다.

	이는 곧 아무런 입력이 없을 경우 기본적으로 지니는 값을 지정하는것이
	가능하다는 
	
	*/
	//void SetID(int ID = 0);

	//void setName(std::string Name = "");

public:
	// 캡슐 함수 (Getter + Setter)
	// 일반적으로 멤버 함수 구현은 cpp에 구현해야 하나 겟터 + 셋터는 헤더파일에서 구현을 원칙으로 한다.
	// 실행속도 향상과 메모리 효율성을 챙길 수 있다.
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

