#pragma once
#include "GalagaObject.h"


class GalagaGameMain
{
public:
	GalagaPlayerA*	 m_player;
	GalagaEnemyB*	 m_enemyB1;
	GalagaEnemyB*	 m_enemyB2;
	GalagaEnemyB*	 m_enemyB3;
	GalagaEnemyC*	 m_enemyC1;
	GalagaEnemyC*	 m_enemyC2;

	GalagaBoss*		 m_boss;
	Bullet*			 m_bullet;
	EnemyBullet*	 m_enemyBulletC1;
	EnemyBullet*	 m_enemyBulletC2;


public:

	GalagaGameMain();
	~GalagaGameMain();
	
};

