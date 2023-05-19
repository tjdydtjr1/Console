#pragma once
/*
����������

- ����ġ���� �̿��� �����.

- ġƮ ��ɰ� ���� ��� �߰�
�� �ʱ� ������ : 10,000��
�� �ּ� ������ 1,000��

- 5���� �ϰų� ���� ���� ���� ���� ������ ���� ����

- �̱�� �ǵ��� x�� ��� ���� �ǵ��� x7�踦 �Ҵ´�.

- ��� ��� �ǵ��� x5�踦 ��´�.
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

	// �����ݾ� ����
	void setMoney(int money);
	// ���ñݾ� ����
	void setBatMoney(int batMoney);
};

class Dot
{
public:
	// VS ���
	void printVS(void);
	// ���������� ���
	void printCard(int num);
};

class HandGame
{
private:
	int m_countGame;

public:
	HandGame();
	~HandGame();

	// ���� ī��Ʈ ����
	void gameCount(void);
	// ���� ��� ����
	void judgePrint(void);
};

