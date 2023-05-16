#pragma once
#include <iostream>
#include <time.h>
#include <Windows.h>

using std::cout;
using std::endl;
using std::cin;
/*
과제1. 로또 당첨기

- 당첨번호 6개 + 보너스 번호 1개

- 6개 입력 받는다.

- 필수 : 치트

- 판정
- 1등 : 당첨 번호 6개와 내가 입력한 6개의 숫자가 같을 때
- 2등 : 당첨 번호 5개 + 보너스 번호 1개와 내가 입력한 숫자 6개가 같을 때
- 3등 : 당첨 번호 5개와 내가 입력한 5개의 숫자가 같을 때
- 4등 : 당첨 번호 4개와 내가 입력한 4개의 숫자가 같을 때
- 5등 : 당첨 번호 3개와 내가 입력한 3개의 숫자가 같을 때

*/

namespace Lotto
{
	void CreateLotto();
}