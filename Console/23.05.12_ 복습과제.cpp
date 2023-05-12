//과제2.복습 과제
//
//1. 두 정수의 합을 구하는 프로그램 작성
//- 두 개의 숫자를 사용자를 입력 받는다.
//
//- 입력한 두 숫자 사이의 합을 출력하면 ok
//
//- 예외처리 : 5를 누르고 1을 누른다->x
//ㄴ 숫자의 합이 100이상이면 프로그램은 자동으로 종료 된다.
//
//EX) 1과 5를 입력->결과 값 : 9

#include <iostream>
#include <Windows.h>

using std::cout;
using std::cin;
using std::endl;

void main()
{
	int numA = 0;
	int numB = 0;
	int result = 0;

	while (result <= 100)
	{
		printf("입력한 두 숫자 사이의 합 출력\n");
		printf("두 숫자 입력 ");
		cin >> numA >> numB;

		if (numA > numB)
		{
			printf(" X \n");
			Sleep(1000);
			continue;
		}
		else
		{
			for (int i = numA + 1; i < numB; ++i)
			{
				result += i;
			}
		}

		printf(" 두 숫자 사이의 합 : %d\n", result);
		Sleep(1000);
		system("cls");
	}
}