#include <iostream>
#include <time.h>
#include <Windows.h>


using std::cout;
using std::cin;
using std::endl;


/*
과제1. 가위바위보

- 스위치문을 이용해 만든다.

- 치트 기능과 배팅 기능 추가
ㄴ 초기 소지금 : 10,000원
ㄴ 최소 배팅은 1,000원

- 5판을 하거나 내가 가진 돈을 전부 잃으면 게임 종료

- 이기면 판돈에 x를 얻고 지면 판돈에 x7배를 잃는다.

- 비길 경우 판돈에 x5배를 얻는다.

*/

/*
과제2. 복습 구현화

- 지금까지 배운 내용을 복습한다.0 

- 어떻게 복습을 했는지 구현화 시켜온다.


한줄 조사. 배열

- 노트에 적어온다.

- 비유할 것 생각해 온다. (EX: 배열은 ooo이다.) 서랍장 x


타임 어택. 가위바위보 (if)

- 13분

- 주어진 시간안에 가위바위보 로직을 작성후 실행하여
검사를 받고 통과하면 ok

- 실패 시 : 깜지 당첨 -> 3 x @

*/

void main()
{
	
	/*int randNumA;
	int userNum;
	int myMoney = 10000;
	int count = 0;
	int bat = 0;
	

	while (count < 5 && myMoney > 0)
	{
		srand(time(NULL));
		randNumA = rand() % 3;
		printf(" 치트 : %d\n\n", randNumA);
		printf("가위바위보 게임 시작\n");
		printf("가위 = 0, 바위 = 1, 보 = 2\n");
		printf("해당하는 카드를 입력하세요.\n\n");
		cin >> userNum;
	
		cout << '\n';

		printf("현재 가진 금액 : %d\n", myMoney);
		printf("배팅할 금액을 입력하세요.\n");
		cin >> bat;

		cout << '\n';

		if (bat > myMoney)
		{
			printf("가진 돈보다 많습니다.\n");
			--count;
			Sleep(1000);
			system("cls");
			continue;
		}
		else if (bat < 1000)
		{
			printf("최소 1,000원 이상 배팅하세요.\n");
			--count;
			Sleep(1000);
			system("cls");
			continue;
		}
		
		switch (userNum)
		{
		case 0:
		{
			switch (randNumA)
			{
			case 0:
			{
				printf("비겼습니다.\n");
				printf("배팅 금액 x5 = %d 증감\n", bat * 5);
				myMoney += bat * 5;
				printf("현재 가진 금액 : %d\n", myMoney);
			}
			break;
			case 1:
			{
				printf("졌습니다.\n");
				printf("배팅 금액 x7 = %d 차감\n", bat * 7);
				myMoney -= bat * 7;
				printf("현재 가진 금액 : %d\n", myMoney);
			}
			break;
			case 2:
			{
				printf("이겼습니다.\n");
				printf("배팅 금액 x2 = %d 증감\n", bat * 2);
				myMoney += bat * 2;
				printf("현재 가진 금액 : %d\n", myMoney);
			}
			break;
			default:
			{
				printf("해당하는 카드가 없습니다.\n");
				--count;
			}
			break;
			}
		}
		case 1:
		{
			switch (randNumA)
			{
			case 1:
			{
				printf("비겼습니다.\n");
				printf("배팅 금액 x5 = %d 증감\n", bat * 5);
				myMoney += bat * 5;
				printf("현재 가진 금액 : %d\n", myMoney);
			}
			break;
			case 2:
			{
				printf("졌습니다.\n");
				printf("배팅 금액 x7 = %d 차감\n", bat * 7);
				myMoney -= bat * 7;
				printf("현재 가진 금액 : %d\n", myMoney);
			}
			break;
			case 0:
			{
				printf("이겼습니다.\n");
				printf("배팅 금액 x2 = %d 증감\n", bat * 2);
				myMoney += bat * 2;
				printf("현재 가진 금액 : %d\n", myMoney);
			}
			break;
			default:
			{
				printf("해당하는 카드가 없습니다.\n");
				--count;
			}
			break;
			}
		}
		break;
		case 2:
		{
			switch (randNumA)
			{
			case 2:
			{
				printf("비겼습니다.\n");
				printf("배팅 금액 x5 = %d 증감\n", bat * 5);
				myMoney += bat * 5;
				printf("현재 가진 금액 : %d\n", myMoney);
			}
			break;
			case 0:
			{
				printf("졌습니다.\n");
				printf("배팅 금액 x7 = %d 차감\n", bat * 7);
				myMoney -= bat * 7;
				printf("현재 가진 금액 : %d\n", myMoney);
			}
			break;
			case 1:
			{
				printf("이겼습니다.\n");
				printf("배팅 금액 x2 = %d 증감\n", bat * 2);
				myMoney += bat * 2;
				printf("현재 가진 금액 : %d\n", myMoney);
			}
			break;
			default:
			{
				printf("해당하는 카드가 없습니다.\n");
				--count;
			}
			break;
			}
		}
		break;
		default:
		{
			printf("해당하는 카드가 없습니다.\n");
		}
		break;
		}
		
		Sleep(3000);
		system("cls");
		++count;
	}

	if (myMoney < 0)
	{
		printf("가진 돈을 다 잃었습니다.\n");
	}
	else
	{
		printf("게임 종료\n");
		printf("판돈 획득 : %d\n", myMoney);
	}*/


// 타임어택

	




}