
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

#include <iostream>
#include <time.h>
#include <Windows.h>

using std::cout;
using std::cin;
using std::endl;

// 도전 과제

int aNum;
int bNum;
int cNum;

int* pbNum = &bNum;
int* pcNum = &cNum;
int** ppcNum = &pcNum;

int* paNum = &aNum;
int** ppbNum = &pbNum;
int*** pppcNum = &ppcNum;
int tempA = 0;
int userNum;

void Function(int* a, int** b, int*** c)
{
	srand(time(NULL));

	*paNum			= rand() % 3;
	**ppbNum		= rand() % 3;
	***pppcNum		= rand() % 3;
	
	// 내용 작성
	while (tempA < 5)
	{
		
		cout << "치트 aNum : " << *a << '\n';
		cout << "치트 bNum : " << **b << '\n';
		cout << "치트 cNum : " << ***c << '\n';
		cout << '\n' << '\n';
		cout << "가위바위보 게임 시작" << endl;
		cout << "내고 싶은 수를 고르세요." << endl;
		printf("주먹 = 0, 가위 = 1, 보 = 2\n");
		cin >> userNum;

		cout << endl;

		// 예외 처리
		if (userNum > 2)
		{
			cout << "해당하는 카드는 없습니다." << endl;
			--tempA;
			Sleep(2000);
			system("cls");
			continue;
		}
		
		cout << "aUser 와의 게임" << endl;
		if (*a == userNum)
		{
			cout << "비겼다" << endl;
		}
		else if(*a == 0 && userNum == 2)
		{
			cout << "이겼다" << endl;
		}
		else if (*a == 1 && userNum == 0)
		{
			cout << "이겼다" << endl;
		}
		else if (*a == 2 && userNum == 1)
		{
			cout << "이겼다" << endl;
		}
		else
		{
			cout << "졌다" << endl;
		}

		cout << '\n';

		cout << "bUser 와의 게임" << endl;
		if (**b == userNum)
		{
			cout << "비겼다" << endl;
		}
		else if (**b == 0 && userNum == 2)
		{
			cout << "이겼다" << endl;
		}
		else if (**b == 1 && userNum == 0)
		{
			cout << "이겼다" << endl;
		}
		else if (**b == 2 && userNum == 1)
		{
			cout << "이겼다" << endl;
		}
		else
		{
			cout << "졌다" << endl;
		}

		cout << '\n';

		cout << "cUser 와의 게임" << endl;
		if (***c == userNum)
		{
			cout << "비겼다" << endl;
		}
		else if (***c == 0 && userNum == 2)
		{
			cout << "이겼다" << endl;
		}
		else if (***c == 1 && userNum == 0)
		{
			cout << "이겼다" << endl;
		}
		else if (***c == 2 && userNum == 1)
		{
			cout << "이겼다" << endl;
		}
		else
		{
			cout << "졌다" << endl;
		}

		Sleep(2000);
		system("cls");
		++tempA;
	}
	cout << "게임 종료" << endl;

}
// =============================================================

void main()
{
	//printf("%d %d %d", *a, **b, ***c);

	// 도전 과제
	//Function(paNum,ppbNum,pppcNum);
	// 
// =============================================================
	Sleep(2000);
	system("cls");

	//과제1.가위바위보 게임
	// 0 ~ 2 
	int randNum;
	int myNum;
	int temp = 0;

	// 난수
	srand(time(NULL));

	while (temp < 5)
	{
		randNum = rand() % 3;
		cout << "치트 : " << randNum << endl;
		cout << endl << endl;

		cout << "가위바위보 게임 시작" << endl;
		cout << "내고 싶은 수를 고르세요." << endl;
		printf("주먹 = 0, 가위 = 1, 보 = 2\n");
		cin >> myNum;
		cout << endl;

		if (myNum > 2)
		{
			cout << "해당하는 카드는 없습니다." << endl;
			--temp;
			Sleep(2000);
			system("cls");
			continue;
		}

		if (randNum == myNum)
		{
			cout << "비겼다" << endl;
		}
		else if(randNum == 0 && myNum == 2)
		{
			cout << "이겼다" << endl;
		}
		else if (randNum == 1 && myNum == 0)
		{
			cout << "이겼다" << endl;
		}
		else if (randNum == 2 && myNum == 1)
		{
			cout << "이겼다" << endl;
		}
		else
		{
			cout << "졌다" << endl;
		}
		
		Sleep(2000);
		system("cls");

		++temp;
	}

	cout << "게임 종료" << endl;
	
	Sleep(2000);
	system("cls");


// =============================================================


	//과제2.일수 출력기

	temp = 0;
	int monthNum = 0;

	while (temp < 5)
	{
		cout << "일수 출력기" << endl;
		cout << "일수 확인할 월 : ";
		cin >> monthNum;

		switch (monthNum)
		{
		case 1:
			cout << "1월 31일 입니다." << endl;
			break;
		case 2:
			cout << "2월 28일 입니다." << endl;
			break;
		case 3:
			cout << "3월 31일 입니다." << endl;
			break;
		case 4:
			cout << "4월 30일 입니다." << endl;
			break;
		case 5:
			cout << "5월 31일 입니다." << endl;
			break;
		case 6:
			cout << "6월 30일 입니다." << endl;
			break;
		case 7:
			cout << "7월 31일 입니다." << endl;
			break;
		case 8:
			cout << "8월 30일 입니다." << endl;
			break;
		case 9:
			cout << "9월 31일 입니다." << endl;
			break;
		case 10:
			cout << "10월 30일 입니다." << endl;
			break;
		case 11:
			cout << "11월 31일 입니다." << endl;
			break;
		case 12:
			cout << "12월 30일 입니다." << endl;
			break;
		default:
		{
			cout << "해당하는 월이 없습니다." << endl;
			cout << "다시 입력하세요." << endl;
		}
			break;
		}
		Sleep(1000);
		system("cls");
		++temp;
	}

}


