#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#pragma region 포인터
/*
=> 포인터

- 어떠한 값을 저장하는게 아닌 어떠한 값의 주소를 저장하는것
ㄴ Address

- 메모리의 주소를 의미하며 C/C++ 언어는 포인터 문법을 통해서
데이터에 간접적으로 접근하는것이 가능하다.

- 포인터를 활용하면 서로 다른 영역에 있는 변수라 하더라도 값을
변경하는 것이 가능하다.

-> 심플하게 기억할것
- 1. 포인터		     	 : 가리키는 놈, 주소를 담는 그릇
- 2. 어떠한 값의 주소		: 해당 값이 저장된 컴퓨터 메모리상의 주소
- 3. *					: 해당 메모리에 있는 데이터 값을 가져오는 기능을 한다.
- 4. &					: 주소값을 반환하는 연산자
- 5. ->					: 포인터에서 자주 사용된다.


-기본적으로 프로그래머는 안정성을 위해서 마음대로 메모리 상의 어떤
위치든 접근하는것이 불가능하다.

- 변수의 할당을 통해서 메모리의 사용 권한이 주어진 위치만 포인터를
통해서 조작하는것이 가능


=> C/C++ 언어 포인터에 자료형이 필요한 이유

- 포인터는 단순히 메모리의 주소에 불가하기 때문에 해당 정보만을
가지고는 메모리를 얼마만큼의 크기로 값을 저장하거나 읽어들일지
판단할 수 없다.

- 그렇기 때문에 포인터의 자료형을 통해서 저장 및 읽어들일 메모리의 크기를 명시해 줘야한다.

- 주의
-> 고로 포인터와 해당 포인터에 저장 할 변수의 자료형은 일치해야 한다.

- 메모리의 주소만을 보관하고 싶다면 특정 자료형을 명시하는 것이 아니라
void* 형으로 선언하는것도 가능하다.

- 이를 void 포인터라고 부르며 void 포인터는 어떠한 자료형의
메모리 주소도 보관하는 것이 가능하다.

EX)
int nValue = 0;
float fValue = 0.0f;
double dbValue = 0.0f;

- 헝가리안 표기법 사용을 많이 한다.
int* pnValue = &nValue;
float *pfValue = &fValue;
double *pdbValue = &dbValue;

- 포인터는 메모리의 주소를 보관하는 역할을 하기 때문에 포인터의
크기는 "모두" 동일하다.

- 그렇기 때문에 int*, float*, double* 등의 크기가 모두 같다.
ㄴ 단, 운영체제 및 사용하는 개발환경에 따라서 크기는 다르다.

- 함수의 종류

- Call By Value				: 값에 의한 전달
ㄴ int add(int a, int b);

- Call By Reference			: 주소값의 전달 (객체지향에서 선호)
ㄴ int add(int* a, int* b);

*/
#pragma endregion

void ExampleP(int* n)
{
	*n = *n * *n;
}

void LinePrint()
{
	cout << "=================================================" << endl;
}

void main()
{
	cout << "포인터" << endl;
	LinePrint();
	
	/*
	- C/C++ 언어의 포인터 선언 방법

	int nValue = 0;					-> 메모리의 특정 영역에 4Byte 공간 할당
	int* pnPointer = &nValue;		-> nValue가 할당 된 메모리 공간의 첫 주소를 할당하겠다.
	
	*/
	
	int valueA = 10;

	int* pValueA = &valueA;
	int** ppValueA = &pValueA;

	//// &pValueA
	//cout << ppValueA << endl;

	//// 10
	//cout << *(*ppValueA) << endl;

	//// &valueA
	//cout << &valueA << endl;

	//// 주소
	//cout << &valueA << endl;
	//
	//
	//cout << valueA << endl;
	//
	//cout << pValueA << endl;
	//
	//cout << *pValueA << endl;

	LinePrint();

	int valueB = 3;
	int* pValueB;
	
	//// 3
	//cout << valueB << endl;
	//
	//// 주소
	//cout << &valueB << endl;

	//// 조건을 통해 비어있을때 주소를 바꿔야함
	//pValueB = &valueB;

	// valueB 주소
	/*cout << pValueB << endl;
	
	cout << *pValueB << endl;
	
	cout << &pValueB << endl;*/

	/*
	- 사용함에 있어서 주의를 필요로 하는 문법 -> 포인터

	- 포인터를 초기화 하지 않고 값을 바꾸면

	EX)
	int* pValueC;
	pValueC = 100;
	
	- pValueC를 초기화 하지 않았다면 pValueC는 쓰레기 값을 가지고 있는데
	이 값은 어디에서 쓰이고 있는 값일 수 있다.
	
	- 빈자리였다면 다행이지만 아니였다면 쓰이는 값이 변경되는것
	이므로 치명적인 오류가 발생한다.

	- 그래서 포인터가 가리키고 있는 값을 변경할때는 반드시 확인을 한 이후
	변경하는 습관을 들여야 한다.
	ㄴ C/C++ 프로그래머

	=> 이러한 패턴은 예외처리를 진행할때도 동일하게 적용된다.
	
	*/

	// 포인터 변수는 대게 NULL로 초기화를 한다.
	int* pValueC = NULL;

	/*
	- NULL, nullptr의 의미는 현재 포인터가 아무런 메모리 위치도 가리키고 있지
	않다는 뜻을 지니고 싶다. (포인터를 초기화하는데 주로 활용이 된다.)
	
	*/

	pValueC = &valueB;
	
	// valueB가 아닌 외부요인에 의해 값이 변경 => 큰 의미의 Call By reference
	if (pValueC != nullptr)
	{
		// 방어코드
		// 널이 아닌 경우에만 변경하는 예외처리를 해준다.
		*pValueC = 30;
	}

	cout << "포인터 변수 값 변경은 언제나 주의를 기울여야 한다." << valueB << endl;

	/*
	- NULL은 엄밀히 말하면 포인터가 아니다
	ㄴ 매크로에서 정의 된 상수 0

	C	-> NULL -> ((void*) 0) 으로 치환
	C++ -> NULL = 0

	NULL은 진짜 널을 가리키는 포인터가 아니라 숫자 0을 의미한다.

	nullptr
	ㄴ 널 포인터 값을 나타내는 포인터 리터럴
	ㄴ 포인터를 표현하는 값 중에 NULL을 표현한 값이라고 할 수 있다.

	*/

	LinePrint();

	cout << "포인터 배열" << endl;

	// pArrA가 가리키는 첫번째 요소가 int형 싱글 포인터이니 배열 이름 pArrA는 int형 더블 포인터가 된다.
	// num[] 배열을 만들기만하면 1번째 인덱스는 준비중에 있다. 1번째 인덱스 메모리 주소를 통해 
	int* pArrA[3];

	int numA = 10;
	int numB = 20;
	int numC = 30;

	int* pNumA = &numA;
	int* pNumB = &numB;
	int* pNumC = &numC;
	

	// 배열은 정적이다. -> 런타임전에 크기가 확인되어야 한다.
	int* pArrB[] = { pNumA, pNumB, pNumC };
	int** dpArr = pArrB;

	// numA
	//cout << pNumA << endl;
	
	// pNumA
	cout << pArrB << endl;
	cout << &pNumA << endl;


	// pArrB
	cout << dpArr << endl;

	LinePrint();

	cout << "문자열 포인터" << endl;


	// 문자열
	char str1[] = "my Sstring";				// 변수
	// 문자열
	const char* str2 = "your string";		// 상수

	/*
	=> 변수 형태 문자열 vs 상수 형태 문자열

	- char* 같은 경우에는 메모리 공간에 문자열 "your string"이 저장되고
	문자열의 첫번째 주소(y) 값이 반환된다.

	- 둘의 차이점

	- 1. my string\0 -> 10개의 길이를 지닌 str1 의 배열
		 ㄴ 문자열 전체를 저장하는 배열
	- 2. 포인터 변수 str2에 저장이 된 your string의 주소값이 된다.
		 ㄴ 첫번째 문자를 단순히 가리키고만 있는 포인터 변수

	- 하지만 배열 이름 str1은 계속해서 'm'의 주소값이기 때문에 str1과 str2 문자열의
	시작 주소값을 담고 있다는 의미에서는 동일하다.
	
	- 배열이름 str1은 계속해서 문자 'm'이 저장된 위치를 가리키는 상태여야 ㅎ지만
	포인터 변수 str2는 다른 위치를 가리킬 수 있다.

	*/

	str2 = "our string";
	cout << str2 << endl;

	str1[0] = 'Z';
	str2 = "A";

	cout << str2 << endl;

	/*
	=> 메모리 구성 영역

	- 컴퓨터는 다양한 메모리의 구성 영역을 가진다.
	
	1. 코드 영역
	- 실행할 코드가 저장되는 메모리 공간이며 cpu는 코드 영역에 저장된 명령문들을
	하나씩 가져와서 실행한다.

	- 코드 영역은 운영체제에 의해서 관리되기 때문에 일반적으론 직접적 제어가 불가능하다.

	2. 데이터 영역
	- 전역 변수와 static으로 선언되는 static 변수가 할당되는 공간

	- 프로그램 시작과 동시에 메모리 공간에 할당되어 프로그램 종료시 까지 남아있다.

	- 전역 변수, 정적 변수등 프로그램이 실행 될 때 할당이 되고 종료될 때 제거되는 영역

	3. 스택 영역
	- 지역변수와 매개변수가 할당, 선언된 함수를 빠져나가면 소멸

	- 시스템에 의해서 관리되는 영역

	4. 힙 영역
	- 프로그래머에 의해서 관리되는 영역

	- 데이터 영역과 스택 영역에 할당되는 변수들은 생성과 소멸이 정해져 있다.
	ㄴ 프로그래머가 원하는 시점에 변수를 할당하고 소멸 시킬 수 있는 영역이 바로 힙

	* 프로그래머가 직접적인 할당에 관여하므로 직접 소멸을 시켜줘야 한다.
	ㄴ 직접 소멸을 하지 않는다면 메모리 누수와 만난다.

	- 일반적으로 프로그램이 종료되면 소멸이 되긴 한다.

	=> 동적 할당(Dynamic Allocation)
	ㄴ 런타임중에 메모리 동적 할당

	- 프로그램을 작성할 때 메모리 필요량을 지정하는 정적 할당과는 달리
	실행 중에 필요한 만큼의 메모리를 할당하는 기법

	-> 컴파일 타임 또는 디자인 타임 != 런타임

	- 정적인 메모리 영역을 차지하고 있으므로 일단 값을 기억할 수 있지만 이름이 없기
	때문에 오로지 포인터로만 접근할 수 있다.

	* 동적할당 시 주의점
	ㄴ 동적 할당을 해두면 메모리에 올려진 상태로 계속 유지가 된다.
	ㄴ 그렇기 때문에 사용이 끝나면 "반드시" 지워줘야 한다.

	-> 사용하는 이유
	- 게임을 만들다 보면 지역 변수도 전역 변수도 아닌 변수가 필요한 경우가 있다.
	ㄴ EX: 함수가 매번 호출될 때마다 새롭게 할당이 되고 또 함수를 빠져나가도 유지가 되는 변수

	- 지역 변수를 쓰자니 함수가 끝나면 소멸이되고, 
	  전역 변수를 쓰자니 이전의 값을 덮어버리기 때문에 문제가 발생한다.

	- 만약 최대 100개의 데이터를 저장해야 할 때 우리는 정적으로 100개를 할당해야
	하지만 40개의 데이터밖에 들어오지 않는다면 60개는 낭비가 되는 상황이 생긴다.

	* 그래서 메모리 관리를 위해서 돌아오는 족족 할당하는 방법이 바로 "동적 할당" 이다.
	 
	*/

	/*
	=> C/C++ 언어의 메모리 동적 할당 방법

	- 1. malloc
	ㄴ C 언어 동적 할당

	- 2. new
	ㄴ C++

	-> 해제는 각각 free() / delete()로 처리를 한다.


	=> C/C++ 언어의 메모리 동적 할당 시 주의사항
	1. 메모리 릭(Memory Leak)
	ㄴ 많은 메모리를 사용하는 게임 분야에서는 아주 치명적이다.
	ㄴ 불필요한 메모리가 제거되지 않고 계속 상주하고 있는 경우
	ㄴ 시간의 문제일뿐 결국은 블루 스크린을 만날 확률이 아주 높다.
	ㄴ 동적할당, 반복문, 배열에서 발생
	

	2. 댕글링 포인터(Dangling Pointer)
	ㄴ 이미 제거 된 메모리를 가리키고 있는 경우 이를 댕글링 포인터라고 한다.
	ㄴ 메모리 접근시 예측 불가능한 결과를 유발하는 1등 공신
	ㄴ 보통 메모리 해제 후, 해제된 메모리에 접근하거나 함수 호출에서 자동 변수를
	가리키는 포인터를 반환할 때 자주 발생한다.
	ㄴ 댕글링 포인터 자체가 잠재적인 보안 위험등을 항상 안고 다니기 때문에 절대
	생기면 안되는 포인터중에 하나
	
	발생 요인
	ㄴ 조숙한 해제
	ㄴ 너무 성급한 해제 
	ㄴ 댕글링 포인터와 같은 의미
	=> if(Pointer != NULL) 방어 코드를 통해 접근 

	* 면접 단골 문제
	1. malloc new 둘의 차이점
	2. 메모리 릭과 댕글링 포인터의 개념 설명 및 개선하기 위해 본인이 해본 방식은?

	*/
	
// 생성한다
// ㄴ new 문법 -> 그대로 써야 하고 이때 변수 count는 주소의 맨 앞을 가리키고 있다.
int* countA = new int[3];
int* countB = new int;
// [3]  / []


for (int i = 0; i < 3; ++i)
{
	countA[i] = i;
	*countB = i + 18;
}

for (int i = 0; i < 3; ++i)
{
	// 0 1 2
	cout << "카운터는? " << countA[i] << endl;
}

// 20
cout << "카운터는? " << *countB << endl;

// 배열 삭제
delete[] countA;
// 단일 삭제
delete countB;
}