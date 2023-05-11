/*
과제1. 게임 평가 평균값 구하기

- 항목은 6개

- 게임 평가 : 캐릭터 배경 퀘스트 아이템 과금 레이드 (기타 등등)

- 조건 : 1차원 배열로 값을 정한뒤 평균값을 구해서 출력을 시킨다.
ㄴ 1. 값을 입력하는 버전
ㄴ 2. 값을 입력하는 버전 x

*/


#include <iostream>
#include <time.h>

using std::cout;
using std::cin;
using std::endl;

void main()
{
	int addNum[6] = { 0 };
	int avrNum = 0;
	const int maxSize = 6;
	
	// 값을 입력 x
	// printf("게임 평가 시작\n");
	/*for (int i = 0; i < maxSize; ++i)
	{
		addNum[i] = rand() % 101;
		avrNum += addNum[i];
	}

	printf("게임 전체 평가 평균값 : ");
	cout << avrNum << endl;*/

	// 값을 입력 O
	/*printf("게임 평가 항목\n1. 캐릭터\n2. 배경\n3. 퀘스트\n4. 아이템\n5. 과금\n6. 레이드\n");

	for (int i = 0; i < maxSize; ++i)
	{
		cin >> addNum[i];
		avrNum += addNum[i];
	}

	cout << "게임 평가 평균 : " << avrNum << endl;*/

}