#pragma once

class ItemArmor
{
protected:
	int m_nDef;
	int m_nMDef;
	int m_nLuck;

public:
	// 접근자, 설정자 함수
	void setDef(int def) { m_nDef = def; }
	int getDef() { return m_nDef; }

	void setMDef(int mDef) { m_nMDef = mDef; }
	int getMDef() { return m_nMDef; }

	void setLuck(int luck) { m_nLuck = luck; }
	int getLuck() { return m_nLuck; }
};

