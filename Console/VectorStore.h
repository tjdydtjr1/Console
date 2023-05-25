#pragma once
#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;


struct Weapon
{
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

class VectorStore
{
public:
	vector<Weapon> 	m_weaponA;
	vector<Weapon> 	m_weaponB;

	vector<Armor>	m_armorA;
	vector<Armor>	m_armorB;

	vector<Acce>	m_acceA;
	vector<Acce>	m_acceB;

	vector<Fortion>	m_fortion;

public:
	VectorStore() {}
	~VectorStore() {}


};

