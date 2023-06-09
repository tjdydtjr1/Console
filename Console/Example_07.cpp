#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#pragma region 상수
/*
=> 상수란?

- 변수와 달리 저장된 데이터를 변경할 수 없는 공간에 붙혀진 이름을 의미한다.
ㄴ 상수는 한번 데이터가 저장되고 나면 변경하는것이 일반적으론 불가능
ㄴ 런타임 시작전에 상수가 된다.

-> C/C++ 언어 상수의 종류

- 리터널 상수 : 이름이 없는 상수
- 심볼릭 상수 : 이름이 존재하는 상수

=> 리터널 상수는 이름이 없는 상수를 의미하며 임시 값이라고 지칭한다.
ㄴ EX : 1, 3.14, 'C' ...

=> 심볼릭 상수는 const 키워드를 통해서 선언이 가능하며 리터널 상수와 달리
이름을 통해서 안에 저장되어 있는 데이터를 읽어 들이는것이 가능하다.

=> Constexpr (Const Expression)

- 이 키워드는 C++ 11 추가되었다.

- Constexpr는 객체나 함수 앞에 붙일 수 있는 키워드로 해당 객체나 함수의
반환값을 컴파일 타임에 알 수 있다.

- C++17부터 람다식에 적용이 가능해졌다.

* 무엇보다 컴파일 타임에 값을 알 수 있으므로 함수 호출간 템플릿 인자로 넘겨줄 때 아주 유용하다.

=> const VS constexpr (동일 선상 readonly)

- 초기화 여부와 오류 발견 시기가 다르다.

- const 변수는 초기화를 런타임까지 지연시킬 수 있지만
- constexpr 변수는 초기화를 런타임까지 지연시킬 수 없다.
	ㄴ 반드시 컴파일 타임에 초기화가 되어 있어야 한다.

- const는 런타임에 오류가 확인되지만 constexpr는 컴파일 타임에 잡아낼 수 있다.

- const는 직접 건들면 값을 바꿀 수 있지만 constexpr는 X
-> constexpr는 os가 메모리 위치를 숨기기 때문에 const와는 달리 주소로 접근해서 수정하는것 조차 불가능하다.
완벽한 상수화



=> readonly

- C#에서 지원하는 상수화 키워드

const VS readonly

- const
ㄴ 초기화 이후 값을 변경할 수 없다.
ㄴ 선언하는 시점에만 초기화 가능
ㄴ 컴파일 타임 상수

- readonly
ㄴ 초기화 이후 값을 변경할 수 없다.
ㄴ 선언하는 시점과 생성자라는 곳에서 초기화가 1번 가능하다.
ㄴ 런타임 상수

-> 컴파일 타임 상수는 변수가 실제 값으로 대체되고 런타임 상수는 변수의
참조 형식이기 때문에 성능과 속도를 고려한다면 const > readonly

- 단, 인스턴스마다 다른 값을 할당하고 싶거나 사용자 정의 타입이라면 
readonly를 사용해야 한다.

*/
#pragma endregion


void main()
{
	cout << "== 리터널 상수 ==" << endl;
	cout << "정수형 : " << 10 << ", " << 10L << ", " << 10LL << endl;
	cout << "실수형 : " << 3.14f << ", " << 3.14 << endl;
	cout << "문자형 : " << 'A' << endl;

	printf("\n");

	// 심볼릭 상수는 항상 초기화를 해줄것 할당이 되지 않음
	cout << "== 심볼릭 상수 ==" << endl;
	const int nValueA = 0;
	const float fValueA = 3.14f;
	const double dbValueA = 3.14;

	// const : 메모리의 고유성을 보존하기 위해서 사용
	cout << "출력 값 : " << nValueA << ", " << fValueA << ", " << dbValueA << endl;

}




