#pragma once
#include "VectorStore.h"
#include "InvenVec.h"
// ĳ���� �θ�Ŭ����
class PlayerVec
{
protected:
	
	// �̸�
	const char* m_name;
	// ���� ���ݷ�
	int			m_atk;
	// ���� ���ݷ�
	int			m_mAtk;
	// Lv
	int			m_level;
	// ���� ����
	int			m_physicalDef;
	// ���� ����
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
	virtual int setMagicDef() = 0;
};

class UserA : public PlayerVec
{
private:

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
	int setMagicDef() { return m_magicDef; }


public:
	UserA() {}
	~UserA() {}

};

