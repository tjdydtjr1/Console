#pragma once
/*
가위바위보

- 스위치문을 이용해 만든다.

- 치트 기능과 배팅 기능 추가
ㄴ 초기 소지금 : 10,000원
ㄴ 최소 배팅은 1,000원

- 5판을 하거나 내가 가진 돈을 전부 잃으면 게임 종료

- 이기면 판돈에 x를 얻고 지면 판돈에 x7배를 잃는다.

- 비길 경우 판돈에 x5배를 얻는다.
*/
#include <iostream>
#include <Windows.h>
using std::cout;
using std::cin;
using std::endl;

void TextColor(int font, int backGround);

enum EHandCard
{
	ROCK,
	PAPER,
	SCISSORS
};

class Player
{
private:
	int m_myMoney;
	int m_batMoney;

public:
	Player();
	~Player();

	// 소지금액 세팅
	void setMoney(int money);
	// 배팅금액 세팅
	void setBatMoney(int batMoney);
};

class Dot
{
public:
	// VS 출력
	void printVS(void);
	// 가위바위보 출력
	void printCard(int num);
};

class HandGame
{
private:
	int m_countGame;

public:
	HandGame();
	~HandGame();

	// 게임 카운트 증가
	void gameCount(void);
	// 게임 결과 판정
	void judgePrint(void);
};

