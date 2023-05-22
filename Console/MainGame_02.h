#pragma once

#include "Player_01.h"
/*
클래스 생성시 생각할 것
코어		구현		실체화(인스턴스)		추상화		관리자		대리자		어시스터

당장은 -> 구현 실체화 관리자를 신경쓰자.


*/


// 관리자 : 들어오는 클래스에 대한 on/off 데이터 넣고 뺴기
class MainGame_02
{
private:
	// 참조하기 위한 순서
	// 1. 존재를 알려준다. #include
	// 2. 포인터를 통해서 메모리에 올린다.
	// 3. 메모리에 구현하기 위해 동적할당을 한다.
	Player_01* _Player;

public:
	MainGame_02();
	~MainGame_02();

};

