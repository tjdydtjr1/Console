#include "Func_01.h"

void Func_01::sampleVector(std::vector<int> valueList)
{
	// 데이터가 없다면 return
	if (valueList.empty())
	{
		printf("데이터가 없음\n");
		return;
	}
	else
	{
		// 반복자 선언 및 처음을 가리킴
		vector<int>::iterator iterator = valueList.begin();

		// 처음 부터 끝까지 순회
		for (iterator; iterator != valueList.end(); ++iterator)
		{
			cout << "데이터 출력 : " << *iterator << endl;
		}
	}
}

void Func_01::sampleSTVector(std::vector<STData> valueList)
{
	// 데이터가 없다면 return
	if (valueList.empty())
	{
		printf("데이터가 없음\n");
		return;
	}
	else
	{
		// 반복자 선언 및 처음을 가리킴
		vector<STData>::iterator iterator = valueList.begin();
		
		// 처음 부터 끝까지 순회
		for (iterator; iterator != valueList.end(); ++iterator)
		{

		}
	}
}
