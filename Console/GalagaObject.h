#pragma once
#include <Windows.h>
#include <iostream>
#include <conio.h>
#include "Dot.h"

#define UP 72
#define DOWN 80
#define LEFT 75 
#define RIGHT 77
#define ESC 27
#define ENTER 13



class GalagaObject
{
protected:
	int m_hp;
	bool m_Die;
	int m_x;
	int m_y;
public:
	virtual void printObject(const int& x,const int& y) {}
	void setX(int x) { m_x = x; }
	void setY(int y) { m_y = y; }
	int getX() { return m_x; }
	int getY() { return m_y; }


	GalagaObject()
		: m_hp(1),
		  m_Die(false),
		  m_x(0),
		  m_y(0)
	{	
	}
	~GalagaObject()
	{
	}
};

//     파생클래스             부모클래스
class GalagaPlayerA : public GalagaObject
{
public:
	void printObject(const int& x,const int& y)
	{
		// 플레이어
		int player[5][5] =
		{
			0, 0, 4, 0, 0,
			0, 7, 7, 7, 0,
			4, 7, 4, 7, 4,
			0, 4, 7, 4, 0,
			0, 0, 7, 0, 0
		};

		for (int i = 0; i < 5; ++i)
		{
			gotoxy(x, y + i);
			for (int j = 0; j < 5; ++j)
			{
				Pixel(player[i][j]);
			}
		}
	}
	void deleteObject(const int& x,const int& y)
	{
		for (int i = 0; i < 5; ++i)
		{
			gotoxy(x, y + i);
			for (int j = 0; j < 5; ++j)
			{
				Pixel(0);
			}
		}
	}
	void movePlayer(char& keyInput,const int& x,const int& y)
	{
		switch (keyInput)
		{
		case UP:
		{
			deleteObject(x,y);
			
			ArrowUpW();
			// goto
			printObject(x, y - 1);
			setY(y - 1);
		}
		break;
		case LEFT:
		{
			deleteObject(x, y);
			ArrowLeftW();
			// goto
			printObject(x - 1, y);
			setX(x - 1);
		}
		break;
		case DOWN:
		{
			deleteObject(x, y);
			ArrowDownW();

			// goto
			printObject(x, y + 1);
			setY(y + 1);
		}
		break;
		case RIGHT:
		{
			deleteObject(x, y);
			ArrowRightW();
			// goto
			printObject(x + 1, y);
			setX(x + 1);
		}
		break;
		/*case 'z':
		{
			ZKeyW();
		}
		break;*/
		case ESC:
		{
			// 메뉴 종료 조건
			char temp = 0;
			// 게임 중단 메뉴
			TextColor(7, 0);
			gotoxy(40, 25);
			printf("=============");
			TextColor(8, 0);
			gotoxy(40, 26);
			printf("1. 계속하기");
			gotoxy(40, 27);
			TextColor(8, 0);
			printf("2. 게임 종료");
			gotoxy(40, 29);
			TextColor(4, 0);
			("=============");
			while (keyInput != ENTER)
			{


				keyInput = _getch();
				switch (keyInput)
				{
				case UP:
				{
					TextColor(7, 0);
					gotoxy(40, 25);
					printf("=============");
					gotoxy(40, 26);
					TextColor(7, 0);
					printf("1. 계속하기");
					gotoxy(40, 27);
					TextColor(8, 0);
					printf("2. 게임 종료");
					gotoxy(40, 29);
					TextColor(4, 0);
					("=============");
					temp = UP;
				}
				break;
				case DOWN:
				{
					TextColor(7, 0);
					gotoxy(40, 25);
					printf("=============");
					gotoxy(40, 26);
					TextColor(8, 0);
					printf("1. 계속하기");
					gotoxy(40, 27);
					TextColor(7, 0);
					printf("2. 게임 종료");
					gotoxy(40, 29);
					TextColor(4, 0);
					("=============");
					temp = DOWN;
				}
				break;

				}
			}
			// 메뉴 지우기
			gotoxy(40, 25);
			for (int i = 0; i < 13; ++i)
			{
				Pixel(0);
			}
			gotoxy(40, 26);
			for (int i = 0; i < 10; ++i)
			{
				Pixel(0);
			}
			gotoxy(40, 27);
			for (int i = 0; i < 10; ++i)
			{
				Pixel(0);
			}
			gotoxy(40, 29);
			for (int i = 0; i < 13; ++i)
			{
				Pixel(0);
			}
			if (temp == DOWN && keyInput == ENTER)
			{
				return;
			}
		}
		break;
		default:
			break;
		}
	}
	
	GalagaPlayerA() {}
	~GalagaPlayerA() {}
};
class GalagaBoss : public GalagaObject
{
public:
	void printObject(const int& x,const int& y)
	{
		//
		int boss[7][7] =
		{
			0, 1, 1, 1, 1, 1, 0,
			1, 1, 5 ,1, 5, 1, 1,
			1, 1, 4, 4, 4, 1, 1,
			1, 1, 1, 1, 1, 1, 1,
			1, 0, 3, 0, 3, 0, 1
		};
		for (int i = 0; i < 7; ++i)
		{
			gotoxy(x, y + i);
			for (int j = 0; j < 7; ++j)
			{
				Pixel(boss[i][j]);
			}
		}
	}
	GalagaBoss() {}
	~GalagaBoss() {}
};

class GalagaEnemyB : public GalagaObject
{
public:
	void printObject(const int& x,const int& y)
	{
		int enemy[5][5] =
		{
			0, 0, 0, 0, 0,
			0, 1, 3, 1, 0,
			1, 5, 1, 5, 1,
			1, 5, 1, 5, 1,
			0, 1, 1, 1, 0
		};
		for (int i = 0; i < 5; ++i)
		{
			gotoxy(x, y + i);
			for (int j = 0; j < 5; ++j)
			{
				Pixel(enemy[i][j]);
			}
		}
	}
	
	GalagaEnemyB() {}
	~GalagaEnemyB() {}
};

class GalagaEnemyC : public GalagaObject
{
public:
	void printObject(const int& x,const int& y)
	{
		int enemy[5][5] =
		{
			0, 0, 0, 0, 0,
			0, 4, 3, 4, 0,
			4, 1, 4, 1, 4,
			4, 1, 4, 1, 4,
			0, 4, 4, 4, 0
		};
		for (int i = 0; i < 5; ++i)
		{
			gotoxy(x, y + i);
			for (int j = 0; j < 5; ++j)
			{
				Pixel(enemy[i][j]);
			}
		}
	}
	GalagaEnemyC() {}
	~GalagaEnemyC() {}
};

class Bullet
{
public:
	int m_x;
	int m_y;
	bool m_fire;
public:
	Bullet()
		: m_x(0)
		, m_y(0)
		, m_fire(false)
	{
	}
	void createBullet(const int x ,const int y)
	{
		if (m_fire)
		{
			return;
		}

		m_x = x;
		m_y = y - 1;

		m_fire = true;
	}
	
	void Bullet::printBullet()
	{
		m_y--;

		if (m_y < -1)
		{
			m_fire = false;
		}

		gotoxy(m_x, m_y + 1);
		Pixel(0);
		gotoxy(m_x, m_y);
		Pixel(10);
	}
	~Bullet()
	{
	}

};


