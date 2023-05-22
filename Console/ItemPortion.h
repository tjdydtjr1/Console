#pragma once
class ItemPortion
{
protected:
	int m_nNormalP;
	int m_nRareP;
	int m_nUniqueP;

public:
	// 접근자, 설정자 함수
	void setNormalP(int normalP) { m_nNormalP = normalP; }
	int getNormalP() { return m_nNormalP; }

	void setRareP(int rareP) { m_nRareP = rareP; }
	int getRareP() { return m_nRareP; }

	void setUniqueP(int uniqueP) { m_nNormalP = uniqueP; }
	int getUniqueP() { return m_nUniqueP; }

	ItemPortion();
	~ItemPortion();


};

