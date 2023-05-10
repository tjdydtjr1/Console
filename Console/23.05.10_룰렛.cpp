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

void main()
{
	int firstNum = rand() % 10;
	int secondNum = rand() % 10;
	int thirdNum = rand() % 10;

	int money = 100000000;
	int bat = 0;

	int userNum1 = 0;
	int userNum2 = 0;
	int userNum3 = 0;

	int stop = 0;

	while (money < 0)
	{
		printf("룰렛 시작\n");
		printf("현재 금액 : %d\n", money);
		printf("배팅 금액 : ");
		cin >> bat;

		cout << '\n' << '\n';
		printf("배팅 숫자 입력 : ");
		cin >> userNum1 >> userNum2 >> userNum3;

		while (userNum1 == 100)
		{
			printf(" 치트 입력 : ");
			cin >> firstNum >> secondNum >> thirdNum;
			break;
		}

		if ((userNum1 + userNum2 + userNum3) == (firstNum + secondNum + thirdNum))
		{
			if ((firstNum + secondNum + thirdNum) == 21)
			{
				money *= 12;
			}
			else
			{
				money *= 5;
			}
		}
		else if (userNum1 == firstNum && userNum2 == secondNum || userNum1 == firstNum && userNum3 == thirdNum || userNum2 == secondNum && thirdNum == thirdNum)
		{
			money *= 2;
		}
		else
		{
			money -= bat;
		}
	
		Sleep(2000);
		system("cls");

	}
}