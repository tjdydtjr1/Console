#pragma once

class ItemAccessories
{
protected:
	int m_SkillAtk;
	int m_MDef;
	int m_Luck;
	int m_SP;

public:
	// 접근자, 설정자 함수

	void setSkillAtk(int skillAtk) { m_SkillAtk = skillAtk; }
	int getSkillAtk() { return m_SkillAtk; }

	void setMDef(int mDef) { m_MDef = mDef; }
	int getMDef() { return m_MDef; }

	void setLuck(int luck) { m_Luck = luck; }
	int getLuck() { return m_Luck; }

	void setSP(int sp) { m_SP = sp; }
	int getSP() { return m_SP; }

public:
	ItemAccessories();
	~ItemAccessories();

};

