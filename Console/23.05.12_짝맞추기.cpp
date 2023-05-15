//과제3.짝 맞추기
//
//- 사이즈 : 5 x 4
//
//- ☆ ★ ◇ ◆ ♤ ♠ ♡ ♥ ♧ ♣
//
//- 짝이 맞춰진 번호는 계속 오픈된 상태로 있어야 한다.
//
//- 2가지 버전으로 치트 만들기
//ㄴ 1. 치트키를 누르면 패를 전부 오픈 시켜 플레이어에게 보여주고 5초뒤에 다시 원상 복귀 시킨다.
//ㄴ 2. 치트키를 누르면 한쌍의 카드를 제외하고 전부 오픈된다.
//사용자가 마지막 한쌍을 맞추면서 게임이 종료되면 ok

#include <iostream>
#include <Windows.h>

using std::cout;
using std::cin;
using std::endl;

void TextColor(int font, int backGround);

// 도트 숫자 카운트
namespace DOTPRINT
{
	void CountNum();
}

void main()
{
	//- ☆0 ★1 ◇2 ◆3 ♤4 ♠5 ♡6 ♥7 ♧8 ♣9
	// 각각의 문자 변수
	char starA[3] = "☆";
	char starB[3] = "★";
	char diaA[3] = "◇";
	char diaB[3] = "◆";
	char spaceA[3] = "♤";
	char spaceB[3] = "♠";
	char heartA[3] = "♡";
	char heartB[3] = "♥";
	char cloverA[3] = "♧";
	char cloverB[3] = "♣";
	
	
	// 카드 배열 숫자
	int arr[20] = { 0 };
	const int arrMax = sizeof(arr) / sizeof(arr[0]);

	// 전체 100으로 초기화
	// 오픈된 카드 여부 확인용
	for (int i = 0; i < arrMax; ++i)
	{
		arr[i] = 100;
	}

	// 카드 번호
	int cardNum1 = 0;
	int cardNum2 = 0;

	// 게임 종료 조건
	const int endGame = 200;
	int temp = 0;
	
	while (temp > endGame)
	{
		printf("치트키\n전체 카드 오픈 : 100\n한 세트 빼고 전부 오픈 : 1000\n");
		cout << '\n';

		printf("===== 짝 맞추기 게임 시작 ===== \n");
		printf("맞출 카드 자리 숫자를 입력하세요\n");
		cout << '\n';

		// =================================================
		printf("현재 오픈 된 카드 자리\n");
		printf("%s\t", (arr[0] == 100 ? "1" : "☆"));
		printf("%s\t", (arr[1] == 100 ? "2" : "★"));
		printf("%s\t", (arr[2] == 100 ? "3" : "◇"));
		printf("%s\t", (arr[3] == 100 ? "4" : "◆"));
		printf("%s\t", (arr[4] == 100 ? "5" : "♤"));
		cout << '\n';
		printf("%s\t", (arr[5] == 100 ? "6" : "♠"));
		printf("%s\t", (arr[6] == 100 ? "7" : "♡"));
		printf("%s\t", (arr[7] == 100 ? "8" : "♥"));
		printf("%s\t", (arr[8] == 100 ? "9" : "♧"));
		printf("%s\t", (arr[9] == 100 ? "10" : "♣"));
		cout << '\n';
		printf("%s\t", (arr[10] == 100 ? "11" : "☆"));
		printf("%s\t", (arr[11] == 100 ? "12" : "★"));
		printf("%s\t", (arr[12] == 100 ? "13" : "◇"));
		printf("%s\t", (arr[13] == 100 ? "14" : "◆"));
		printf("%s\t", (arr[14] == 100 ? "15" : "♤"));
		cout << '\n';
		printf("%s\t", (arr[15] == 100 ? "16" : "♠"));
		printf("%s\t", (arr[16] == 100 ? "17" : "♡"));
		printf("%s\t", (arr[17] == 100 ? "18" : "♥"));
		printf("%s\t", (arr[18] == 100 ? "19" : "♧"));
		printf("%s\t", (arr[19] == 100 ? "20" : "♣"));
		// =================================================
		cout << '\n' << '\n';
		
		// 짝을 틀렸으면 goto문 복귀 위치
		Play:
		
		
		//- ☆0 ★1 ◇2 ◆3 ♤4 ♠5 ♡6 ♥7 ♧8 ♣9
		printf("☆, ★, ◇, ◆, ♤, ♠ , ♡, ♥, ♧, ♣\n\n");

		printf("첫번째 카드 선택\n");
		cin >> cardNum1;
		
		printf("두번째 카드 선택\n");
		cin >> cardNum2;
		
		if (cardNum1 == 100 || cardNum2 == 100)
		{
			// 전체 카드 5초 동안 오픈
			printf("치트 사용\n5초간 전체 오픈 \n");
			printf("%s\t%s\t%s\t%s\t%s\n", starA, starB, diaA, diaB, spaceA);
			printf("%s\t%s\t%s\t%s\t%s\n", spaceB, heartA, heartB, cloverA, cloverB);
			printf("%s\t%s\t%s\t%s\t%s\n", starA, starB, diaA, diaB, spaceA);
			printf("%s\t%s\t%s\t%s\t%s\n", spaceB, heartA, heartB, cloverA, cloverB);

			DOTPRINT::CountNum();
			system("cls");
			continue;
		}
		else if (cardNum1 == 1000 || cardNum2 == 1000)
		{
			// 치트 사용 후 틀렸을 시 다시 선택
			reGame:
			// 한세트 빼고 카드 오픈
			printf("치트 사용\n한 세트 빼고 전체 오픈\n");
			printf("%s\t%s\t%s\t%s\t%s\n", starA, starB, diaA, diaB, spaceA);
			printf("%s\t%s\t%s\t%s\t%s\n", spaceB, heartA, "?", cloverA, cloverB);
			printf("%s\t%s\t%s\t%s\t%s\n", starA, starB, diaA, diaB, spaceA);
			printf("%s\t%s\t%s\t%s\t%s\n", spaceB, heartA, "?", cloverA, cloverB);
			
			cout << '\n';

			printf("첫번째 카드 선택\n");
			cin >> cardNum1;

			printf("두번째 카드 선택\n");
			cin >> cardNum2;

			cout << '\n';

			if ((cardNum1 + cardNum2) == 26)
			{
				printf("전체 짝을 맞췄습니다.\n");
				printf("%s\t%s\t%s\t%s\t%s\n", starA, starB, diaA, diaB, spaceA);
				printf("%s\t%s\t%s\t%s\t%s\n", spaceB, heartA, heartB, cloverA, cloverB);
				printf("%s\t%s\t%s\t%s\t%s\n", starA, starB, diaA, diaB, spaceA);
				printf("%s\t%s\t%s\t%s\t%s\n", spaceB, heartA, heartB, cloverA, cloverB);
				Sleep(2000);
				break;
			}
			else
			{
				printf("짝을 다시 골라주세요\n");
				goto reGame;
			}
		}
		else
		{
			// 카드 인덱스 번호에 카드 값 넣기
			arr[cardNum1 - 1] = cardNum1;
			arr[cardNum2 - 1] = cardNum2;

			// 치트키 사용 안할 시
			//- ☆0 ★1 ◇2 ◆3 ♤4 ♠5 ♡6 ♥7 ♧8 ♣9
			
			printf("%s\t", (arr[0] == 100 ? "1" : "☆"));
			printf("%s\t", (arr[1] == 100 ? "2" : "★"));
			printf("%s\t", (arr[2] == 100 ? "3" : "◇"));
			printf("%s\t", (arr[3] == 100 ? "4" : "◆"));
			printf("%s\t", (arr[4] == 100 ? "5" : "♤"));
			cout << '\n';
			printf("%s\t", (arr[5] == 100 ? "6" : "♠"));
			printf("%s\t", (arr[6] == 100 ? "7" : "♡"));
			printf("%s\t", (arr[7] == 100 ? "8" : "♥"));
			printf("%s\t", (arr[8] == 100 ? "9" : "♧"));
			printf("%s\t", (arr[9] == 100 ? "10" : "♣"));
			cout << '\n';
			printf("%s\t", (arr[10] == 100 ? "11" : "☆"));
			printf("%s\t", (arr[11] == 100 ? "12" : "★"));
			printf("%s\t", (arr[12] == 100 ? "13" : "◇"));
			printf("%s\t", (arr[13] == 100 ? "14" : "◆"));
			printf("%s\t", (arr[14] == 100 ? "15" : "♤"));
			cout << '\n';
			printf("%s\t", (arr[15] == 100 ? "16" : "♠"));
			printf("%s\t", (arr[16] == 100 ? "17" : "♡"));
			printf("%s\t", (arr[17] == 100 ? "18" : "♥"));
			printf("%s\t", (arr[18] == 100 ? "19" : "♧"));
			printf("%s\t", (arr[19] == 100 ? "20" : "♣"));
			cout << '\n' << '\n';
			
			if ((cardNum1 - cardNum2 == 10 || cardNum1 - cardNum2 == -10))
			{
				printf("짝을 맞췄습니다.\n");
			}
			else
			{
				printf("짝이 맞지 않습니다.\n다시 골라주세요.\n");
				// 값 초기화
				arr[cardNum1 - 1] = 100;
				arr[cardNum2 - 1] = 100;
				Sleep(2000);
				system("cls");

				// =================================================
				printf("현재 오픈 된 카드 자리\n");
				printf("%s\t", (arr[0] == 100 ? "1" : "☆"));
				printf("%s\t", (arr[1] == 100 ? "2" : "★"));
				printf("%s\t", (arr[2] == 100 ? "3" : "◇"));
				printf("%s\t", (arr[3] == 100 ? "4" : "◆"));
				printf("%s\t", (arr[4] == 100 ? "5" : "♤"));
				cout << '\n';
				printf("%s\t", (arr[5] == 100 ? "6" : "♠"));
				printf("%s\t", (arr[6] == 100 ? "7" : "♡"));
				printf("%s\t", (arr[7] == 100 ? "8" : "♥"));
				printf("%s\t", (arr[8] == 100 ? "9" : "♧"));
				printf("%s\t", (arr[9] == 100 ? "10" : "♣"));
				cout << '\n';
				printf("%s\t", (arr[10] == 100 ? "11" : "☆"));
				printf("%s\t", (arr[11] == 100 ? "12" : "★"));
				printf("%s\t", (arr[12] == 100 ? "13" : "◇"));
				printf("%s\t", (arr[13] == 100 ? "14" : "◆"));
				printf("%s\t", (arr[14] == 100 ? "15" : "♤"));
				cout << '\n';
				printf("%s\t", (arr[15] == 100 ? "16" : "♠"));
				printf("%s\t", (arr[16] == 100 ? "17" : "♡"));
				printf("%s\t", (arr[17] == 100 ? "18" : "♥"));
				printf("%s\t", (arr[18] == 100 ? "19" : "♧"));
				printf("%s\t", (arr[19] == 100 ? "20" : "♣"));
				// =================================================
				cout << '\n' << '\n';
				goto Play;
			}
		}
		
		for (int i = 0; i < arrMax; ++i)
		{
			temp += arr[i];
		}

		Sleep(2000);
		system("cls");
	}
	printf("짝 맞추기 게임 종료\n");
}

void TextColor(int font, int backGround)
{
	int Color = font + backGround * 16;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color);
}

// 숫자 카운트
void DOTPRINT::CountNum()
{
	int count = 5;
	while (count > 0)
	{
		switch (count)
		{
		case 0:
		{
			TextColor(15, 0);	
			// 0	
			cout << "●●●●●" << endl;
			cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●" << endl;
			cout << "●"; TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●" << endl;
			cout << "●●●●●" << endl; Sleep(1000);
			system("cls");
		}
		break;
		case 1:
		{
			TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○" << endl;
			cout << "○"; TextColor(15, 0); cout << "●●"; TextColor(0, 0); cout << "○○" << endl;
			TextColor(0, 0); cout << "●"; TextColor(0, 0); cout << "○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○" << endl;
			cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○" << endl;
			TextColor(15, 0);	cout << "●●●●●" << endl;

			Sleep(1000);
			cout << '\n';
			//system("cls");
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

			Sleep(1000);
			cout << '\n';

			//system("cls");

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

			Sleep(1000);
			cout << '\n';

			//system("cls");
		}
		break;
		case 4:
		{
			// 4
			TextColor(15, 0);
			cout << "●"; TextColor(0, 0); cout << "○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○" << endl;
			TextColor(15, 0);	cout << "●"; TextColor(0, 0); cout << "○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○" << endl;
			TextColor(15, 0); cout << "●●●●●" << endl;
			TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○" << endl;
			cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○" << endl;
			TextColor(15, 0);

			Sleep(1000);
			cout << '\n';

			//system("cls");
		}
		break;
		case 5:
		{
			// 5
			TextColor(15, 0);
			cout << "●●●●●" << endl;
			cout << "●●"; TextColor(0, 0); cout << "○○○" << endl;
			TextColor(15, 0); cout << "●●●●●" << endl;
			TextColor(0, 0); cout << "○○○"; TextColor(15, 0); cout << "●●" << endl;
			cout << "●●●●●" << endl;
			TextColor(15, 0);

			Sleep(1000);
			cout << '\n';

			//system("cls");

		}
		break;
		default:
		break;
		}
		--count;

	}
}