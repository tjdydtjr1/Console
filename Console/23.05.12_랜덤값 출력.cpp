//과제1.rand()를 활용한 랜덤값 출력
//
//- 900 경부터 -> 923경까지의 랜덤한 숫자를 뽑으시오.
//
//9000000000000000000
//
//- 필수 : 분포도
//ㄴ 총 10번의 분포도를 화면에 출력하고 확률을 표시한다.
// 랜덤디바이스로 바꿔보기
#include <iostream>
#include <time.h>
#include <Windows.h>

using std::cout;
using std::cin;
using std::endl;

void main()
{
	unsigned long long randNum = 1;
	unsigned long long result[10] = { 0 };
	const unsigned long long minNum = 90000000000000000;
	const unsigned long long maxNum = 92300000000000000;

	for (int i = 0; i < 10; ++i)
	{
		srand(time(NULL));
		randNum += rand();

		if (randNum < minNum)
		{
			randNum *= (rand() % 1000 + 1);
			--i;
			continue;
		}
		else if (randNum > maxNum)
		{
			randNum = randNum / 100;
			randNum += rand();
			--i;
			continue;
		}
		result[i] = randNum;
		Sleep(2000);
	}

	for (int i = 0; i < 10; ++i)
	{
		cout << result[i] << endl;
	}
	
}