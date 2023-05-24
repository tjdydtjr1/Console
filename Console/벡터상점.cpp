#include "Func_01.h"
#include "VectorStore.h"

struct STDataA
{
	// c_string 문자와 문자열 변환에러시 참고
	int m_nValue;
	std::string m_oString;
};

void main()
{
	vector<STData> test;
	vector<int> test3;
	
	test.push_back(test.);
	
	Func_01 test2;
	
	test2.sampleSTVector(test);
	
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