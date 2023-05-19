#include "HandGame.h"

HandGame::HandGame()
{
	m_countGame = 0;
}

HandGame::~HandGame()
{
}

void HandGame::gameCount(void)
{
	this->m_countGame;
}

void HandGame::judgePrint(void)
{

}

Player::Player()
{
	m_myMoney = 0;
	m_batMoney = 0;
}

Player::~Player()
{
}

void Player::setMoney(int money)
{
	this->m_myMoney = money;
}

void Player::setBatMoney(int batMoney)
{
	this->m_batMoney = batMoney;
}

void TextColor(int font, int backGround)
{
	int Color = font + backGround * 16;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color);
}

void Dot::printVS(void)
{
	// VS
	TextColor(4, 0);
	cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○○○○○○"; TextColor(4, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○○"; TextColor(4, 0); cout << "●●●●●●" << endl;
	TextColor(0, 0); cout << "○"; TextColor(4, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○○○○"; TextColor(4, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○"; TextColor(4, 0); cout << "●●●●●"; TextColor(0, 0); cout << "○○○○" << endl;
	TextColor(0, 0); cout << "○○"; TextColor(4, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○○"; TextColor(4, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○"; TextColor(4, 0); cout << "●●●●●"; TextColor(0, 0); cout << "○○○○○" << endl;
	TextColor(0, 0); cout << "○○○"; TextColor(4, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○"; TextColor(4, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○○○"; TextColor(4, 0); cout << "●●●●●●●"; TextColor(0, 0); cout << "○" << endl;
	TextColor(0, 0); cout << "○○○○"; TextColor(4, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○"; TextColor(4, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○○○○○○"; TextColor(4, 0); cout << "●●●●●●" << endl;
	TextColor(0, 0); cout << "○○○○○"; TextColor(4, 0); cout << "●●"; TextColor(0, 0); cout << "○○○"; TextColor(4, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○○○○○○○"; TextColor(4, 0); cout << "●●●●●" << endl;
	TextColor(0, 0); cout << "○○○○○○"; TextColor(4, 0); cout << "●●"; TextColor(0, 0); cout << "○"; TextColor(4, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○○○○○○○"; TextColor(4, 0); cout << "●●●●●"; TextColor(0, 0); cout << "○○" << endl;
	TextColor(0, 0); cout << "○○○○○○○"; TextColor(4, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○○○○○○○"; TextColor(4, 0); cout << "●●●●●"; TextColor(0, 0); cout << "○○○○" << endl;

}

void Dot::printCard(int num)
{
	switch (num)
	{
	case 0:
	{

		//
		TextColor(0, 0);
		cout << "○○"; TextColor(7, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○○○○"; TextColor(7, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○" << endl;
		cout << "○○○"; TextColor(7, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○○"; TextColor(7, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○" << endl;
		cout << "○○○○"; TextColor(7, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○"; TextColor(7, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○" << endl;
		cout << "○○○○○"; TextColor(7, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○"; TextColor(7, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○" << endl;
		cout << "○○○○○○"; TextColor(7, 0); cout << "●●"; TextColor(0, 0); cout << "○○○"; TextColor(7, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○" << endl;
		cout << "○○○○○○○"; TextColor(7, 0); cout << "●●"; TextColor(0, 0); cout << "○"; TextColor(7, 0); cout << "●●●"; TextColor(0, 0); cout << "○○○○○○○○" << endl;
		cout << "○○○"; TextColor(4, 0); cout << "●"; TextColor(0, 0); cout << "○"; TextColor(4, 0); cout << "●"; TextColor(0, 0); cout << "○○"; TextColor(4, 0); cout << "●●●"; TextColor(0, 0); cout << "○○"; TextColor(4, 0); cout << "●"; TextColor(0, 0); cout << "○"; TextColor(4, 0); cout << "●"; TextColor(0, 0); cout << "○○○○○" << endl;
		cout << "○○"; TextColor(4, 0); cout << "●"; TextColor(0, 0); cout << "○"; TextColor(4, 0); cout << "●"; TextColor(0, 0); cout << "○"; TextColor(4, 0); cout << "●●"; TextColor(0, 0); cout << "○○○"; TextColor(4, 0); cout << "●●"; TextColor(0, 0); cout << "○"; TextColor(4, 0); cout << "●"; TextColor(0, 0); cout << "○"; TextColor(4, 0); cout << "●"; TextColor(0, 0); cout << "○○○○" << endl;
		cout << "○○"; TextColor(4, 0); cout << "●"; TextColor(0, 0); cout << "○"; TextColor(4, 0); cout << "●"; TextColor(0, 0); cout << "○○"; TextColor(4, 0); cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(4, 0); cout << "●"; TextColor(0, 0); cout << "○○"; TextColor(4, 0); cout << "●"; TextColor(0, 0); cout << "○"; TextColor(4, 0); cout << "●"; TextColor(0, 0); cout << "○○○○" << endl;
		cout << "○○"; TextColor(4, 0); cout << "●"; TextColor(0, 0); cout << "○"; TextColor(4, 0); cout << "●"; TextColor(0, 0); cout << "○"; TextColor(4, 0); cout << "●●"; TextColor(0, 0); cout << "○○○"; TextColor(4, 0); cout << "●●"; TextColor(0, 0); cout << "○"; TextColor(4, 0); cout << "●"; TextColor(0, 0); cout << "○"; TextColor(4, 0); cout << "●"; TextColor(0, 0); cout << "○○○○" << endl;
		cout << "○○○"; cout << "●"; cout << "○"; cout << "●"; cout << "○○○○○○○"; cout << "●"; cout << "○"; cout << "●"; cout << "○○○○○" << endl;
		cout << "○○○○○○○○○○○○○○○○○○○○○" << endl;
		cout << "○○○○○○○○○○○○○○○○○○○○○" << endl;
		TextColor(15, 0);
	}
	break;
	case 1:
	{
		//
		TextColor(0, 0);
		cout << "○○○○○○○○○○○○○○○○○○○○○○○○○" << endl;
		cout << "○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○" << endl;
		TextColor(15, 0);	cout << "●●"; TextColor(0, 0); cout << "○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○" << endl;
		TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○" << endl;
		TextColor(15, 0);	cout << "●●"; TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○" << endl;
		TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○○○○○○○○○○"; TextColor(15, 0); cout << "●●●●"; TextColor(0, 0); cout << "○○" << endl;
		TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○○○○○○○○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●●" << endl;
		cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○○○○○○○○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●●" << endl;
		cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○○○○○○○○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●●" << endl;
		TextColor(0, 0); cout << "○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○○○○○○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○" << endl;
		cout << "○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○○○○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○○" << endl;
		cout << "○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○○○○"; TextColor(15, 0); cout << "●●●●●"; TextColor(0, 0); cout << "○○○○" << endl;
		cout << "○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○" << endl;
		cout << "○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○" << endl;
		cout << "○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○" << endl;
		cout << "○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○" << endl;
		cout << "○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○" << endl;
		TextColor(15, 0);

	}
	break;
	case 2:
	{

		//
		TextColor(0, 0);
		cout << "○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○" << endl;
		cout << "○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○" << endl;
		cout << "○○○○○○○○○○○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○○○○○○○○○○○○○○" << endl;
		cout << "○○○○○○○○○○○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○○○○○○○○○○○○○○○○○○○" << endl;
		cout << "○○○○○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○○○○○○○○○○○○" << endl;
		cout << "○○○○○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○○○○○○○○○○○○○○○○○" << endl;
		cout << "○○○○○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○○○○○○○○" << endl;
		cout << "○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○○○○○○○○○○○○○○" << endl;
		TextColor(15, 0);	cout << "●"; TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○○○○○○○○○○○○○○○" << endl;
		TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○○○○○○○○○○○○○○" << endl;
		cout << "○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○○○○○○○○" << endl;
		cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○○○○○○○○○○○○○○○○○○○○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○" << endl;
		cout << "○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○○○○○○○○○○○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○○" << endl;
		cout << "○○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○○○○○○○○○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○○○" << endl;
		cout << "○○○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○○○○○○○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○○○○" << endl;
		cout << "○○○○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○○○○○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○○○○○○○○○" << endl;
		cout << "○○○○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○○○○○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○○○○○○○○○" << endl;
		cout << "○○○○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○○○○○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○○○○○○○○○" << endl;
		TextColor(15, 0);


	}
	break;

	default:
		{
			printf("해당하는 카드가 없습니다.\n");
		}
		break;
	}
}
