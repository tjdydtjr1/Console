#include "PlayerA.h"

PlayerA::PlayerA()
{
	name = "플레이어A";
	skillA = "스킬_01";
	skillB = "스킬_02";

	m_nHP = 100;
	m_nMP = 60;
	m_nSP = 10;
	m_nAtk = 10;
	m_nDef = 5;
	m_nMDef = 5;
	m_nSkillAtk = m_nAtk * 2;
	m_nLuck = 10;

	m_nWeapon = 0;
	m_nArmor = 0;
	m_nAccessories = 0;

}
PlayerA::~PlayerA()
{
}
