#pragma once
/*
과제3. 빙고 만들기

- 0 ~ 24까지의 수를 랜덤으로 배치해서 5 x 5로 출력한다.
- 숫자를 선택하면 #, %, & 등등(알아서) 바꾼다.
- 빙고가 되면 빙고 카운트가 올라가고 5 빙고가 되면 게임이 종료 된다.
  ㄴ 단, 게임이 종료되면 프로그램이 종료되는게 아니라 완성된 빙고가 떠있어야 한다.


도전 과제1. 빙고
- 위에 룰과 같음
- 단, 혼자하는 빙고가 아닌 AI와 번갈아 가며 플레이하는 빙고 버전
- 완성도는 AI 수준에 따라서 나뉜다.


한줄 조사. 4대 문자열 + 포인터
- 노트에 적어온다.
- 비유할것 생각해 온다.
*/

#include <iostream>
#include <Windows.h>
#include <time.h>

using std::cout;
using std::cin;
using std::endl;

namespace BingoGame
{
	void Init();
	void Bingo();
	void AiBingo();
}