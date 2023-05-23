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
	virtual void setFirstNum();
	virtual void setSeondNum();
	virtual void setThirdNum();
	virtual	int getFirstNum();
	virtual int getSecondNum();
	virtual int getThirdNum();
};

class UserA : public PlayerA
{
public:
	void setFirstNum(int num) { m_nFirstNum = num; }
	void setSeondNum(int num) { m_nSecondNum = num; }
	void setThirdNum(int num) { m_nThirdNum = num; }
	int getFirstNum() { return m_nFirstNum; }
	int getSecondNum() { return m_nFirstNum; }
	int getThirdNum() { return m_nFirstNum; }

};


class ComA : public PlayerA
{
public:
	void setFirstNum() { m_nFirstNum = rand() % 9 + 1; }
	void setSeondNum() { m_nSecondNum = rand() % 9 + 1; }
	void setThirdNum() { m_nThirdNum = rand() % 9 + 1; }
	int getFirstNum() { return m_nFirstNum; }
	int getSecondNum() { return m_nFirstNum; }
	int getThirdNum() { return m_nFirstNum; }
};

class BaseBall2
{
private:
	PlayerA* player;
	PlayerA* com;
	Jujgment* jujgment;
	Print* print;

public:
	BaseBall2();
	~BaseBall2();
};
