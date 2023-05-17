#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#pragma region 4대 문자열
/*
=> C/C++ 언어의 문자열 조작 함수 (char + 함수)

- 문자와 문자열을 다룰 때 일반적으로 사용할 수 있는 기능들의 집합
- 4대 문자열은 기본적으로 숙지를 반드시 해야 한다.

1. strlen
ㄴ 문자열의 길이를 계산


사용 주의
2. strcmp
ㄴ 문자열을 비교하는 기능
ㄴ 같을 경우 0, 왼쪽 문자열이 클 경우 양수, 왼쪽 문자열이 작을 경우 음수

3. strcpy
ㄴ 문자열을 복사하는 기능

4. strcat
ㄴ 문자열을 합치는 기능

5. strtok
ㄴ 문자열 자르기

*/
#pragma endregion

void LinePrint()
{
	cout << "================================================" << endl;
}



void main()
{
	cout << "4대 문자열" << endl;
	LinePrint();

	// 1. strlen() : 문자열 길이
	// ㄴ EX) strlen("문자열");

	char strA[100] = "abcdef";
	int lenA = strlen(strA);

	cout << strlen(strA) << endl;
	cout << "문자열 길이" << lenA << endl;

	LinePrint();

	// 2. strcmp(문자열, 문자열) : 문자열 비교
	/*
	int strcmp(char* str1, char* str2)
	{
		if(두 문자가 같은지?)
		{
			return 0;
		}
		else
		{
			if(앞문자가 더 큰지?)
			{
				return -1;
			}
			else
			{
				return 1;
			}

		}
		return 0;
	}

	stringA < stringB = 0 보다 작다
	stringA == stringB = 0
	stringA > stringB = 0 보다 작다.

	*/

	//char strB[10] = "abc";
	//char strC[10] = "abc";
	//char strD[10] = "abb";

	//int lenB = strcmp(strB, strC);
	//int lenC = strcmp(strB, strD);

	//cout << "문자열 비교 : " << lenB << endl;
	//cout << "문자열 비교 : " << lenC << endl;

	//LinePrint();

	//// 3. strcpy(문자열, 문자열) : 문자열 복사

	//char strE[10] = "ABCDEFG";
	//char strF[10] = "HIJK";

	//cout << "문자열 복사 전 : " << strF << endl;

	//strcpy(strF, strE);

	//// s or ex 붙은 애들은 extension 확장됨
	////printf_s()
	////	strcpy_s( );
	////		strncpy();
	////		strncpy_s( );

	//// 주의 사항 : 앞에 있는 문자열의 크기가 복사할 문자열 보다 
	////			   작게 되면 터진다.
	//cout << "문자열 복사 후 : " << strF << endl;

	//LinePrint();

	//// 4. strcat(문자열, 문자열) : 문자열 연결

	//char strG[100] = "오늘 과제는 ";
	//char strH[100] = "정말 재밌을꺼야.";

	//cout << "문자열 연결 전 : " << strG << endl;
	//strcat(strG, strH);

	//cout << "문자열 연결 후 : " << strG << endl;

	LinePrint();

	// 5. strtok : 문자열 자르기 
	// ㄴ 4대 문자열은 아니지만 파일 입출력에 많이 쓰인다.
	// ㄴ 윈도우가 좋아하는 함수 (txt, ini)
	// ㄴ 자를 조건 EX: _ / \ 등등..
	// ㄴ 개인적인 추천: ,는 쓰지말자

	char strI[10] = "ABCD EFGH";
	
	strtok(strI, " ");

	cout << strI << endl; 

	// 문자"열"
	char strJ[100] = "문자열";
	const char* strK = "이렇게도 사용이 가능하네?";	// char* strK
	std::string strZ = "이것도 된다.";
	const char* strW = "나는 왜 빼먹지?";
}

