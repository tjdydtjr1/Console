#pragma once

// DOT ���
class Pixel
{
private:
	char m_groundA[20];
	char m_groundB[20];
	char m_groundC[20];
	char m_groundD[20];
	
	int m_x;
	int m_y;

public:
	// DOT ���
	void PrintGround();
	// ĳ���� ���� ��ġ
	void SetPlayer(int x, int y);
	//

};

