#pragma once

// DOT 찍기
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
	// DOT 출력
	void PrintGround();
	// 캐릭터 시작 위치
	void SetPlayer(int x, int y);
	//

};

