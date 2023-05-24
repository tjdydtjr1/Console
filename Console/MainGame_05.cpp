#include "MainGame_05.h"
#define Line LinePrint()



MainGame_05::MainGame_05()
{
	/*
	- STL 벡터에서 자주 사용하는 기능
	1. push_back()				 : 데이터를 뒤에서 부터 추가한다. (값)
	- emplace_back				 : 데이터를 뒤에서부터 추가한다. (값)
	2. pop_back()			   	 : 데이터 뒤에서부터 값을 삭제
	
	3. size()					 : 벡터의 크기 (갯수)
	4. resize()					 : 벡터의 크기 재 연산 
	5. clear()					 : 인덱스 전부 삭제 (메모리 공간은 두고 값만 삭제 -> 메모리 할당 X)
	6. begin()					 : 벡터의 0번째 인덱스
	7. end()					 : 벡터의 마지막 인덱스
	8. insert(위치, 값)			 : 삽입
	   insert(위치, 개수, 값)     : 삽입
	9. erase(위치)				 : 지운다. (내가 쓸때는 값만 삭제 <> 반복자를 사용하면 메모리 공간까지 삭제)

	vector는 front Iterator , back Iterator를 지원한다.

	면접질문
	vector와 list의 차이
	 데이터의 빈번한 삽입 삭제가 있을 시 vector를 사용하면 안된다.
	 
	 추가
	 at()
	*/

	_vNumber.push_back(1);
	_vNumber.push_back(2);

	cout << _vNumber[0] << endl;
	cout << _vNumber[1] << endl;


	LinePrint();
	_vNumber.pop_back();
	_vNumber.pop_back();

	// 안전도 : 중
	for (int i = 0; i < 10; ++i)
	{
		_vNumber.push_back(i);
		cout << _vNumber[i] << endl;
	}

	LinePrint();

	_vNumber.push_back(1);

	_vNumber.pop_back();

	_vNumber.clear();
	LinePrint();

	//_vNumber.insert(_vNumbe  r.begin() + 5, 100);

	_vNumber.push_back(1);
	_vNumber.push_back(2);


	_vNumber.insert(_vNumber.begin() + 1, 100);
	

	// 안전도 : 상
	// ㄴ 직접 참조를 통한 출력
	for (int i = 0; i < _vNumber.size(); ++i)
	{
		cout << _vNumber[i] << endl;
	}

	LinePrint();

	// 안전도 : 최상
	// ㄴ 반복자를 통한 순회
	// 표준 방식
	_viNumber = _vNumber.begin();
	for (_viNumber; _viNumber != _vNumber.end(); ++_viNumber)
	{
		cout << *_viNumber << endl;
	}
	// 스마트 포인터 : 컴퓨터가 메모리 할당 해제를 같이 한다.

	LinePrint();
	
}

MainGame_05::~MainGame_05()
{

}

void MainGame_05::printVector()
{
	LinePrint();
	LinePrint();
	LinePrint();

	cout << "push.back()" << endl;

	_vNumber.push_back(1);
	_vNumber.push_back(2);
	_vNumber.push_back(3);
	_vNumber.push_back(4);
	_vNumber.push_back(5);

	cout << _vNumber[0] << endl;
	cout << _vNumber[1] << endl;
	cout << _vNumber[2] << endl;
	cout << _vNumber[3] << endl;
	cout << _vNumber[4] << endl;

	LinePrint();

	cout << "insert()" << endl;
	_vNumber.insert(_vNumber.begin() + 2, 10);

	cout << _vNumber[0] << endl;
	cout << _vNumber[1] << endl;
	cout << _vNumber[2] << endl;
	cout << _vNumber[3] << endl;
	cout << _vNumber[4] << endl;
	
	LinePrint();

	cout << "pop_back" << endl;

	// 선행: 조건을 체크 / 반복문 내부에서 지우는 습관을 들여야 한다.
	_vNumber.pop_back();

	for (int i = 0; i < _vNumber.size(); ++i)
	{
		cout << _vNumber[i] << endl;
	}
	
	// for each , auto 설명
	/*
	- 주어진 범위의 모든 데이터를 하나씩 순회하며 동작하는 경우에 사용한다.
	ㄴ for each는 컨테이너의 반복자 개념

	- for each는 vector의 컨테이너 요소가 아니고 알고리즘 함수
	- 모든 컨테이너는 반복자를 가지고 있으며 for each를 사용해서 컨테이너의 원소 접근이 가능하다.
	- 이게 가능한 이유는 for each문 역시 iterator와 동일하게 스마트 포인터 이며
	  컨테이너를 순회하면서 원하는 요소에 접근이 가능하다.

	=> auto ( STL 에서만 사용 단, 협업시 좋지 않음 자료형 확인 부분)
	- 컴파일러가 컴파일시 자동으로 자료형을 추론한다.
	- 컴파일러가 자료형을 추론 하기 위해서는 명시적인 조건이 주어져야 한다.
	- C/C++ 언어는 기본적으로 변수를 선언할 때 해당 변수의 자료형을 명시해야 한다.
	- auto 키워드 자체가 C# -> var 와 유사하며 자료형이 확정되는 시기는 컴파일 타임
	- auto 키워드에 의한 자료형이 결정되는 시점은 변수에 할당되는 초기값을 가지고
	  판단하기 때문에 auto를 통한 변수 선언은 특정값을 할당해야 한다.

	*/

	// 엄청 무거운 문법 사용하지 말자
	// 연산이 별도로 필요없는 로직에서만 제한적으로 사용한다.
	/*for each (auto p in _vNumber)
	{
		cout << "for each문" << p << endl;
	}*/

	cout << "erase()" << endl;

	// 단일
	// erase(_vNumber.begin() + index);
	// 범위
	// erase(_vNumber.begin() + s, _vNumber.begin() + d);
	_vNumber.erase(_vNumber.begin() + 1);
	// 스타트 -> 엔드
	_vNumber.erase(_vNumber.begin(), _vNumber.begin() + 3);

	LinePrint();

	// 역순회
	for (_vriNumber = _vNumber.rbegin(); _vriNumber !=_vNumber.rend(); ++_vriNumber)
	{
		cout << *_vriNumber << endl;
	}
	LinePrint();
	/*
	 면접 문제
	 at == [] 동일한 결과물을 보여준다.
	 ㄴ 차이점? -> 안정성
	 at : 임의 위치의 원소를 참조하는 인터페이스

	 [] : 범위 점검을 하지 않기 때문에 속도면에서 유리하다.
	 at : 범위 점검을 하기 때문에 속도는 느리다. 단, 안정성면에서는 훨씬 유리하다.
	*/
	cout << "at()" << endl;

	//cout << _vNumber.at(4) << endl;
	//cout << _vNumber[4] << endl;

	Line;

	// 첫번째 요소 참조
	// 방이 전부 안착이 되어있는지 확인이 가능하고
	// ㄴ -> front를 썼는데 쓰레기값이면 메모리 안정화가 안됐다. 메모리 주소가 나오면 안정화가 됐다
	cout << "front" << endl;
	cout << _vNumber.front() << endl;

	Line;

	// 마지막 원소 참조
	// ㄴ 인덱스가 전부 안착이 되어있는지 확인
	cout << "back" << endl;
	cout << _vNumber.back() << endl;

	Line;

	// 현재 벡터의 사이즈를 확인한다.
	cout << "size" << endl;
	cout << _vNumber.size() << endl;

	Line;
	_vNumber.clear();

	Line;

	// empty() : 비어 있으면 t / 하나 이상 있는 경우 f
	if (_vNumber.empty())
	{
		cout << "텅텅 비었다" << endl << endl;
		
		// 비어 있다면 내부 로직을 실행할 필요가 없다.
		return; // 조건문에서의 return은 조건문을 다 볼필요 없이 조건문을 끝낸다.

	}

	cout << _vNumber.at(2) << endl;


}


void MainGame_05::sampleVector(std::vector<int> valueList)
{
}

void MainGame_05::sampleSTVector(std::vector<STData> valueList)
{
}

void MainGame_05::practiceVector(void)
{
}

/*
과제1. 벡터와 만나면...
- 샘플 함수를 "효율성" 있고 "재 생산성" 있게 본인의 생각을 반영하여 구현해 온다.
- 함수 원형은 건들지 않는다.
void MainGame_05::sampleSTVector(std::vector<STData> valueList)
{
}


26일까지 -> 3일의 시간
과제2. STL 벡터 상점 (아이템 구매, 판매, 인벤토리 장착)
=> 포트폴리오 기능

- 대표 도트 1종씩 (무기 + 방어구 + 포션(악세사리))

- 필수:
ㄴ 아이템 구매 및 판매 기능
ㄴ 구매한 아이템은 착용이 가능해야 한다.
ㄴ 아이템의 능력치에 따라 캐릭터의 능력치가 상승
ㄴ 아이템 이름, 가격, 능력치, 설명에 대한 출력 문구

- 상점에 입장하면 아이템 분류가 나온다.
	ㄴ 1. 무기		2. 방어구		3. 포션(악세사리)

- 각 메뉴별로 자유롭게 전환이 가능해야 한다.

*/