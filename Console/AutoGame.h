#pragma once
#include <iostream>
#include "PlayerA.h"
#include "EnemyA.h"
#include "Weapon_A.h"
#include "Accessories_A.h"
#include "Armor_A.h"


using std::cout;
using std::cin;
using std::endl;


class AutoGame
{
private:
	PlayerA*		playerA;
	EnemyA*			enemyA;
	Weapon_A*		weaponA;
	Armor_A*		armorA;
	Accessories_A*	acceA;

public:
	AutoGame();
	~AutoGame();

	
};

