#include "VectorStore.h"

Item::Item()
{
	weaponA.m_name = "���� A";
	weaponA.m_nAtk = 100;
	weaponA.m_nMatk = 100;
	weaponA.m_chSpecial = "Ư��ȿ�� A";
	weaponA.m_nSpeff = 1;
	weaponA.m_chExplanation = "����A";


	weaponB.m_name = "���� B";
	weaponB.m_nAtk = 200;
	weaponB.m_nMatk = 200;
	weaponB.m_chSpecial = "Ư��ȿ�� B";
	weaponB.m_nSpeff = 2;
	weaponB.m_chExplanation = "����B";

	armorA.m_name = "�� A";
	armorA.m_nPhysicalDef = 10;
	armorA.m_nMagicDef = 20;
	armorA.m_chSpecial = "Ư��ȿ�� A";
	armorA.m_nSpeff = 1;
	armorA.m_chExplanation = "����A";

	armorB.m_name = "�� B";
	armorB.m_nPhysicalDef = 20;
	armorB.m_nMagicDef = 40;
	armorB.m_chSpecial = "Ư��ȿ�� B";
	armorB.m_nSpeff = 1;
	armorB.m_chExplanation = "����B";

	acceA.m_name = "�Ǽ��縮 A";
	acceA.m_nPhysicalDef = 10;
	acceA.m_nMagicDef = 20;
	acceA.m_chSpecial = "Ư��ȿ�� A";
	acceA.m_nSpeff = 1;
	acceA.m_chExplanation = "���� A";

	acceB.m_name = "�Ǽ��縮 B";
	acceB.m_nPhysicalDef = 20;
	acceB.m_nMagicDef = 40;
	acceB.m_chSpecial = "Ư��ȿ�� B";
	acceB.m_nSpeff = 2;
	acceB.m_chExplanation = "���� B";

	fortion.m_nLowerFortion = 100;
	fortion.m_nUpperFortion = 100;
}
