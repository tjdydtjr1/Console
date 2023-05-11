/*
과제2. 슬롯머신

- 초기 소지금 : 100,000,000 (1억)

- 777같은 숫자 3개 나올시 배팅금액의 12배

- 7을 제외한 같은 숫자 3개 나올시 배팅금액의 5배

- 같은 숫자 2개 나올시 배팅금액의 2배

- 그 외에는 배팅금액 잃기

필수:
1. 룰렛이 동작하는 모습 시각화
2. 배팅을 하고 내가 룰렛을 멈추지 않으면 룰렛은 자동으로 계속 반복 된다.
3. 치트 필수 -> 룰렛이 돌던게 멈추면서 숫자를 보여주고 치트 입력
ㄴ 치트가 활성화 되면 숫자 3개를 입력 받는다. (EX: 777)
ㄴ 다음으로 룰렛이 시동이 되고 777이 당첨되는걸 확인할 수 있게 만들기
*/

#include <iostream>
#include <time.h>
#include <Windows.h>

using std::cout;
using std::cin;
using std::endl;

void TextColor(int font, int backGround);

// 도트 찍기
namespace DOT
{
	void RandomNum();
	void DotNumber(int num);
	void DotSuc(int num);
	void TimeRandNum(int num);

}

void main()
{
	system("mode con:cols=300 lines=400");
	
	srand(time(NULL));
	int firstNum = rand() % 10;
	int secondNum = rand() % 10;
	int thirdNum = rand() % 10;

	int money = 100000000;
	int bat = 0;

	int userNum1 = 0;
	int userNum2 = 0;
	int userNum3 = 0;
	
	while (money > 0)
	{
		printf("치트키 쓰려면 입력 : 100\n");
		printf("현재 번호 : %d %d %d\n", firstNum, secondNum, thirdNum);

		DOT::DotNumber(firstNum);
		cout << '\n';
		DOT::DotNumber(secondNum);
		cout << '\n';
		DOT::DotNumber(thirdNum);

		cout << '\n' << '\n';

		printf("룰렛 시작\n");
		printf("현재 금액 : %d\n", money);
		printf("배팅 금액 : ");
		cin >> bat;

		cout << '\n' << '\n';
		printf("배팅 숫자 입력\n");
		cin >> userNum1;
		printf("첫번째 숫자 : %d\n", userNum1);
		DOT::DotNumber(userNum1);
		cout << '\n';
		
		cin >> userNum2;
		printf("두번째 숫자 : %d\n", userNum2);
		DOT::DotNumber(userNum2);
		cout << '\n';
		cin >> userNum3;
		printf("세번째 숫자 : %d\n", userNum3);
		DOT::DotNumber(userNum3);
		Sleep(1000);
		system("cls");
		
		// 룰렛 돌리기 : 조건 + 네임스페이스
		//DOT::RandomNum();
		//
		
		if (userNum1 == 100 || userNum2 == 100 || userNum3 == 100)
		{
			printf(" 치트 입력 : ");
			cin >> firstNum >> secondNum >> thirdNum;
			
			printf("\n\n");
			printf("변경된 번호 : %d %d %d", firstNum, secondNum, thirdNum);
			printf("\n");
			DOT::DotNumber(firstNum);
			cout << '\n';
			DOT::DotNumber(secondNum);
			cout << '\n';
			DOT::DotNumber(thirdNum);
			cout << '\n';

			
			if (firstNum == secondNum == thirdNum)
			{
				DOT::TimeRandNum(firstNum);
				Sleep(1000);
				continue;
			}
		}

		if ((userNum1 + userNum2 + userNum3) == (firstNum + secondNum + thirdNum))
		{
			if ((firstNum + secondNum + thirdNum) == 21)
			{
				printf("7 7 7 당첨\n 배팅금액 x 12\n");
				DOT::DotSuc(firstNum);
				money += bat * 12;
				printf("현재 금액 : %d\n", money);
			}
			else if(firstNum == userNum1 && secondNum == userNum2 && thirdNum == userNum3)
			{
				system("cls");
				printf("동일한 숫자 3개\n");
				DOT::DotNumber(userNum1);
				cout << '\n';
				DOT::DotNumber(userNum2);
				cout << '\n';
				DOT::DotNumber(userNum3);
				money += bat * 5;
				printf("현재 금액 : %d\n", money);
			}
		}
		else if (userNum1 == firstNum && userNum2 == secondNum || userNum1 == firstNum && userNum3 == thirdNum || userNum2 == secondNum && thirdNum == thirdNum)
		{
			system("cls");
			printf("동일한 숫자 2개\n");
			DOT::DotNumber(firstNum);
			cout << '\n';
			DOT::DotNumber(secondNum);
			cout << '\n';
			DOT::DotNumber(thirdNum);
			money += bat * 2;
			printf("현재 금액 : %d\n", money);
		}
		else
		{
			system("cls");
			printf("동일 번호 없음 꽝\n");
			money -= bat;
			printf("현재 금액 : %d\n", money);
		}

		Sleep(5000);
		system("cls");
	}
}


void TextColor(int font, int backGround)
{
	int Color = font + backGround * 16;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color);
}

// 원하는 숫자 하나 띄우기
void DOT::DotNumber(int num)
{
	switch (num)
	{
	case 0:
	{
		// 0	
		cout << "●●●●●" << endl;
		cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●" << endl;
		cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●" << endl;
		cout << "●●●●●" << endl;

	}
	break;
	case 1:
	{
		// 1
		TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○" << endl;
		cout << "○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○" << endl;
		TextColor(0, 0); cout << "●"; TextColor(0, 0); cout << "○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○" << endl;
		cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○" << endl;
		TextColor(15, 0);	cout << "●●●●●" << endl;

	}
	break;
	case 2:
	{
		// 2
		cout << "●●●●●" << endl;
		TextColor(0, 0); cout << "○○○○"; TextColor(15, 0); cout << "●" << endl;
		TextColor(15, 0); cout << "●●●●●" << endl;
		cout << "●"; TextColor(0, 0); cout << "○○○○" << endl;
		TextColor(15, 0); cout << "●●●●●" << endl;
			
	}
	break;
	case 3:
	{
		// 3
		TextColor(15, 0);
		cout << "●●●●●" << endl;
		TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●●" << endl;
		cout << "●●●●●" << endl;
		TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●●" << endl;
		cout << "●●●●●" << endl;
			
	}
	break;
	case 4:
	{
		TextColor(15, 0);
		cout << "●"; TextColor(0, 0); cout << "○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○" << endl;
		TextColor(15, 0);	cout << "●"; TextColor(0, 0); cout << "○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○" << endl;
		TextColor(15, 0); cout << "●●●●●" << endl;
		TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○" << endl;
		cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○" << endl;
		TextColor(15, 0);


	}
	break;
	case 5:
	{
		TextColor(15, 0);
		cout << "●●●●●" << endl;
		cout << "●●"; TextColor(0, 0); cout << "○○○" << endl;
		TextColor(15, 0); cout << "●●●●●" << endl;
		TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●●" << endl;
		cout << "●●●●●" << endl;
		TextColor(15, 0);

	}
	break;
	case 6:
	{
		// 6
		TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●●" << endl;
		TextColor(0, 0); cout << "○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○" << endl;
		cout << "○"; TextColor(15, 0); cout << "●●●"; TextColor(0, 0); cout << "○" << endl;
		TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●" << endl;
		TextColor(0, 0); cout << "○"; TextColor(15, 0); cout << "●●●"; TextColor(0, 0); cout << "○" << endl;
		TextColor(15, 0);

	}
	break;
	case 7:
	{
		TextColor(15, 0); cout << "●●●●●" << endl;
		cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●" << endl;
		cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●" << endl;
		TextColor(0, 0); cout << "○○○○"; TextColor(15, 0); cout << "●" << endl;
		TextColor(0, 0); cout << "○○○○"; TextColor(15, 0); cout << "●" << endl;
		TextColor(15, 0);

			
	}
	break;
	case 8:
	{
		// 8
		TextColor(15, 0); cout << "●●●●●" << endl;
		cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●" << endl;
		cout << "●●●●●" << endl;
		cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●" << endl;
		cout << "●●●●●" << endl;
		TextColor(15, 0);

			
	}
	break;
	case 9:
	{
		// 9
		TextColor(15, 0); cout << "●●●●●" << endl;
		cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●" << endl;
		cout << "●●●●●" << endl;
		TextColor(0, 0); cout << "○○○○"; TextColor(15, 0); cout << "●" << endl;
		TextColor(0, 0); cout << "○○○○"; TextColor(15, 0); cout << "●" << endl;
		TextColor(15, 0);

			
	}
	break;


	default:
		break;
	}

}

// 룰렛 계속 돌리기
void DOT::RandomNum()
{
	int randNum = -1;

	while (true)
	{
		if (randNum < 9)
		{
			randNum += 1;
		}
		else
		{
			randNum = 0;
		}
		switch (randNum)
		{
		case 0:
		{
			TextColor(15, 0);
			// 0	
			cout << "●●●●●"; cout << "●●●●●"; cout << "●●●●●" << endl;
			cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●"; cout << "●"; TextColor(0, 0); cout << "○○○○"; TextColor(15, 0); cout << "●" << endl;
			cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●"; cout << "●"; TextColor(0, 0); cout << "○○○○"; TextColor(15, 0); cout << "●" << endl;
			cout << "●●●●●"; cout << "●●●●●"; cout << "●●●●●" << endl;
			Sleep(150);
			system("cls");
		}
		break;
		case 1:
		{
			// 1
			/*TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○" << endl;
			cout << "○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○" << endl;
			TextColor(0, 0); cout << "●"; TextColor(0, 0); cout << "○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○" << endl;
			cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○" << endl;
			TextColor(15, 0);	cout << "●●●●●" << endl;
			*/
			// 1
			TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○" << endl;
			cout << "○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○"; cout << "○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○"; cout << "○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○" << endl;
			TextColor(0, 0); cout << "●"; TextColor(0, 0); cout << "○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; TextColor(0, 0); cout << "●"; TextColor(0, 0); cout << "○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; TextColor(0, 0); cout << "●"; TextColor(0, 0); cout << "○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○" << endl;
			cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○" << endl;
			TextColor(15, 0);	cout << "●●●●●"; TextColor(15, 0);	cout << "●●●●●"; TextColor(15, 0);	cout << "●●●●●" << endl;

			
			Sleep(150);
			system("cls");
		}
		break;
		case 2:
		{
			// 2
			/*cout << "●●●●●" << endl;
			TextColor(0, 0); cout << "○○○○"; TextColor(15, 0); cout << "●" << endl;
			TextColor(15, 0); cout << "●●●●●" << endl;
			cout << "●"; TextColor(0, 0); cout << "○○○○" << endl;
			TextColor(15, 0); cout << "●●●●●" << endl;
			*/
			TextColor(15, 0);
			cout << "●●●●●"; cout << "●●●●●"; cout << "●●●●●" << endl;
			TextColor(0, 0); cout << "○○○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○○○"; TextColor(15, 0); cout << "●" << endl;
			TextColor(15, 0); cout << "●●●●●"; TextColor(15, 0); cout << "●●●●●"; TextColor(15, 0); cout << "●●●●●" << endl;
			cout << "●"; TextColor(0, 0); cout << "○○○○"; cout << "●"; TextColor(0, 0); cout << "○○○○"; cout << "●"; TextColor(0, 0); cout << "○○○○" << endl;
			TextColor(15, 0); cout << "●●●●●"; TextColor(15, 0); cout << "●●●●●"; TextColor(15, 0); cout << "●●●●●" << endl;


			Sleep(150);
			system("cls");
			
		}
		break;
		case 3:
		{
			// 3
			/*cout << "●●●●●" << endl;
			TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●●" << endl;
			cout << "●●●●●" << endl;
			TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●●" << endl;
			cout << "●●●●●" << endl;
			*/
			TextColor(15, 0);
			cout << "●●●●●"; cout << "●●●●●"; cout << "●●●●●" << endl;
			TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●●" << endl;
			cout << "●●●●●"; cout << "●●●●●"; cout << "●●●●●" << endl;
			TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●●" << endl;
			cout << "●●●●●"; cout << "●●●●●"; cout << "●●●●●" << endl;

			
			Sleep(150);
			system("cls");
		}
		break;
		case 4:
		{
			// 4
			TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○" << endl;
			TextColor(15, 0);	cout << "●"; TextColor(0, 0); cout << "○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; TextColor(15, 0);	cout << "●"; TextColor(0, 0); cout << "○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; TextColor(15, 0);	cout << "●"; TextColor(0, 0); cout << "○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○" << endl;
			TextColor(15, 0); cout << "●●●●●"; TextColor(15, 0); cout << "●●●●●"; TextColor(15, 0); cout << "●●●●●" << endl;
			TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○" << endl;
			cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○" << endl;
			TextColor(15, 0);
			Sleep(150);
			system("cls");
		}
		break;
		case 5:
		{
			// 5
			/*TextColor(15, 0);
			cout << "●●●●●" << endl;
			cout << "●●"; TextColor(0, 0); cout << "○○○" << endl;
			TextColor(15, 0); cout << "●●●●●" << endl;
			TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●●" << endl;
			cout << "●●●●●" << endl;*/

			TextColor(15, 0);
			cout << "●●●●●"; cout << "●●●●●"; cout << "●●●●●" << endl;
			cout << "●●"; TextColor(0, 0); cout << "○○○"; cout << "●●"; TextColor(0, 0); cout << "○○○"; cout << "●●"; TextColor(0, 0); cout << "○○○" << endl;
			TextColor(15, 0); cout << "●●●●●"; TextColor(15, 0); cout << "●●●●●"; TextColor(15, 0); cout << "●●●●●" << endl;
			TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●●" << endl;
			cout << "●●●●●"; cout << "●●●●●"; cout << "●●●●●" << endl;
			
			Sleep(150);
			system("cls");

		}
		break;
		case 6:
		{
			// 6
			/*TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●●" << endl;
			TextColor(0, 0); cout << "○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○" << endl;
			cout << "○"; TextColor(15, 0); cout << "●●●"; TextColor(0, 0); cout << "○" << endl;
			TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●" << endl;
			TextColor(0, 0); cout << "○"; TextColor(15, 0); cout << "●●●"; TextColor(0, 0); cout << "○" << endl;
			*/
			
			TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●●" << endl;
			TextColor(0, 0); cout << "○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○"; TextColor(0, 0); cout << "○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○"; TextColor(0, 0); cout << "○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○" << endl;
			cout << "○"; TextColor(15, 0); cout << "●●●"; TextColor(0, 0); cout << "○"; cout << "○"; TextColor(15, 0); cout << "●●●"; TextColor(0, 0); cout << "○"; cout << "○"; TextColor(15, 0); cout << "●●●"; TextColor(0, 0); cout << "○" << endl;
			TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●" << endl;
			TextColor(0, 0); cout << "○"; TextColor(15, 0); cout << "●●●"; TextColor(0, 0); cout << "○"; TextColor(0, 0); cout << "○"; TextColor(15, 0); cout << "●●●"; TextColor(0, 0); cout << "○"; TextColor(0, 0); cout << "○"; TextColor(15, 0); cout << "●●●"; TextColor(0, 0); cout << "○" << endl;
			TextColor(15, 0);

			Sleep(150);
			system("cls");
		}
		break;
		case 7:
		{
			// 7
			/*TextColor(15, 0); cout << "●●●●●" << endl;
			cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●" << endl;
			cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●" << endl;
			TextColor(0, 0); cout << "○○○○"; TextColor(15, 0); cout << "●" << endl;
			TextColor(0, 0); cout << "○○○○"; TextColor(15, 0); cout << "●" << endl;
			*/
			
			TextColor(15, 0); cout << "●●●●●"; TextColor(15, 0); cout << "●●●●●"; TextColor(15, 0); cout << "●●●●●" << endl;
			cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●"; cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●"; cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●" << endl;
			cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●"; cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●"; cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●" << endl;
			TextColor(0, 0); cout << "○○○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○○○"; TextColor(15, 0); cout << "●" << endl;
			TextColor(0, 0); cout << "○○○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○○○"; TextColor(15, 0); cout << "●" << endl;
			TextColor(15, 0);


			Sleep(150);
			system("cls");
		}
		break;
		case 8:
		{
			// 8
			/*TextColor(15, 0); cout << "●●●●●" << endl;
			cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●" << endl;
			cout << "●●●●●" << endl;
			cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●" << endl;
			cout << "●●●●●" << endl;
			*/
			
			TextColor(15, 0); cout << "●●●●●"; TextColor(15, 0); cout << "●●●●●"; TextColor(15, 0); cout << "●●●●●" << endl;
			cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●"; cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●"; cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●" << endl;
			cout << "●●●●●"; cout << "●●●●●"; cout << "●●●●●" << endl;
			cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●"; cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●"; cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●" << endl;
			cout << "●●●●●"; cout << "●●●●●"; cout << "●●●●●" << endl;
			TextColor(15, 0);


			Sleep(150);
			system("cls");
		}
		break;
		case 9:
		{
			// 9
			/*TextColor(15, 0); cout << "●●●●●" << endl;
			cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●" << endl;
			cout << "●●●●●" << endl;
			TextColor(0, 0); cout << "○○○○"; TextColor(15, 0); cout << "●" << endl;
			TextColor(0, 0); cout << "○○○○"; TextColor(15, 0); cout << "●" << endl;
			*/
			
			TextColor(15, 0); cout << "●●●●●"; TextColor(15, 0); cout << "●●●●●"; TextColor(15, 0); cout << "●●●●●" << endl;
			cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●"; cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●"; cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●" << endl;
			cout << "●●●●●"; cout << "●●●●●"; cout << "●●●●●" << endl;
			TextColor(0, 0); cout << "○○○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○○○"; TextColor(15, 0); cout << "●" << endl;
			TextColor(0, 0); cout << "○○○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○○○"; TextColor(15, 0); cout << "●" << endl;
			TextColor(15, 0);


			Sleep(150);
			system("cls");
		}
		break;
		default:
			break;
		}
	}	
}

// 정해진 숫자 바로 띄우기
void DOT::DotSuc(int num)
{
	switch (num)
	{
	case 0:
	{
		TextColor(15, 0);
		// 0	
		cout << "●●●●●"; cout << "●●●●●"; cout << "●●●●●" << endl;
		cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●"; cout << "●"; TextColor(0, 0); cout << "○○○○"; TextColor(15, 0); cout << "●" << endl;
		cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●"; cout << "●"; TextColor(0, 0); cout << "○○○○"; TextColor(15, 0); cout << "●" << endl;
		cout << "●●●●●"; cout << "●●●●●"; cout << "●●●●●" << endl;
		TextColor(15, 0);

		Sleep(2000);
		system("cls");
	}
	break;
	case 1:
	{
		// 1
		/*TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○" << endl;
		cout << "○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○" << endl;
		TextColor(0, 0); cout << "●"; TextColor(0, 0); cout << "○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○" << endl;
		cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○" << endl;
		TextColor(15, 0);	cout << "●●●●●" << endl;
		*/
		// 1
		TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○" << endl;
		cout << "○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○"; cout << "○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○"; cout << "○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○" << endl;
		TextColor(0, 0); cout << "●"; TextColor(0, 0); cout << "○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; TextColor(0, 0); cout << "●"; TextColor(0, 0); cout << "○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; TextColor(0, 0); cout << "●"; TextColor(0, 0); cout << "○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○" << endl;
		cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○" << endl;
		TextColor(15, 0);	cout << "●●●●●"; TextColor(15, 0);	cout << "●●●●●"; TextColor(15, 0);	cout << "●●●●●" << endl;
		TextColor(15, 0);


		Sleep(2000);
		system("cls");
	}
	break;
	case 2:
	{
		// 2
		/*cout << "●●●●●" << endl;
		TextColor(0, 0); cout << "○○○○"; TextColor(15, 0); cout << "●" << endl;
		TextColor(15, 0); cout << "●●●●●" << endl;
		cout << "●"; TextColor(0, 0); cout << "○○○○" << endl;
		TextColor(15, 0); cout << "●●●●●" << endl;
		*/
		TextColor(15, 0);
		cout << "●●●●●"; cout << "●●●●●"; cout << "●●●●●" << endl;
		TextColor(0, 0); cout << "○○○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○○○"; TextColor(15, 0); cout << "●" << endl;
		TextColor(15, 0); cout << "●●●●●"; TextColor(15, 0); cout << "●●●●●"; TextColor(15, 0); cout << "●●●●●" << endl;
		cout << "●"; TextColor(0, 0); cout << "○○○○"; cout << "●"; TextColor(0, 0); cout << "○○○○"; cout << "●"; TextColor(0, 0); cout << "○○○○" << endl;
		TextColor(15, 0); cout << "●●●●●"; TextColor(15, 0); cout << "●●●●●"; TextColor(15, 0); cout << "●●●●●" << endl;
		TextColor(15, 0);


		Sleep(2000);
		system("cls");

	}
	break;
	case 3:
	{
		// 3
		/*cout << "●●●●●" << endl;
		TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●●" << endl;
		cout << "●●●●●" << endl;
		TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●●" << endl;
		cout << "●●●●●" << endl;
		*/
		TextColor(15, 0);
		cout << "●●●●●"; cout << "●●●●●"; cout << "●●●●●" << endl;
		TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●●" << endl;
		cout << "●●●●●"; cout << "●●●●●"; cout << "●●●●●" << endl;
		TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●●" << endl;
		cout << "●●●●●"; cout << "●●●●●"; cout << "●●●●●" << endl;
		TextColor(15, 0);


		Sleep(2000);
		system("cls");
	}
	break;
	case 4:
	{
		// 4
		TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○" << endl;
		TextColor(15, 0);	cout << "●"; TextColor(0, 0); cout << "○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; TextColor(15, 0);	cout << "●"; TextColor(0, 0); cout << "○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; TextColor(15, 0);	cout << "●"; TextColor(0, 0); cout << "○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○" << endl;
		TextColor(15, 0); cout << "●●●●●"; TextColor(15, 0); cout << "●●●●●"; TextColor(15, 0); cout << "●●●●●" << endl;
		TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○" << endl;
		cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○" << endl;
		TextColor(15, 0);

		Sleep(2000);
		system("cls");
	}
	break;
	case 5:
	{
		// 5
		/*TextColor(15, 0);
		cout << "●●●●●" << endl;
		cout << "●●"; TextColor(0, 0); cout << "○○○" << endl;
		TextColor(15, 0); cout << "●●●●●" << endl;
		TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●●" << endl;
		cout << "●●●●●" << endl;*/

		TextColor(15, 0);
		cout << "●●●●●"; cout << "●●●●●"; cout << "●●●●●" << endl;
		cout << "●●"; TextColor(0, 0); cout << "○○○"; cout << "●●"; TextColor(0, 0); cout << "○○○"; cout << "●●"; TextColor(0, 0); cout << "○○○" << endl;
		TextColor(15, 0); cout << "●●●●●"; TextColor(15, 0); cout << "●●●●●"; TextColor(15, 0); cout << "●●●●●" << endl;
		TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●●" << endl;
		cout << "●●●●●"; cout << "●●●●●"; cout << "●●●●●" << endl;
		TextColor(15, 0);

		Sleep(2000);
		system("cls");

	}
	break;
	case 6:
	{
		// 6
		/*TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●●" << endl;
		TextColor(0, 0); cout << "○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○" << endl;
		cout << "○"; TextColor(15, 0); cout << "●●●"; TextColor(0, 0); cout << "○" << endl;
		TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●" << endl;
		TextColor(0, 0); cout << "○"; TextColor(15, 0); cout << "●●●"; TextColor(0, 0); cout << "○" << endl;
		*/

		TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●●" << endl;
		TextColor(0, 0); cout << "○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○"; TextColor(0, 0); cout << "○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○"; TextColor(0, 0); cout << "○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○" << endl;
		cout << "○"; TextColor(15, 0); cout << "●●●"; TextColor(0, 0); cout << "○"; cout << "○"; TextColor(15, 0); cout << "●●●"; TextColor(0, 0); cout << "○"; cout << "○"; TextColor(15, 0); cout << "●●●"; TextColor(0, 0); cout << "○" << endl;
		TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●" << endl;
		TextColor(0, 0); cout << "○"; TextColor(15, 0); cout << "●●●"; TextColor(0, 0); cout << "○"; TextColor(0, 0); cout << "○"; TextColor(15, 0); cout << "●●●"; TextColor(0, 0); cout << "○"; TextColor(0, 0); cout << "○"; TextColor(15, 0); cout << "●●●"; TextColor(0, 0); cout << "○" << endl;
		TextColor(15, 0);


		Sleep(2000);
		system("cls");
	}
	break;
	case 7:
	{
		// 7
		/*TextColor(15, 0); cout << "●●●●●" << endl;
		cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●" << endl;
		cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●" << endl;
		TextColor(0, 0); cout << "○○○○"; TextColor(15, 0); cout << "●" << endl;
		TextColor(0, 0); cout << "○○○○"; TextColor(15, 0); cout << "●" << endl;
		*/

		TextColor(15, 0); cout << "●●●●●"; TextColor(15, 0); cout << "●●●●●"; TextColor(15, 0); cout << "●●●●●" << endl;
		cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●"; cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●"; cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●" << endl;
		cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●"; cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●"; cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●" << endl;
		TextColor(0, 0); cout << "○○○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○○○"; TextColor(15, 0); cout << "●" << endl;
		TextColor(0, 0); cout << "○○○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○○○"; TextColor(15, 0); cout << "●" << endl;
		TextColor(15, 0);


		Sleep(2000);
		system("cls");
	}
	break;
	case 8:
	{
		// 8
		/*TextColor(15, 0); cout << "●●●●●" << endl;
		cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●" << endl;
		cout << "●●●●●" << endl;
		cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●" << endl;
		cout << "●●●●●" << endl;
		*/

		TextColor(15, 0); cout << "●●●●●"; TextColor(15, 0); cout << "●●●●●"; TextColor(15, 0); cout << "●●●●●" << endl;
		cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●"; cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●"; cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●" << endl;
		cout << "●●●●●"; cout << "●●●●●"; cout << "●●●●●" << endl;
		cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●"; cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●"; cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●" << endl;
		cout << "●●●●●"; cout << "●●●●●"; cout << "●●●●●" << endl;
		TextColor(15, 0);


		Sleep(2000);
		system("cls");
	}
	break;
	case 9:
	{
		// 9
		/*TextColor(15, 0); cout << "●●●●●" << endl;
		cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●" << endl;
		cout << "●●●●●" << endl;
		TextColor(0, 0); cout << "○○○○"; TextColor(15, 0); cout << "●" << endl;
		TextColor(0, 0); cout << "○○○○"; TextColor(15, 0); cout << "●" << endl;
		*/

		TextColor(15, 0); cout << "●●●●●"; TextColor(15, 0); cout << "●●●●●"; TextColor(15, 0); cout << "●●●●●" << endl;
		cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●"; cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●"; cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●" << endl;
		cout << "●●●●●"; cout << "●●●●●"; cout << "●●●●●" << endl;
		TextColor(0, 0); cout << "○○○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○○○"; TextColor(15, 0); cout << "●" << endl;
		TextColor(0, 0); cout << "○○○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○○○"; TextColor(15, 0); cout << "●" << endl;
		TextColor(15, 0);


		Sleep(2000);
		system("cls");
	}
	break;
	default:
		break;
	}
}


// 숫자올라간후 정해진 숫자띄우기
void DOT::TimeRandNum(int num)
{
	int rand = -1;

	while (rand < 10)
	{
		rand += 1;

		switch (rand)
		{
		case 0:
		{
			TextColor(15, 0);
			// 0	
			cout << "●●●●●"; cout << "●●●●●"; cout << "●●●●●" << endl;
			cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●"; cout << "●"; TextColor(0, 0); cout << "○○○○"; TextColor(15, 0); cout << "●" << endl;
			cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●"; cout << "●"; TextColor(0, 0); cout << "○○○○"; TextColor(15, 0); cout << "●" << endl;
			cout << "●●●●●"; cout << "●●●●●"; cout << "●●●●●" << endl;
			Sleep(200);
			system("cls");
		}
		break;
		case 1:
		{
			// 1
			/*TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○" << endl;
			cout << "○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○" << endl;
			TextColor(0, 0); cout << "●"; TextColor(0, 0); cout << "○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○" << endl;
			cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○" << endl;
			TextColor(15, 0);	cout << "●●●●●" << endl;
			*/
			// 1
			TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○" << endl;
			cout << "○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○"; cout << "○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○"; cout << "○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○" << endl;
			TextColor(0, 0); cout << "●"; TextColor(0, 0); cout << "○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; TextColor(0, 0); cout << "●"; TextColor(0, 0); cout << "○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; TextColor(0, 0); cout << "●"; TextColor(0, 0); cout << "○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○" << endl;
			cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○" << endl;
			TextColor(15, 0);	cout << "●●●●●"; TextColor(15, 0);	cout << "●●●●●"; TextColor(15, 0);	cout << "●●●●●" << endl;


			Sleep(300);
			system("cls");
		}
		break;
		case 2:
		{
			// 2
			/*cout << "●●●●●" << endl;
			TextColor(0, 0); cout << "○○○○"; TextColor(15, 0); cout << "●" << endl;
			TextColor(15, 0); cout << "●●●●●" << endl;
			cout << "●"; TextColor(0, 0); cout << "○○○○" << endl;
			TextColor(15, 0); cout << "●●●●●" << endl;
			*/
			TextColor(15, 0);
			cout << "●●●●●"; cout << "●●●●●"; cout << "●●●●●" << endl;
			TextColor(0, 0); cout << "○○○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○○○"; TextColor(15, 0); cout << "●" << endl;
			TextColor(15, 0); cout << "●●●●●"; TextColor(15, 0); cout << "●●●●●"; TextColor(15, 0); cout << "●●●●●" << endl;
			cout << "●"; TextColor(0, 0); cout << "○○○○"; cout << "●"; TextColor(0, 0); cout << "○○○○"; cout << "●"; TextColor(0, 0); cout << "○○○○" << endl;
			TextColor(15, 0); cout << "●●●●●"; TextColor(15, 0); cout << "●●●●●"; TextColor(15, 0); cout << "●●●●●" << endl;


			Sleep(350);
			system("cls");

		}
		break;
		case 3:
		{
			// 3
			/*cout << "●●●●●" << endl;
			TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●●" << endl;
			cout << "●●●●●" << endl;
			TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●●" << endl;
			cout << "●●●●●" << endl;
			*/
			TextColor(15, 0);
			cout << "●●●●●"; cout << "●●●●●"; cout << "●●●●●" << endl;
			TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●●" << endl;
			cout << "●●●●●"; cout << "●●●●●"; cout << "●●●●●" << endl;
			TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●●" << endl;
			cout << "●●●●●"; cout << "●●●●●"; cout << "●●●●●" << endl;


			Sleep(400);
			system("cls");
		}
		break;
		case 4:
		{
			// 4
			TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○" << endl;
			TextColor(15, 0);	cout << "●"; TextColor(0, 0); cout << "○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; TextColor(15, 0);	cout << "●"; TextColor(0, 0); cout << "○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; TextColor(15, 0);	cout << "●"; TextColor(0, 0); cout << "○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○" << endl;
			TextColor(15, 0); cout << "●●●●●"; TextColor(15, 0); cout << "●●●●●"; TextColor(15, 0); cout << "●●●●●" << endl;
			TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○" << endl;
			cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○" << endl;
			TextColor(15, 0);
			Sleep(450);
			system("cls");
		}
		break;
		case 5:
		{
			// 5
			/*TextColor(15, 0);
			cout << "●●●●●" << endl;
			cout << "●●"; TextColor(0, 0); cout << "○○○" << endl;
			TextColor(15, 0); cout << "●●●●●" << endl;
			TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●●" << endl;
			cout << "●●●●●" << endl;*/

			TextColor(15, 0);
			cout << "●●●●●"; cout << "●●●●●"; cout << "●●●●●" << endl;
			cout << "●●"; TextColor(0, 0); cout << "○○○"; cout << "●●"; TextColor(0, 0); cout << "○○○"; cout << "●●"; TextColor(0, 0); cout << "○○○" << endl;
			TextColor(15, 0); cout << "●●●●●"; TextColor(15, 0); cout << "●●●●●"; TextColor(15, 0); cout << "●●●●●" << endl;
			TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●●" << endl;
			cout << "●●●●●"; cout << "●●●●●"; cout << "●●●●●" << endl;

			Sleep(500);
			system("cls");

		}
		break;
		case 6:
		{
			// 6
			/*TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●●" << endl;
			TextColor(0, 0); cout << "○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○" << endl;
			cout << "○"; TextColor(15, 0); cout << "●●●"; TextColor(0, 0); cout << "○" << endl;
			TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●" << endl;
			TextColor(0, 0); cout << "○"; TextColor(15, 0); cout << "●●●"; TextColor(0, 0); cout << "○" << endl;
			*/

			TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●●" << endl;
			TextColor(0, 0); cout << "○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○"; TextColor(0, 0); cout << "○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○"; TextColor(0, 0); cout << "○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○" << endl;
			cout << "○"; TextColor(15, 0); cout << "●●●"; TextColor(0, 0); cout << "○"; cout << "○"; TextColor(15, 0); cout << "●●●"; TextColor(0, 0); cout << "○"; cout << "○"; TextColor(15, 0); cout << "●●●"; TextColor(0, 0); cout << "○" << endl;
			TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●" << endl;
			TextColor(0, 0); cout << "○"; TextColor(15, 0); cout << "●●●"; TextColor(0, 0); cout << "○"; TextColor(0, 0); cout << "○"; TextColor(15, 0); cout << "●●●"; TextColor(0, 0); cout << "○"; TextColor(0, 0); cout << "○"; TextColor(15, 0); cout << "●●●"; TextColor(0, 0); cout << "○" << endl;
			TextColor(15, 0);

			Sleep(550);
			system("cls");
		}
		break;
		case 7:
		{
			// 7
			/*TextColor(15, 0); cout << "●●●●●" << endl;
			cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●" << endl;
			cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●" << endl;
			TextColor(0, 0); cout << "○○○○"; TextColor(15, 0); cout << "●" << endl;
			TextColor(0, 0); cout << "○○○○"; TextColor(15, 0); cout << "●" << endl;
			*/

			TextColor(15, 0); cout << "●●●●●"; TextColor(15, 0); cout << "●●●●●"; TextColor(15, 0); cout << "●●●●●" << endl;
			cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●"; cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●"; cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●" << endl;
			cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●"; cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●"; cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●" << endl;
			TextColor(0, 0); cout << "○○○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○○○"; TextColor(15, 0); cout << "●" << endl;
			TextColor(0, 0); cout << "○○○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○○○"; TextColor(15, 0); cout << "●" << endl;
			TextColor(15, 0);


			Sleep(600);
			system("cls");
		}
		break;
		case 8:
		{
			// 8
			/*TextColor(15, 0); cout << "●●●●●" << endl;
			cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●" << endl;
			cout << "●●●●●" << endl;
			cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●" << endl;
			cout << "●●●●●" << endl;
			*/

			TextColor(15, 0); cout << "●●●●●"; TextColor(15, 0); cout << "●●●●●"; TextColor(15, 0); cout << "●●●●●" << endl;
			cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●"; cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●"; cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●" << endl;
			cout << "●●●●●"; cout << "●●●●●"; cout << "●●●●●" << endl;
			cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●"; cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●"; cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●" << endl;
			cout << "●●●●●"; cout << "●●●●●"; cout << "●●●●●" << endl;
			TextColor(15, 0);


			Sleep(650);
			system("cls");
		}
		break;
		case 9:
		{
			// 9
			/*TextColor(15, 0); cout << "●●●●●" << endl;
			cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●" << endl;
			cout << "●●●●●" << endl;
			TextColor(0, 0); cout << "○○○○"; TextColor(15, 0); cout << "●" << endl;
			TextColor(0, 0); cout << "○○○○"; TextColor(15, 0); cout << "●" << endl;
			*/

			TextColor(15, 0); cout << "●●●●●"; TextColor(15, 0); cout << "●●●●●"; TextColor(15, 0); cout << "●●●●●" << endl;
			cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●"; cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●"; cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●" << endl;
			cout << "●●●●●"; cout << "●●●●●"; cout << "●●●●●" << endl;
			TextColor(0, 0); cout << "○○○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○○○"; TextColor(15, 0); cout << "●" << endl;
			TextColor(0, 0); cout << "○○○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○○○"; TextColor(15, 0); cout << "●" << endl;
			TextColor(15, 0);


			Sleep(700);
			system("cls");
		}
		break;
		default:
			break;
		}
	}
	DOT::DotSuc(num);
}
