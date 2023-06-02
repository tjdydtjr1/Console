#pragma once
#include <Windows.h>
#include <iostream>

using std::cout;
using std::cin;
using std::endl;


void Pixel(int num);

void PixelChar(int num);

void TextColor(int font, int backGround);

void gotoxy(short x, short y);

void Start();
void StartGame();
void PrintAcce();

void PrintArmor();

void PrintWeapon();

void GalagaPlayer3();
void GalagaPlayer2();
void GalagaPlayer1();


void GalagaEnemy();

void GalagaEnemyA();

void PrintBaseMap();

void testA();

// 방향키 도트
void ArrowUp();

void ArrowDown();

void ArrowRight();

void ArrowLeft();

void ArrowUpW();

void ArrowDownW();

void ArrowRightW();

void ArrowLeftW();

void ZKey();

void ZKeyW();


void Effect(const int x,const int y);
//void DeleteEffect(const int& x,const int& y);

void End();

void ScoreS();
void ScoreC();
void ScoreO();
void ScoreR();
void ScoreE();


//void DotNumber(int num);


