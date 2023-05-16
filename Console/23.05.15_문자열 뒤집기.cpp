/*
과제2. 문자열 과제 (손코딩 -> 수요일 타임어택)


*** 이 정도가 기본
- 문자를 입력 받아 입력받은 문자를 거꾸로 출력한다.
ㄴ EX) ABCD-> DCBA
***
- 있는 그대로를 출력하지만 짝수에 있는 문자만 거꾸로 출력한다.
ㄴ EX) ASDFG -> AFDSG

- 주민번호를 입력하고 -이 제거된 주민번호로 출력한다.
ㄴ EX) 1234567-12345678 -> 123456712345678

*/
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void main()
{
	char inputChar[100] = { 0 };
	char tempChar[100] = { 0 };
	int count = 0;
	int temp = 0;

	cin >> inputChar;
	while (inputChar[count] != '\0')
	{
		++count;
	}

	// -문자를 입력 받아 입력받은 문자를 거꾸로 출력한다.
	// 임시 배열에 복사
	for (int i = 0; i < count; ++i)
	{
		tempChar[i] = inputChar[i];
	}
	temp = count;
	
	/*for (int i = 0; i < count; ++i)
	{
		inputChar[i] = tempChar[temp - 1];
		--temp;
	}
	cout << inputChar;*/

	// 짝수값 출력
	temp = count;
	for (int i = 0; i < count; ++i)
	{
		if (i % 2)
		{
			// 짝수일 경우
			if ((temp - i - 1) % 2 == 1)
			{
				inputChar[i] = tempChar[temp - i];
			}
			// 홀수일 경우
			inputChar[i] = tempChar[temp - i - 1];
		}
		
	}
	cout << inputChar;

	/*주민번호를 입력하고 - 이 제거된 주민번호로 출력한다.
		ㄴ EX) 1234567 - 12345678 -> 123456712345678*/
	// 48 ~ 57

	//int idx = 0;
	//for (int i = 0; i < count; ++i)
	//{
	//	if (inputChar[i] == '-')
	//	{
	//		continue;
	//	}
	//	tempChar[idx] = inputChar[i];
	//	++idx;
	//}
	//cout << tempChar;

}