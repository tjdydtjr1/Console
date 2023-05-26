#pragma once
#include <iostream>
#include <vector>
#include <Windows.h>
#include <conio.h>
#include "Dot.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;


struct Weapon
{
	const char*		m_name;
	// 물리 공격력
	int				m_nAtk;
	// 마법 공격력
	int				m_nMatk;
	// 특수 효과 이름
	const char*		m_chSpecial;
	// 특수 효과 적용
	int				m_nSpeff;
	// 설명
	const char*		m_chExplanation;
};

struct Armor
{
	const char* m_name;

	// 물리 방어력 
	int			m_nPhysicalDef;
	// 마법 방어력
	int			m_nMagicDef;
	// 특수 효과 이름
	const char*		m_chSpecial;
	// 특수 효과 적용
	int			m_nSpeff;
	// 설명
	const char*		m_chExplanation;
};

struct Acce
{
	const char* m_name;

	// 물리 방어력
	int			m_nPhysicalDef;
	// 마법 방어력
	int			m_nMagicDef;
	// 특수 효과 이름
	const char*		m_chSpecial;
	// 특수 효과 적용
	int			m_nSpeff;
	// 설명
	const char*		m_chExplanation;
};

struct Fortion
{
	// 하급포션
	int			m_nLowerFortion;
	// 상급포션
	int			m_nUpperFortion;
};

class Item
{
public:
	Weapon weaponA;
	Armor armorA;
	Acce acceA;
	Fortion fortion;

	Weapon weaponB;
	Armor armorB;
	Acce acceB;

public:
	Item();
	~Item(){}

};


class VectorStore
{
public:
	//Weapon						m_weapon;
	vector<Weapon> 				m_weaponVec;
	vector<Weapon>::iterator	m_weaponIter;
	//vector<Weapon> 	m_weaponB;

	//Armor						m_armor;
	vector<Armor>				m_armorVec;
	vector<Armor>::iterator		m_armorIter;

	//vector<Armor>	m_armorB;

	//Acce						m_acce;
	vector<Acce>				m_acceVec;
	vector<Acce>::iterator		m_acceIter;
	//vector<Acce>	m_acceB;

	//Fortion						m_fortion;
	vector<Fortion>				m_fortionVec;

public:



	VectorStore() {}
	~VectorStore() {}


};

