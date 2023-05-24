#pragma once
#include <iostream>
#include "Jujgment.h"
#include "Print.h"
using std::cout;
using std::cin;
using std::endl;

// 가상함수
class PlayerA
{
protected:
	int m_nFirstNum;
	int m_nSecondNum;
	int m_nThirdNum;

public:
	virtual void setFirstNum(int num) {  }
	virtual void setSecondNum(int num) {  }
	virtual void setThirdNum(int num) {  }
	virtual	int getFirstNum() { return 0; }
	virtual int getSecondNum() { return 0; }
	virtual int getThirdNum() { return 0; }


};

class UserA : public PlayerA
{
public:
	 void setFirstNum(int num)  { m_nFirstNum = num; }
	 void setSecondNum(int num) { m_nSecondNum = num; }
	 void setThirdNum(int num) { m_nThirdNum = num; }
	 int getFirstNum()  { return m_nFirstNum; }
	 int getSecondNum() { return m_nFirstNum; }
	 int getThirdNum() { return m_nFirstNum; }

};


class ComA : public PlayerA
{
public:
	 void setFirstNum(int num)  { m_nFirstNum = rand() % 9 + 1; }
	 void setSecondNum(int num) { m_nSecondNum = rand() % 9 + 1; }
	 void setThirdNum(int num) { m_nThirdNum = rand() % 9 + 1; }
	 int getFirstNum() { return m_nFirstNum; }
	 int getSecondNum() { return m_nSecondNum; }
	 int getThirdNum(){ return m_nThirdNum; }
};

class BaseBall2
{
private:
	PlayerA* player;
	PlayerA* com;
	Jujgment* vsa;
	Print* printa;

public:
	BaseBall2();
	~BaseBall2();
};
