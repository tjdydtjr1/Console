#pragma once

class ItemAccessories
{
protected:
	int m_nSkillAtk;
	int m_nMDef;
	int m_nLuck;
	int m_nSP;

public:
	// 접근자, 설정자 함수

	void setSkillAtk(int skillAtk) { m_nSkillAtk = skillAtk; }
	int getSkillAtk() { return m_nSkillAtk; }

	void setMDef(int mDef) { m_nMDef = mDef; }
	int getMDef() { return m_nMDef; }

	void setLuck(int luck) { m_nLuck = luck; }
	int getLuck() { return m_nLuck; }

	void setSP(int sp) { m_nSP = sp; }
	int getSP() { return m_nSP; }

};

