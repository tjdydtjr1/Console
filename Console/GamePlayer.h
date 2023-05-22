#pragma once
class GamePlayer
{
protected:
	// �̸�
	const char* name;
	// ��ų �̸�
	const char* skillA;
	const char* skillB;

	// ����
	int m_nHP;			// ü��
	int m_nMP;			// ����
	int m_nSP;			// ��ų��� ���׹̳�
	int m_nAtk;			// ���ݷ�
	int m_nSkillAtk;		// ��ų ���ݷ�
	int m_nDef;			// ���� ����
	int m_nMDef;			// ���� ����
	int m_nLuck;			// ���

	// ���
	int m_nWeapon;			// ����		: ���ݷ�, ��ų ���ݷ�
	int m_nArmor;			// ��	: ����
	int m_nAccessories;		// �Ǽ��縮	: ���� ����

public:
	// ������, ������ �Լ�
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

