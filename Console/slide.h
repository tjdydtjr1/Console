#pragma once

/*
과제1. 숫자 슬라이드

- 사이즈 : 5 x 4
- 시작위치는 우측 하단 (고정)

- 치트 필수
ㄴ 치트키를 누르면 하나의 숫자를 제외하고 나머지 숫자는 정렬된다.
ㄴ 사용자가 마지막 조각을 맞추면서 프로그램이 끝나면 OK

- 일반적으로 게임 룰에 기반한 예외처리 해온다.
*/
#include <iostream>
#include <time.h>
#include <Windows.h>

using std::cout;
using std::cin;
using std::endl;

namespace Slide
{
	void NumSlide();
}