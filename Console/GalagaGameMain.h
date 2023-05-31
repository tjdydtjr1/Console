#pragma once
#include "GalagaObject.h"


class GalagaGameMain
{
public:
	GalagaPlayerA* m_player;
	GalagaEnemyB* m_enemyB;
	GalagaEnemyC* m_enemyC;
	GalagaBoss* m_boss;
	Bullet*		  m_bullet;
public:

	GalagaGameMain();
	~GalagaGameMain();
	
};

