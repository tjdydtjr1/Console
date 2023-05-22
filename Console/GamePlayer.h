#pragma once
class GamePlayer
{
protected:
	// 이름
	const char* name;
	// 스킬 이름
	const char* skillA;
	const char* skillB;

	// 스텟
	int m_nHP;			// 체력
	int m_nMP;			// 마나
	int m_nSP;			// 스킬사용 스테미너
	int m_nAtk;			// 공격력
	int m_nSkillAtk;		// 스킬 공격력
	int m_nDef;			// 물리 방어력
	int m_nMDef;			// 마법 방어력
	int m_nLuck;			// 행운

	// 장비
	int m_nWeapon;			// 무기		: 공격력, 스킬 공격력
	int m_nArmor;			// 방어구	: 방어력
	int m_nAccessories;		// 악세사리	: 마법 방어력

public:
	// 접근자, 설정자 함수
	void setHP(int hp) { m_nHP = hp; }
	int getHP() { return m_nHP; }

	void setMP(int mp) { m_nMP = mp; }
	int getMP() { return m_nMP; }

	void setSP(int sp) { m_nSP = sp; }
	int getSP() { return m_nSP; }

	void setAtk(int atk) { m_nAtk = atk; }
	int getAtk() { return m_nAtk; }

	void setSkillAtk(int skillAtk) { m_nSkillAtk = skillAtk; }
	int getSkillAtk() { return m_nSkillAtk; }

	void setDef(int def) { m_nDef = def; }
	int getDef() { return m_nDef; }

	void setMDef(int mDef) { m_nMDef = mDef; }
	int getMDef() { return m_nMDef; }

	void setLuck(int luck) { m_nLuck = luck; }
	int getLuck() { return m_nLuck; }

	void setSkill(const char* skill) { skillA = skill; }
	const char* getSkill() { return skillA; }

};

