#pragma once
#include <iostream>
#include <Windows.h>
#include <time.h>
#include "Jujgment.h"
#include "Print.h"

using std::cout;
using std::cin;
using std::endl;

// 플레이어
class Player
{
public:
	int m_nFirstNum;
	int m_nSecondNum;
	int m_nThirdNum;

public:
	void setFirstNum(int num) {  m_nFirstNum = num; }
	void setSecondNum(int num) { m_nSecondNum = num; }
	void setThirdNum(int num) { m_nThirdNum = num; }
	int getFirstNum() { return m_nFirstNum; }
	int getSecondNum() { return m_nSecondNum; }
	int getThirdNum() { return m_nThirdNum; }

};

class User : public Player
{
};

class Com : public Player
{
};

class EndGame
{
private:
	bool game;
public:
	void setGame(bool game) { this->game = game; }
	bool getGame() { return game; }
};

class CountGame
{
public:
	int m_nCount;
	
public:
	void countGame() { ++m_nCount; }
};

class Temp
{
private:
	int temp;
public:
	void setTemp(int temp) { this->temp = temp; }
	int getTemp() { return temp; }
};

class BaseBall
{
private:
	PlayerA* player;
	PlayerA* com;
	Jujgment* vs;
	CountGame* count;
	Print* print;
	EndGame* game;
	Temp* temp;

	//
	BaseBall2* baseBall;

public:
	BaseBall();
	
	~BaseBall();
	

};



