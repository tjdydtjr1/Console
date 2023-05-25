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



	// 설명
	for (int i = 0; i < valueList.size(); ++i)
	{
		// 출력
	}

	for (auto oIterator = valueList.begin(); oIterator != valueList.end(); ++oIterator)
	{
		// 출력
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
		vector<STData>::iterator iter = valueList.begin();
		
		// 처음 부터 끝까지 순회
		for (iter; iter != valueList.end(); ++iter)
		{
			//cout << valueList[i].m_nValue << ", ";
			//cout << valueList[i].m_oString << endl;
			//++i;
			cout << "데이터 출력 : ";
			cout << iter->m_nValue << ", ";
			cout << iter->m_oString << endl;
		}
	}





	// 다른 방식들
	for (int i = 0; i < valueList.size(); ++i)
	{
		// 출력

	}

	/*
	=> 언어 개정의 따른 반복문의 변화

	- C++도 결국 언어이기 때문에 시간이 지남이 따라서 개정이 되고 크고 작은
	  변화가 생긴다.

	EX)
	언리얼에서 좋아하는 방식 
	iterator또한 반복문이기에 이것 조차 추가 하기에는 메모리가 아깝다.
	그래서 아래와 같이 사용한다.
	for(STData stData : ValueList)
	{
	}
	ㄴ Range 기반 for / 컨테이너 기반 for

	
	=> C != C++
	- printf 함수의 %s 서식 문자는 C언어 기반 스타일의 문자열을 대체하기 위한 기능으로
	  일반적인 방법으로는 C++언어의 문자열을 표현하는 것이 불가능하다.
	- 그렇기 때문에 C++언어의 문자열은 c_str() 함수를 통해서 C언어 스타일의 문자열로
	  표현하는 것이 가능하다.


	*/

	// 구조체 직접 접근
	for (STData stDATA : valueList)
	{
		printf("구조체 데이터 : %d, %s\n", stDATA.m_nValue, stDATA.m_oString.c_str());
	}

	// 반복자 사용
	for (auto oIterator = valueList.begin(); oIterator != valueList.end(); ++oIterator)
	{
		// 구조체가 쓰겠다고 선언은 했지만 실체화 시키지는 않았기에 확인작업이 필요하다
		int nIndex = oIterator - valueList.begin();
		printf("%d 번째 구조체 데이터 : %d, %s\n", nIndex + 1, oIterator->m_nValue, oIterator->m_oString.c_str());
	}
}

void Func_01::practiceVector(void)
{
	vector<int> ValueListA;
	vector<STData> ValueListB;

	for (int i = 0; i < 10; ++i)
	{
		ValueListA.push_back(i + 1);
	}

	for (int i = 0; i < 10; ++i)
	{
		STData stData;
		stData.m_nValue = i + 1;
		stData.m_oString = std::to_string(i * 0.5f);
		ValueListB.push_back(stData);
	}

	printf("===== int 벡터 =====");
	sampleVector(ValueListA);

	printf("===== STData 벡터 =====");
	sampleSTVector(ValueListB);

	int nNumStrings = 0;
	std::vector<std::string> oStringList;

	printf("정수 입력 : ");
	scanf_s("%d", &nNumStrings);

	printf("\n ===== 문자열 입력 =====\n");

	for (int i = 0; i < nNumStrings; ++i)
	{
		// MAX_PATH : OS -> Windows 최대 길이 디렉터리 경로 250개 까지 가능 해서
		// ㄴ 250 ~ 270 상황에 따라 범위를 가짐
		char szString[MAX_PATH] = "";

		printf("%d 번째 문자열 입력 : ", i + 1);
		//scanf("%s", szString);

		//oStringList.push_back(szString);

	}
	
	cout << "===== 문자열 출력 =====" << endl;

	for (auto oIterator = oStringList.begin(); oIterator != oStringList.end(); ++oIterator)
	{
		int nIndex = oIterator - oStringList.begin();
		printf("%d 번째 문자열 출력 : %s\n", nIndex + 1, oIterator->c_str());
	}

	/*
	iterator는 반드시 begin() end()를 명시해야 한다.
	ㄴ 비선형구조의 컨테이너들의 반복문들을 위해 만들어졌으나 덕분에 안정성이 올라갔다.

	vector 같은 경우 선형적으로 데이터를 보관하기 때문에 데이터의 순서가 차례대로
	보장되어 있는 반면
	맵과 같은 컨테이너는 데이터의 순서가 비선형이기 때문에
	순서를 보장할 수 없다.
	
	*/
}
