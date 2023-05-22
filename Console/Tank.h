#pragma once
//상속
// 1. 있다는걸 알려주기
#include "Unit.h"

// 2. : (접근지정자) 부모 클래스
class Tank : Unit
{
public:
	/*
	- 면접 질문
	- 오버로딩 vs 오버라이딩
	- 개념과 차이점

	- 오버라이딩(재정의)
	- 기존에 정의된 함수를 무시해 버린다. (재정의 하겠다.)
	- 상속관계에서 자식의 클래스가 부모의 클래스에 대해서 행해진다.
	- 함수를 상속 받아 재정의 한다.

	*/
	// override 키워드 가상 함수 테이블 차후 설명
	virtual void attack() override;

	Tank();
	~Tank();
};

