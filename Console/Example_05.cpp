#include <iostream>
#include <time.h>

// Sleep(1000) : 1초 동안 멈춘다 (ms)
#include <windows.h>

using std::cout;
using std::cin;
using std::endl;

// 반복문 + 조건문 + 연산자

// 업다운 게임
// ㄴ 설계 예시
// ---- 술래 : => 난수(time.h) 필요 -> 범위
// ---- 플레이어 : 인원 미정
// ---- Rule : => 무작위 답 -> while ~
// 

// 절차지향 -> 효율을 가장 먼저
// 객체지향 -> 설계를 가장 먼저


void main()
{
	srand(time(NULL));

	int comNumber;
	int myNumber;

	comNumber = rand() % 100 + 1;

	//cout << "치트 : " << comNumber << endl;

	while (true)
	{
		cout << "0 ~ 100까지 숫자중 하나를 선택하자." << endl;
		cin >> myNumber;
		Sleep(1000);

		// 판별식
		if (myNumber == comNumber)
		{
			cout << "찾았다." << endl;
			Sleep(3000);
			// system("cls") 실행 창 깨끗하게 해줌 => clean system의 약자
			system("cls");
		}
		else if (myNumber > comNumber)
		{
			cout << "더 작은 수를 생각해보자." << endl;
		}
		else
		{
			cout << "더 큰 수를 생각해보자. " << endl;
		}
		cout << endl;
	}


}

/*
과제1. 가위바위보 게임

- if문을 이용해 만든다.
ㄴ switch문은 사용하지 않는다.

- 게임의 진행 횟수는 총 5판
ㄴ 이후는 게임 종료

치트 : 답을 미리 알려줌 게임을 빠르게 진행 하기 위함
필수 : 치트



과제2. 일수 출력기

- if문과 switch문 중에 본인이 판단해 효율적인것을 선택한다.

- 시작하면 사용자의 입력을 받고 입력한 숫자에 따라 ??일 인지 출력

EX) 4 입력시 -> : 4월은 30일 입니다. -> 다시 커맨드 활성화

- 1월부터 12월까지 확인이 가능해야 하고 이외의 숫자는 예외 처리

- 총 5번을 입력하면 프로그램 종료


한줄 조사. 함수
- 노트에 적어 온다.
- 비유할것 생각해 온다. (EX: 함수는 ooo이다)



도전 과제1. 함수와 포인터를 활용해 가위바위보 완성

- 양식은 수정하면 안되며 메인함수에서는 함수 호출이외에는 아무것도 작성을 할 수 없다.

void Function(int* a, int** b, int*** c)
{
	// 내용 작성
}

void main()
{
	Function();
}
*/
