// 한줄 주석 : 코드에 영향을 주지 않고 메모를 남긴다.
// ㄴ 내가 또는 타인을 위해서

/*
단위 주석
단위 주석
*/

// 윈도우 -> 핸들 번호 확인(실행하는곳)

/*
- 메인 함수
ㄴ C/C++ 언어로 작성 되어 있는 프로그램이 처음 실행 되는 부분

ㄴ C/C++ 언어는 프로그램이 처음 실행되기 위해서 반드시 main 함수를
포함하고 있어야 한다.

ㄴ main 함수를 포함하고 있지 않다면 프로그램 구동 자체가 불가능하다.

=> C/C++ 언어가 프로그램으로 변환되기 위해서 거치는 큰 단계

- 전처리기 : 미리 처리해주는
- 컴파일	  : 파일로 만들어주는
- 링크
*/


#pragma region 프로그래밍 언어
/*
=> 프로그래밍 이란?

- Programming. Program에 ing가 붙었으니 지금 프로그램을 하고 있다
라는 뜻으로 직역할 수 있다.

=> 프로그래밍 언어란?

- 컴퓨터와 대화 또는 명령을 할 수 있는 일련의 명령문을 작성할 수 있는 
언어를 의미한다.
ㄴ 프로그래밍 언어를 이용하면 프로그램을 만드는 것이 가능

- 프로그래밍 언어에는 다양한 언어가 존재하지만 크게 가지로
분류할 수 있다.
ㄴ 1. 특정 기능 구현에 최적화 된 언어
ㄴ 2. 범용적 언어

=> 프로그래밍 언어를 컴퓨터에서 이해하는 방법

- C/C++ 언어로 작성되어 있는 코드는 컴퓨터가 이해할 수 없는
명령문이기 때문에 C/C++언어는 중간에서 언어를 해석해주는 번역가 역할을 하는
그 무언가가 필요하다.

* 그게 바로 "컴파일러"
ㄴ 컴파일러는 해당 코드를 컴퓨터가 이해할 수 있는 언어로
변환하는 역할을 한다.

즉, 컴파일러가 프로그래밍 언어와 컴퓨터 사이에서 통역사
역할을 해주기 때문에 프로그래밍 언어를 작성하는 사람은
컴퓨터의 언어를 모른다 하더라도 컴퓨터에게 명령을 내리는 것이 가능하다.

* 컴파일러 != 인터프리터 

=> 프로그래밍 기술 및 기법

- 프로그래밍 기술은 점차 발전해 왔으며 앞으로도 계속 발전해
나갈것이다. (평생 공부..)
ㄴ 하지만 현재는 크게 4가지로 분류할 수 있다.

1. 절차지향(순차적) 프로그래밍 => C언어
ㄴ 가장 초기부터 사용된 기법

ㄴ 코드의 흐름에 따라 프로그래밍 한다.

ㄴ 이 방식은 프로그램의 흐름을 따라가기 때문에 구조적이지 못하고
코드가 여기저기 흩어져 있기 때문에 유지보수가 아주 힘들다.

2. 구조적(함수) 프로그래밍 => 유사성 있는 것끼리 묶어서 모듈화 
ㄴ 순차적 프로그래밍의 단점을 보완하기 위해 나온 방식

ㄴ 코드의 구조를 "기능" 단위로 묶는 방식

ㄴ 함수 지향 프로그램이라고 부르며 순차적 프로그램이보다
유지보수가 용이하다는 장점이 존재한다.

ㄴ 문제가 생겼을때 해당 문제가 발생한 기능만 중점적으로 살펴보면 되기 때문.

* 이러한 기능들을 한데 묶어 모듈이라는 형태로 만들고 이게 바로
* 라이브러리로 발전을 해왔다.

3. 객체지향 프로그래밍
ㄴ 위의 두 방식과는 달리 코드의 기준을 "객체" 단위로 묶어
프로그래밍 하는 방식을 의미한다.

ㄴ 모든 대상에는 속성과 메서드가 있고 이를 하나로 묵어
객체로 만드는 방법론 (여기서 말하는 대상에는 눈에 보이지 않는 것도 포함이 된다.)

ㄴ 객체지향 기법에는 상속이나 다형성등 다양한 개념이 존재하지만
그건 차후에 다루기..

4. 컴포넌트 기반 프로그래밍
ㄴ 비교적 최근에 등장한 개념

ㄴ 코딩의 기준을 객체가 아닌 컴포넌트 단위로 프로그래밍 한다.

ㄴ 객체지향 프로그래밍이 사람이라는 객체를프로그래밍 했다면
컴포넌트 방식은 사람이 가지고 있는 컴포넌트(머리,팔,다리,몸통)
부품으로 세분화하여 코딩하는 방법론

ㄴ 각각의 컴포넌트는 독립적으로 움직이는 부품과 같으므로
다리를 떼서 동물에게 붙여주면 걷거나 달리는 것이 가능하며
앞으로 배우게될 언리얼 에서 추구하는 방식

ㄴ 굉장히 많은 컴포넌트가 존재하며 이것을 추가하는것으로
원하는 기능을 간단하게 구현할 수 있다.

*/
#pragma endregion

// # : C계열에서 사용하는 명령 지시자
// 헤더파일 (C++ 프로그래밍에서 가장 기본이자 중요한 헤더파일)
#include <iostream>

/*
iostream : 입력과 출력을 담당하는 C++ 표준 라이브러리
#include : 키워드는 해당 경로에 있는 파일의 내용을 단순하게 복사하는 역할을 한다.

- 표준 라이브러리는 보통 <헤더파일> 이렇게 사용한다.
- 프로그래밍 언어도 결국 사람이 만들었기 때문에 익숙해진다면
대략적인 유추가 가능하다. (i (input) / o (output) )
- stream(통로)은 여러 장치에 입출력 작업이 실행되는것을 "추상화" 시킨것
- <iostream>에 정의 되어 있는 cout, cin, 그리고 endl



*/

// C++ 언어도 여러 버전이 존재한다. 
// (C++11 모던)
// .h 헤더파일은 구버전
#include <Windows.h>

// 사용자 정의 헤더 파일
//#include "NewActor.h"

//
using namespace std;

void main()
{
	/*
	<iostream>
	#pragma region
	#pragma endregion
	
	=> 코드 작성의 기본
	ㄴ 빨간색 밑줄을 보게 된다면..

	1. 오타 체크
	2. 앞, 뒤를 체크
	3. ;이 빠졌는지 체크
	4. 논리 체크 (문법 오류 체크)
	
	- 세미콜론은 코딩의 마침표와 같다.
	ㄴ 특이점을 제외하고는 반드시 사용해야 한다.
	*/
	
	/*
	 cout : 출력해라 (C 언어는 printf())
	 ㄴ console output

	 endl : 줄 바꿈 (개행)
	 
	 cin : 입력해라 (C 언어는 scanf())
	 ㄴ console input

	 << : 출력 연산자
	 >> : 입력 연산자
	
	 ::

	*/
	
	std::cout << "지옥에 온걸 환영한다. 애들아" << std::endl;
	std::cout << "지옥에 온걸 환영한다. 애들아" << std::endl;
	std::cout << "지옥에 온걸 환영한다. 애들아" << std::endl;
	std::cout << "지옥에 온걸 환영한다. 애들아" << std::endl;
	
	std::cout << "문자 출력: " << "쌍다옴표안에 적으면 된다." << std::endl;
	std::cout << "숫자 출력: " << 12345 << "그냥 적으면 된다." << std::endl;

}


