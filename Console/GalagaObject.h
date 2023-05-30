#pragma once
#include <Windows.h>
#include <iostream>
#include <conio.h>
#include "Dot.h"

#define UP 72
#define DOWN 80
#define LEFT 75 
#define RIGHT 77



class GalagaObject
{
public:
	int m_hp;
public:

	GalagaObject() : m_hp(1)
	{
		
	}
	~GalagaObject()
	{

	}
};

