#pragma once

class ItemArmor
{
protected:
	int m_Def;
	int m_MDef;
	int m_Luck;

public:
	// 접근자, 설정자 함수
	void setDef(int def) { m_Def = def; }
	int getDef() { return m_Def; }

	void setMDef(int mDef) { m_MDef = mDef; }
	int getMDef() { return m_MDef; }

	void setLuck(int luck) { m_Luck = luck; }
	int getLuck() { return m_Luck; }


};

