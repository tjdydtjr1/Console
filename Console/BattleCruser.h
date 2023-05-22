#pragma once
#include "Unit.h"
#include "Tank.h"

// 다중 상속 -> 이론적인 부분 읽어 보는걸 추천
// ㄴ 다이아몬드 구조 + 스파게티 => 다른 방법 (friend 키워드 사용)
// ㄴ 문제점 : Unit, Tank 어떤것에 접근할 것인지에 대한 모호함
//			  ㄴ 깊은 복사와 얕은 복사가 일어남
//			  ㄴ 다중 상속의 문제점으로 인해 안쓰는게 좋다.
// 클래스의 상속은 기본적으로 위에서 아래로 일자형 구조를 가져야 한다.
// ㄴ 다중 상속이 도움이 되는 경우 => 너무 많은 상속으로 인해 컴파일러가 찾아가는데 시간이 오래 걸리는 경우
//
class BattleCruser : public Unit
{
public:
	virtual void attack() override;

	BattleCruser();
	~BattleCruser();

};

