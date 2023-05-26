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
	// ���� ���ݷ�
	int				m_nAtk;
	// ���� ���ݷ�
	int				m_nMatk;
	// Ư�� ȿ�� �̸�
	const char*		m_chSpecial;
	// Ư�� ȿ�� ����
	int				m_nSpeff;
	// ����
	const char*		m_chExplanation;
};

struct Armor
{
	const char* m_name;

	// ���� ���� 
	int			m_nPhysicalDef;
	// ���� ����
	int			m_nMagicDef;
	// Ư�� ȿ�� �̸�
	const char*		m_chSpecial;
	// Ư�� ȿ�� ����
	int			m_nSpeff;
	// ����
	const char*		m_chExplanation;
};

struct Acce
{
	const char* m_name;

	// ���� ����
	int			m_nPhysicalDef;
	// ���� ����
	int			m_nMagicDef;
	// Ư�� ȿ�� �̸�
	const char*		m_chSpecial;
	// Ư�� ȿ�� ����
	int			m_nSpeff;
	// ����
	const char*		m_chExplanation;
};

struct Fortion
{
	// �ϱ�����
	int			m_nLowerFortion;
	// �������
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

