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

