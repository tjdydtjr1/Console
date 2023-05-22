#pragma once

class ItemWeapon
{
protected:
	int m_Atk;
	int m_SkillAtk;
	int m_Luck;

public:
	// 접근자, 설정자 함수
	void setAtk(int atk) { m_Atk = atk; }
	int getAtk() { return m_Atk; }

	void setSkillAtk(int skillAtk) { m_SkillAtk = skillAtk; }
	int getSkillAtk() { return m_SkillAtk; }

	void setLuck(int luck) { m_Luck = luck; }
	int getLuck() { return m_Luck; }
	


};

