#pragma once

class ItemWeapon
{
protected:
	int m_nAtk;
	int m_nSkillAtk;
	int m_nLuck;

public:
	// 접근자, 설정자 함수
	void setAtk(int atk) { m_nAtk = atk; }
	int getAtk() { return m_nAtk; }

	void setSkillAtk(int skillAtk) { m_nSkillAtk = skillAtk; }
	int getSkillAtk() { return m_nSkillAtk; }

	void setLuck(int luck) { m_nLuck = luck; }
	int getLuck() { return m_nLuck; }
	


};

