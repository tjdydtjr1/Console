#pragma once
#include "VectorStore.h"
#include "InvenVec.h"
// 캐릭터 부모클래스
class PlayerVec
{
protected:
	
	// 이름
	const char* m_name;
	// 물리 공격력
	int			m_atk;
	// 마법 공격력
	int			m_mAtk;
	// Lv
	int			m_level;
	// 물리 방어력
	int			m_physicalDef;
	// 마법 방어력
	int			m_magicDef;

public:
	PlayerVec() {}
	virtual ~PlayerVec() {}

	virtual void setName(const char* name) = 0;
	virtual void setAtk(int atk) = 0;
	virtual void setMatk(int mAtk) = 0;
	virtual void setLv(int lv) = 0;
	virtual void setPhysicalDef(int pDef) = 0;
	virtual void setMagicDef(int mDef) = 0;

	virtual const char* getName() = 0;
	virtual int getAtk() = 0;
	virtual int getMatk() = 0;
	virtual int getLv() = 0;
	virtual int getPhysicalDef() = 0;
	virtual int getMagicDef() = 0;
};

class UserA : public PlayerVec
{
public:
	InvenVec m_inven;
public:
	void setName(const char* name) { m_name = name; }
	void setAtk(int atk) { m_atk = atk; }
	void setMatk(int mAtk) { m_mAtk = mAtk; }
	void setLv(int lv) { m_level = lv; }
	void setPhysicalDef(int pDef) { m_physicalDef = pDef; }
	void setMagicDef(int mDef) { m_magicDef = mDef; }

	const char* getName() { return m_name; }
	int getAtk() { return m_atk; }
	int getMatk() { return m_mAtk; }
	int getLv() { return m_level; }
	int getPhysicalDef() { return m_physicalDef; }
	int getMagicDef() { return m_magicDef; }

public:
	UserA() 
	{
		setName("플레이어");
		setAtk(100);
		setMatk(100);
		setLv(1);
		setPhysicalDef(100);
		setMagicDef(100);
	}
	~UserA() {}

};

