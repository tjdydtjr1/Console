#pragma once
// - 두 수를 빼는 함수 구현
// ㄴ 1. 템플릿 구현
// ㄴ 2. 생성자 호출 불가
// ㄴ 3. 두 수를 입력받아 감소 되는 결과를 보여주는 방식 (런타임)

template <typename T>
void Minus(T numL, T numR)
{
	cout << (numL - numR) << endl;
}