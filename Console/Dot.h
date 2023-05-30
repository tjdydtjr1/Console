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

void PrintAcce();

void PrintArmor();

void PrintWeapon();

void GalagaPlayer();

void GalagaEnemy();




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

void DrawTexta();