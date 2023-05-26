#pragma once
#include "VectorStore.h"

class InvenVec
{
public:
	vector<Weapon> m_weaponInven;
	vector<Weapon>::iterator m_weaponIter;

	vector<Armor> m_armorInven;
	vector<Armor>::iterator m_armorIter;

	vector<Acce> m_acceInven;
	vector<Acce>::iterator m_acceIter;

	vector<Fortion> m_fortionInven;
	vector<Fortion>::iterator m_fortionIter;


public:
	InvenVec() {}
	~InvenVec() {}
};

