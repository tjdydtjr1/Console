#pragma once
#include <Windows.h>
#include <iostream>
#include <conio.h>
#include "Dot.h"

// 조작키
#define UP 72
#define DOWN 80
#define LEFT 75 
#define RIGHT 77
#define ESC 27
#define ENTER 13

// 플레이어 X , Y 배열
#define PLANEX 15
#define PLANEY 14


class GalagaObject
{
protected:
	int m_hp;
	bool m_die;
	int m_x;
	int m_y;
public:
	// 오브젝트 생성
	virtual void printObject(const int& x,const int& y) {}
	// 오브젝트 제거
	virtual void deleteObject(const int& x, const int& y) {}
	virtual void moveObject(const int& x, const int& y){}
	void setX(int x) { m_x = x; }
	void setY(int y) { m_y = y; }
	void setDie(bool die) { m_die = die; }
	int getX() { return m_x; }
	int getY() { return m_y; }
	bool getDie() { return m_die; }


	GalagaObject()
		: m_hp(1),
		  m_die(false),
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
	char m_end;
public:
	void printObject(const int& x,const int& y)
	{
		// 플레이어
		int plane[PLANEY][PLANEX] =
		{
			0,0,0,0,0,0,0,7,0,0,0,0,0,0,0,
			0,0,0,0,0,0,0,7,0,0,0,0,0,0,0,
			0,0,0,0,0,0,7,7,7,0,0,0,0,0,0,
			0,0,0,4,0,0,7,7,7,0,0,4,0,0,0,
			0,0,0,4,0,0,7,7,7,0,0,4,0,0,0,
			4,0,0,7,0,7,7,7,7,7,0,7,0,0,4,
			4,0,0,7,7,7,7,4,7,7,7,7,0,0,4,
			7,0,0,0,7,7,4,4,4,7,7,0,0,0,7,
			7,0,0,7,7,7,4,7,4,7,7,7,0,0,7,
			7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,
			7,7,0,0,0,4,7,7,7,4,0,0,0,7,7,
			7,7,0,0,4,4,7,7,7,4,4,0,0,7,7
		};
		for (int i = 0; i < PLANEY; ++i)
		{
			gotoxy(x, y + i);
			for (int j = 0; j < PLANEX; ++j)
			{
				Pixel(plane[i][j]);
			}

		}
	}
	void deleteObject(const int& x,const int& y)
	{
		for (int i = 0; i < PLANEY; ++i)
		{
			gotoxy(x, y + i);
			for (int j = 0; j < PLANEX; ++j)
			{
				Pixel(0);
			}
		}
	}
	void moveObject(char& keyInput,const int& x,const int& y)
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
		case ESC:
		{
			// 메뉴 종료 조건
			// 게임 중단 메뉴
			TextColor(7, 0);
			gotoxy(51, 25);
			printf("==================");
			TextColor(8, 0);
			gotoxy(51, 26);
			printf("1. 계속하기");
			gotoxy(51, 27);
			TextColor(8, 0);
			printf("2. 게임 종료");
			
			while (keyInput != ENTER)
			{
				keyInput = _getch();
				switch (keyInput)
				{
				case UP:
				{
					TextColor(7, 0);
					gotoxy(51, 25);
					printf("==================");
					gotoxy(51, 26);
					TextColor(7, 0);
					printf("1. 계속하기");
					gotoxy(51, 27);
					TextColor(8, 0);
					printf("2. 게임 종료");
					m_end = UP;
				}
				break;
				case DOWN:
				{
					TextColor(7, 0);
					gotoxy(51, 25);
					printf("==================");
					gotoxy(51, 26);
					TextColor(8, 0);
					printf("1. 계속하기");
					gotoxy(51, 27);
					TextColor(7, 0);
					printf("2. 게임 종료");
				
					m_end = DOWN;
				}
				break;
				}
			}
			// 메뉴 지우기
			gotoxy(51, 25);
			for (int i = 0; i < 13; ++i)
			{
				Pixel(0);
			}
			gotoxy(51, 26);
			for (int i = 0; i < 10; ++i)
			{
				Pixel(0);
			}
			gotoxy(51, 27);
			for (int i = 0; i < 10; ++i)
			{
				Pixel(0);
			}
			gotoxy(51, 29);
			for (int i = 0; i < 13; ++i)
			{
				Pixel(0);
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
	// 수정할것
	void printObject(const int& x,const int& y)
	{
		int enemy[6][8] =
		{
			4, 0, 0, 1, 1, 0, 0, 0,
			4, 0, 7, 7, 7, 7, 0, 4,
			4, 4, 4, 7, 7, 0, 0, 4,
			0, 0, 4, 7, 7, 4, 4, 4,
			4, 4, 4, 1, 1, 0, 0, 4,
			4, 0, 0, 0, 0, 0, 0, 4,
		};
		for (int i = 0; i < 6; ++i)
		{
			gotoxy(x, y + i);
			for (int j = 0; j < 8; ++j)
			{
				Pixel(enemy[i][j]);
			}
		}
	}
	void deleteObject(const int& x, const int& y)
	{
		for (int i = 0; i < 8; ++i)
		{
			gotoxy(x, y + i);
			for (int j = 0; j < 6; ++j)
			{
				Pixel(0);
			}
		}
	}
	void moveObject(const int& x, const int& y)
	{
		m_x = x;
		m_y = y;
		deleteObject(m_x, m_y);
		++m_x;
		if (m_y > 0)
		{
			m_y = 3;
		}
		m_x += rand() % 3;
		m_y += rand() % 3;
		m_y -= rand() % 2;
		if (m_x > 165)
		{
			deleteObject(m_x, m_y);
			m_x = 5;
			return;
		}
		printObject(m_x, m_y);
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
	void deleteObject(const int& x, const int& y)
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
	void moveObject(const int& x, const int& y)
	{
		m_x = x;
		m_y = y;
		deleteObject(m_x, m_y);
		++m_x;
		if (m_x > 165)
		{
			deleteObject(m_x, m_y);
			m_x = 5;
			return;
		}
		printObject(m_x, m_y);
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
	void createBullet(const int& x ,const int& y)
	{
		if (m_fire)
		{
			return;
		}
		m_x = x + 14;
		m_y = y - 1;
		m_fire = true;
	}
	
	void printBullet()
	{
		--m_y;

		

		gotoxy(m_x, m_y + 1);
		Pixel(0);
		gotoxy(m_x, m_y);
		Pixel(10);
		if (m_y <= 0)
		{
			m_fire = false;
			gotoxy(m_x, m_y);
			cout << "        ";
		}
	}
	~Bullet()
	{
	}

};


