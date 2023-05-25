#pragma once
#include "StoreMain.h"

StoreMain::StoreMain()
{
	m_store = new VectorStore;
	m_player = new UserA;
	


	m_store->m_weaponA->m_nAtk = 100;
	m_store->m_weaponA->m_nMatk = 200;

	
}

StoreMain::~StoreMain()
{
	delete m_store;
	delete m_player;
}
