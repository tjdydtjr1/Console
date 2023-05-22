#pragma once
#include <iostream>
#include <conio.h>
#include "PlayerA.h"
#include "EnemyA.h"
#include "Weapon_A.h"
#include "Accessories_A.h"
#include "Armor_A.h"
#include "ItemPortion.h"
#include "Dot.h"



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
	ItemPortion*	portion;

	

public:
	AutoGame();
	~AutoGame();

	
};

