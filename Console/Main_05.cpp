#include "MainGame.h"

#define MAX_ITEM			100


enum EItem
{
	/*
	아이템 리스트
	- 
	- 
	-
	-
	-
	-
	*/
};

// 설계 방식 예시
class PlayerInfo
{
private:
	int x, y;
	int hp;
	int shield;
	int level;
	double exp;
	EItem items[MAX_ITEM];

public:
	void walk();
	void jump();
	void turn(int dir);
	void defence();
	bool attack(int what);
	bool hurt(int fromwhom);
	bool die();

};

void main()
{
	// 정적 할당 : 게임에서는 UI와 같이 계속 유지 되는 곳에서 사용 그 외에는 동적할당을 쓴다.
	/*MainGame mg;
	mg.outPut();*/

	// 동적 할당
	MainGame* mainG = new MainGame;

	// 
	mainG->showPosition();
	mainG->setPosition(100, 100);
	mainG->showPosition();
	mainG->movePosition();
	mainG->movePosition();
	mainG->movePosition();
	mainG->showPosition();

	// 동적 할당 후 해제
	delete mainG;

}