/*
* 스트링 사용 금지

과제1. 주민번호 생성기

- 시작하면 원하는 생년을 입력받는다. (4자리, 2자리 처리)
ㄴ EX: 1975 / 75

- 월과 일을 입력 (2자리, 1자리 처리)
ㄴ EX : 06 / 6

- 예외처리 : 31일이 있는 달과 30일까지만 있는 달, 그리고 2월도 예외처리 한다.

- 성별 선택 (남자는 1 또는 3 / 여자는 2 또는 4 )
ㄴ 만약 다른 값을 입력하면 성별을 랜덤으로 결정

- 마지막 6자리는 랜덤으로 출력
ㄴ 예외처리 : 단, 0이 나오면 안된다.

*/

#include <iostream>
#include <time.h>
#include <Windows.h>

using std::cout;
using std::cin;
using std::endl;

void String(int num);
char RandNum(int num);

void main()
{
	// 생년
	char years[5]	= { 0 };
	// 월
	char month[3]	= { 0 };
	// 일
	int day			= 0;
	bool dayCheck = true;

	// 성별
	int sex = 0;

	//-시작하면 원하는 생년을 입력받는다. (4자리, 2자리 처리)
	//	ㄴ EX : 1975 / 75
	printf("생년 입력 : ");
	for (int i = 0; i < 4; ++i)
	{
		cin >> years[i];
		if (years[0] != '1')
		{
			cin >> years[1];
			years[2] = '\0';
			break;
		}
	}

	//	- 월과 일을 입력(2자리, 1자리 처리)
	//	ㄴ EX : 06 / 6     1 01 11
	printf("월 입력 : ");
	for (int i = 0; i < 2; ++i)
	{
		cin >> month[i];
		if (month[0] != '0' && month[0] != '1')
		{
			month[1] = '\0';
			break;
		}	
	}
	

	//	- 예외처리 : 31일이 있는 달과 30일까지만 있는 달, 그리고 2월도 예외처리 한다.
	printf("일 입력 : ");
	while (dayCheck)
	{
		cin >> day;

		if (month[1] == '2')
		{
			if (day > 31)
			{
				continue;
			}
			dayCheck = true;
		}
		else if (month[1] == '1')
		{
			if (day > 30)
			{
				continue;
			}
			dayCheck = true;
		}
		else if (month[1] == '0')
		{
			if (day > 31)
			{
				continue;
			}
			dayCheck = true;

		}
		else if (month[1] == '9')
		{
			if (day > 30)
			{
				continue;
			}
			dayCheck = true;

		}
		else if (month[1] == '8')
		{
			if (day > 31)
			{
				continue;
			}
			dayCheck = true;

		}
		else if (month[1] == '7')
		{
			if (day > 31)
			{
				continue;
			}
			dayCheck = true;

		}
		else if (month[1] == '6')
		{
			if (day > 30)
			{
				continue;
			}
			dayCheck = true;

		}
		else if (month[1] == '5')
		{
			if (day > 31)
			{
				continue;
			}
			dayCheck = true;

		}
		else if (month[1] == '4')
		{
			if (day > 30)
			{
				continue;
			}
			dayCheck = true;

		}
		else if (month[1] == '3')
		{
			if (day > 31)
			{
				continue;
			}
			dayCheck = true;

		}
		else if (month[1] == '2')
		{
			if (day > 28)
			{
				continue;
			}
			dayCheck = true;

		}
		else if (month[1] == '1')
		{
			if (day > 31)
			{
				continue;
			}
			dayCheck = true;

		}

	}

	//	- 성별 선택(남자는 1 또는 3 / 여자는 2 또는 4)
	//	ㄴ 만약 다른 값을 입력하면 성별을 랜덤으로 결정
	printf("성별 입력\n 남자 = 1, 3 여자 = 2, 4\n");
	cin >> sex;

	//	- 마지막 6자리는 랜덤으로 출력
	//	ㄴ 예외처리 : 단, 0이 나오면 안된다.
	// 결과 출력
	printf("주민번호 생성\n");
	String(sex);
	printf("%s%s%d - %c%c%c%c%c%c", years, month, day, RandNum(rand() % 9 + 1), RandNum(rand() % 9 + 1), RandNum(rand() % 9 + 1), RandNum(rand() % 9 + 1), RandNum(rand() % 9 + 1), RandNum(rand() % 9 + 1));

}

void String(int num)
{
	switch (num)
	{
	case 1:
		printf("남성\n");
		break;
	case 2:
		printf("여성\n");
		break;
	case 3:
		printf("남성\n");
		break;
	case 4:
		printf("여성\n");
		break;
	default:
		String(rand() % 4 + 1);
		break;
	}
}
char RandNum(int num)
{
	switch (num)
	{
	case 1:
		return '1';
	case 2:
		return '2';
	case 3:
		return '3';
	case 4:
		return '4';
	case 5:
		return '5';
	case 6:
		return '6';
	case 7:
		return '7';
	case 8:
		return '8';
	case 9:
		return '9';

	default:
		break;
	}
}