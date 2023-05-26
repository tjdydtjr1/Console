#include "VectorStore.h"

Item::Item()
{
	weaponA.m_name = "무기 A";
	weaponA.m_nAtk = 100;
	weaponA.m_nMatk = 100;
	weaponA.m_chSpecial = "특수효과 A";
	weaponA.m_nSpeff = 1;
	weaponA.m_chExplanation = "설명A";


	weaponB.m_name = "무기 B";
	weaponB.m_nAtk = 200;
	weaponB.m_nMatk = 200;
	weaponB.m_chSpecial = "특수효과 B";
	weaponB.m_nSpeff = 2;
	weaponB.m_chExplanation = "설명B";

	armorA.m_name = "방어구 A";
	armorA.m_nPhysicalDef = 10;
	armorA.m_nMagicDef = 20;
	armorA.m_chSpecial = "특수효과 A";
	armorA.m_nSpeff = 1;
	armorA.m_chExplanation = "설명A";

	armorB.m_name = "방어구 B";
	armorB.m_nPhysicalDef = 20;
	armorB.m_nMagicDef = 40;
	armorB.m_chSpecial = "특수효과 B";
	armorB.m_nSpeff = 1;
	armorB.m_chExplanation = "설명B";

	acceA.m_name = "악세사리 A";
	acceA.m_nPhysicalDef = 10;
	acceA.m_nMagicDef = 20;
	acceA.m_chSpecial = "특수효과 A";
	acceA.m_nSpeff = 1;
	acceA.m_chExplanation = "설명 A";

	acceB.m_name = "악세사리 B";
	acceB.m_nPhysicalDef = 20;
	acceB.m_nMagicDef = 40;
	acceB.m_chSpecial = "특수효과 B";
	acceB.m_nSpeff = 2;
	acceB.m_chExplanation = "설명 B";

	fortion.m_nLowerFortion = 100;
	fortion.m_nUpperFortion = 100;
}
