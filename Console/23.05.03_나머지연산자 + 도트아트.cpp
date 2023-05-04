/*
과제1. 아이템 만들기

- 종류와 데미지, 가격이 다른 무기 및 방어구 + 악세사리까지 가격 특성
ㄴ 5종씩을 만들고 화면에 출력 15개

	무기 : 
	종류 : 대검
	- Lv 15 이상
	- 물리 공격력 : 42 ~ 48
	- 마법 공격력 : 25 ~ 31
	- 무겁고 길이가 긴 대검입니다.
	- 320 G

	종류 : 도끼
	- Lv 15 이상
	- 물리 공격력 : 35 ~ 60
	- 마법 공격력 : 20 ~ 26
	- 내려치기 공격일 시 물리 공격력에 보정 추가 됩니다.
	- 260 G

	종류 : 활
	- Lv 20 이상
	- 물리 공격력 : 51 ~ 207
	- 마법 공격력 : 48 ~ 152
	- 헤드샷 적중 시 최대 물리 공격력이 적용 됩니다.
	- 410 G

	종류 : 둔기
	- Lv 15 이상
	- 물리 공격력 : 24 ~ 55
	- 마법 공격력 : 23 ~ 48
	- 헤드샷 적중 시 1% 확률로 스턴 효과가 적용 됩니다.
	- 250 G

	종류 : 지팡이
	- Lv 15 이상
	- 물리 공격력 : 10 ~ 32
	- 마법 공격력 : 54 ~ 72
	- 가볍고 날렵한 지팡이 입니다.
	- 300 G

	방어구 : 
	
	종류 : 중갑 하의
	- Lv 15 이상
	- 물리 방어력 : 181
	- 마법 방어력 : 150
	- 무겁지만 단단합니다.
	- 450 G

	종류 : 중갑 상의
	- Lv 15 이상
	- 물리 방어력 : 194
	- 마법 방어력 : 172
	- 무겁지만 단단합니다.
	- 470 G

	종류 : 가죽 장갑
	- Lv 15 이상
	- 물리 방어력 : 145
	- 마법 방어력 : 132
	- 감촉이 좋으며 통풍이 잘 됩니다.
	- 300 G

	종류 : 중갑 벨트
	- Lv 15 이상
	- 물리 방어력 : 163
	- 마법 방어력 : 143
	- 무겁지만 단단합니다.
	- 400 G

	종류 : 중갑 신발
	- Lv 15 이상
	- 물리 방어력 : 157
	- 마법 방어력 : 135
	- 무겁지만 단단합니다.
	- 410 G

	악세사리 :
	목걸이
	- Lv 15 이상
	- 마법 방어력 326
	- 510 G


	반지
	- Lv 15 이상
	- 마법 방어력 311
	- 500 G

	귀걸이
	- Lv 15 이상
	- 마법 방어력 283
	- 490 G


	팔찌
	- Lv 15 이상
	- 마법 방어력 275
	- 480 G


	브로치
	- Lv 15 이상
	- 물리 방어력 61
	- 마법 방어력 340
	- 550 G

- 출력된 화면에는 아이템 종류에 따른 가격 + 특성이 함께 나열된다.

- 필수: 무기 1종 + 방어구 1종 + 악세사리 1종
ㄴ 컬러 도트
 ㄴ 차후 너희 포폴에 들어갈 컨셉으로 추가한다.

 과제2. 랜덤 숫자 담기

 - 1 ~ 5까지의 랜덤숫자 -> 인트

 - 6 ~ 19 까지의 랜덤숫자 -> 인트

 - 23 ~ 189 까지의 랜덤숫자 -> 인트
 ㄴ  검증 수식을 만들어와라

 한줄 조사. 반복문

 - 반복문의 종류와 역할에 대해서 조사

 - 노트에 적어온다.

*/

#include <iostream>
#include <time.h>
#include <Windows.h>

using std::cout;
using std::endl;
using std::cin;

void TextColor(int font, int backGround);

void main()
{
	system("mode con:cols=200 lines=300");

	// rand() 난수
	// srand() 난수 초기화
	srand(time(NULL));

	// 각 무기별 공격력
	int greatSwordPA = rand() % 7 + 42;
	int greatSwordMA = rand() % 7 + 25;

	int axPA		 = rand() % 26 + 35;
	int axMA		 = rand() % 7 + 20;

	int bowPA		 = rand() % 157 + 51;
	int bowMA		 = rand() % 105 + 48;

	int bluntPA		 = rand() % 32 + 24;
	int bluntMA		 = rand() % 26 + 23;

	int staffPA		 = rand() % 23 + 10;
	int staffMA		 = rand() % 19 + 54;

	// 무기
	printf("종류 : 대검\n- Lv 15 이상\n- 물리 공격력 : 42 ~ 48\n- 마법 공격력 : 25 ~ 31\n- 무겁고 길이가 긴 대검\n- 가격 : 320 G\n공격시 물리 공격력 : %d\n공격시 마법 공격력 : %d\n\n",greatSwordPA,greatSwordMA);
	printf("종류 : 도끼\n- Lv 15 이상\n- 물리 공격력 : 35 ~ 60\n- 마법 공격력 : 20 ~ 26\n- 내려치기 공격 시 최대 물리 공격력 적용 확률 증가\n- 가격 : 260 G\n공격시 물리 공격력 : %d\n공격시 마법 공격력 : %d\n\n",axPA,axMA);
	printf("종류 : 활\n- Lv 20 이상\n- 물리 공격력 : 51 ~ 207\n- 마법 공격력 : 48 ~ 152\n- 헤드샷 적중 시 최대 물리 공격력 적용\n- 가격 : 410 G\n공격시 물리 공격력 : %d\n공격시 마법 공격력 : %d\n\n", bowPA, bowMA);
	printf("종류 : 둔기\n- Lv 15 이상\n- 물리 공격력 : 24 ~ 55\n- 마법 공격력 : 23 ~ 48\n- 헤드샷 적중 시 1% 확률로 스턴 효과가 적용\n- 가격 : 250 G\n공격시 물리 공격력 : %d\n공격시 마법 공격력 : %d\n\n", bluntPA, bluntMA);
	printf("종류 : 지팡이\n- Lv 15 이상\n- 물리 공격력 : 10 ~ 32\n- 마법 공격력 : 54 ~ 72\n- 가볍고 날렵한 지팡이\n- 가격 : 300 G\n공격시 물리 공격력 : %d\n공격시 마법 공격력 : %d\n\n", staffPA, staffMA);

	// 방어구
	printf("종류 : 중갑 하의\n- Lv 15 이상\n- 물리 방어력 : 181\n- 마법 방어력 : 150\n- 무겁지만 단단합니다.\n- 가격 : 450 G\n\n");
	printf("종류 : 중갑 상의\n- Lv 15 이상\n- 물리 방어력 : 194\n- 마법 방어력 : 172\n- 무겁지만 단단합니다.\n- 가격 : 470 G\n\n");
	printf("종류 : 가죽 장갑\n- Lv 15 이상\n- 물리 방어력 : 145\n- 마법 방어력 : 132\n- 감촉이 좋으며 통풍이 잘 됩니다.\n- 가격 : 300 G\n\n");
	printf("종류 : 중갑 벨트\n- Lv 15 이상\n- 물리 방어력 : 163\n- 마법 방어력 : 143\n- 무겁지만 단단합니다.\n- 가격 : 400 G\n\n");
	printf("종류 : 중갑 신발\n- Lv 15 이상\n- 물리 방어력 : 157\n- 마법 방어력 : 135\n- 무겁지만 단단합니다.\n- 가격 : 450 G\n\n");

	// 악세사리
	printf("종류 : 목걸이\n- Lv 15 이상\n- 마법 방어력 : 326\n- 가격 : 510 G\n\n");
	printf("종류 : 반지\n- Lv 15 이상\n- 마법 방어력 : 311\n- 가격 : 500 G\n\n");
	printf("종류 : 귀걸이\n- Lv 15 이상\n- 마법 방어력 : 283\n- 가격 : 490 G\n\n");
	printf("종류 : 팔찌\n- Lv 15 이상\n- 마법 방어력 : 275\n- 가격 : 480 G\n\n");
	printf("종류 : 브로치\n- Lv 15 이상\n- 물리 방어력 : 61\n- 마법 방어력 : 340\n- 가격 : 550 G\n\n");

	
	// ==============================================================================
	// 무기 1종▲■
	/*TextColor(0, 0);
	cout << "○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○" << endl;
	cout << "○○○○○○○○○○○○○"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○○○○○○○○○○○○○○○○○○" << endl;
	cout << "○○○○○○○○○○○○"; TextColor(15, 0); cout << "●"; TextColor(4, 0); cout << "▲"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○○○○○○○○○○○○○○○○○" << endl;
	cout << "○○○○○○○○○○○"; TextColor(15, 0); cout << "●"; TextColor(4, 0); cout << "▲▲▲"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○○○○○○○○○○○○○○○○" << endl;
	cout << "○○○○○○○○○○○"; TextColor(15, 0); cout << "●"; TextColor(4, 0); cout << "▲▲▲"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○○○○○○○○○○○○○○○○" << endl;
	cout << "○○○○○○○○○○○"; TextColor(15, 0); cout << "●"; TextColor(4, 0); cout << "▲▲▲"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○○○○○○○○○○○○○○○○" << endl;
	cout << "○○○○○○○○○○○"; TextColor(15, 0); cout << "●"; TextColor(4, 0); cout << "▲▲▲"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○○○○○○○○○○○○○○○○" << endl;
	cout << "○○○○○○○○○○○"; TextColor(15, 0); cout << "●"; TextColor(4, 0); cout << "▲▲▲"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○○○○○○○○○○○○○○○○" << endl;
	cout << "○○○○○○○○○○○"; TextColor(15, 0); cout << "●"; TextColor(4, 0); cout << "▲▲▲"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○○○○○○○○○○○○○○○○" << endl;
	cout << "○○○○○○○○○○○"; TextColor(15, 0); cout << "●"; TextColor(4, 0); cout << "▲▲▲"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○○○○○○○○○○○○○○○○" << endl;
	cout << "○○○○○○○○○○○"; TextColor(15, 0); cout << "●"; TextColor(4, 0); cout << "▲▲▲"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○○○○○○○○○○○○○○○○" << endl;
	cout << "○○○○○○○"; TextColor(6, 0); cout << "■■"; TextColor(0, 0); cout << "○○"; TextColor(15, 0); cout << "●"; TextColor(4, 0); cout << "▲▲▲"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○○"; TextColor(6, 0); cout << "■■"; TextColor(0, 0); cout << "○○○○○○○○○○○○○" << endl;
	cout << "○○○○○○○○"; TextColor(6, 0); cout << "■■"; TextColor(0, 0); cout << "○"; TextColor(15, 0); cout << "●"; TextColor(4, 0); cout << "▲▲▲"; TextColor(15, 0); cout << "●"; TextColor(0, 0); cout << "○"; TextColor(6, 0); cout << "■■"; TextColor(0, 0); cout << "○○○○○○○○○○○○○○" << endl;
	cout << "○○○○○○○○○"; TextColor(6, 0); cout << "■■■■"; TextColor(5, 0); cout << "●"; TextColor(6, 0); cout << "■■■■"; TextColor(0, 0); cout << "○○○○○○○○○○○○○○○" << endl;
	cout << "○○○○○○○○○○○○"; TextColor(6, 0); cout << "■■■"; TextColor(0, 0); cout << "○○○○○○○○○○○○○○○○○○" << endl;
	cout << "○○○○○○○○○○○○"; TextColor(6, 0); cout << "■■■"; TextColor(0, 0); cout << "○○○○○○○○○○○○○○○○○○" << endl;
	cout << "○○○○○○○○○○○○"; TextColor(6, 0); cout << "■■■"; TextColor(0, 0); cout << "○○○○○○○○○○○○○○○○○○" << endl;
	cout << "○○○○○○○○○○○○○"; TextColor(1, 0); cout << "■"; TextColor(0, 0); cout << "○○○○○○○○○○○○○○○○○○○" << endl;
	cout << "○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○" << endl;
	cout << "○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○" << endl;*/
	cout << endl;
	cout << endl;
	cout << endl;
	
	// ==============================================================================

	// 방어구 1종 ● ○
	/*
	TextColor(0, 0);
	cout << "○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○" << endl;
	cout << "○○○○○○○○○○"; TextColor(7, 0); cout << "●"; TextColor(0, 0); cout << "○○○○○○○○○○○○○○○"; TextColor(7, 0); cout << "●"; TextColor(0, 0); cout << "○○○○○○○○○○○○○○" << endl;
	cout << "○○○○○○○○○"; TextColor(7, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○○○○○○○○"; TextColor(7, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○○○○○○" << endl;
	cout << "○○○○○○○○"; TextColor(7, 0); cout << "●●●●●●●●●●●●●●●●●●●●●"; TextColor(0, 0); cout << "○○○○○○○○○○○○" << endl;
	cout << "○○○"; TextColor(7, 0); cout << "●●"; TextColor(0, 0); cout << "○○"; TextColor(7, 0); cout << "●●●"; TextColor(0, 0); cout << "○○○○○○○○○○○○○○○○○"; TextColor(7, 0); cout << "●●●"; TextColor(0, 0); cout << "○○"; TextColor(7, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○" << endl;
	cout << "○○○○"; TextColor(7, 0); cout << "●●●"; TextColor(0, 0); cout << "○○○○○○○"; TextColor(4, 0); cout << "■■■■■■■■■"; TextColor(0, 0); cout << "○○○○○○○"; TextColor(7, 0); cout << "●●●"; TextColor(0, 0); cout << "○○○○○○○○" << endl;
	cout << "○○○"; TextColor(7, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○"; TextColor(4, 0); cout << "■■"; TextColor(0, 0); cout << "○○○○○○○○○"; TextColor(4, 0); cout << "■■"; TextColor(0, 0); cout << "○○○○○○○"; TextColor(7, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○" << endl;
	cout << "○○"; TextColor(7, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○○○○○○○○○○○○○○○○○○○○○○"; TextColor(7, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○" << endl;
	cout << "○"; TextColor(7, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○"; TextColor(4, 0); cout << "■■■■■■■■■■■■■■■"; TextColor(0, 0); cout << "○○○○○○○○"; TextColor(7, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○" << endl;
	cout << "○○○○○○○○"; TextColor(4, 0); cout << "■■■"; TextColor(0, 0); cout << "○○○○○○○○○○○○○○○"; TextColor(4, 0); cout << "■■■"; TextColor(0, 0); cout << "○○○○○○○○○○○○" << endl;
	cout << "○○○○○○○○"; TextColor(13, 0); cout << "l"; TextColor(0, 0); cout << "○○○○○○○○○○○○○○○○○○○"; TextColor(13, 0); cout << "l"; TextColor(0, 0); cout << "○○○○○○○○○○○○" << endl;
	cout << "○○○○○○○○"; TextColor(13, 0); cout << "l"; TextColor(0, 0); cout << "○○○○○○○○○○○○○○○○○○○"; TextColor(13, 0); cout << "l"; TextColor(0, 0); cout << "○○○○○○○○○○○○" << endl;
	cout << "○○○○○"; TextColor(7, 0); cout << "●●"; TextColor(0, 0); cout << "○"; TextColor(13, 0); cout << "l"; TextColor(0, 0); cout << "○○○○○○○○○○○○○○○○○○○"; TextColor(13, 0); cout << "l"; TextColor(0, 0); cout << "○"; TextColor(7, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○○" << endl;
	cout << "○○○○○○"; TextColor(7, 0); cout << "●●"; TextColor(0, 0); cout << "○"; TextColor(13, 0); cout << "l"; TextColor(9, 0); cout << "^^^^^^^^^^^^^^^^^"; TextColor(13, 0); cout << "l"; TextColor(0, 0); cout << "○"; TextColor(7, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○○○" << endl;
	cout << "○○○○○○○"; TextColor(7, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○○○○○○○○○○○○"; TextColor(7, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○○○○" << endl;
	cout << "○○○○"; TextColor(7, 0); cout << "●●"; TextColor(0, 0); cout << "○○○"; TextColor(7, 0); cout << "●●●●●●●●●●●●●●●●●●●"; TextColor(0, 0); cout << "○○○"; TextColor(7, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○" << endl;
	cout << "○○○○○"; TextColor(7, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○○○○○○○○○○○○○○○○"; TextColor(7, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○○" << endl;
	cout << "○○○○○○"; TextColor(7, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○"; TextColor(4, 0); cout << "■■■■■■■■■■■■■"; TextColor(0, 0); cout << "○○○○"; TextColor(7, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○○○" << endl;
	cout << "○○○○○○○○○○○○"; TextColor(4, 0); cout << "■■■■■■■■■■■■■"; TextColor(0, 0); cout << "○○○○○○○○○○○○○○○○" << endl;
	cout << "○○○○○○○"; TextColor(7, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○○○○○○○○○○○○"; TextColor(7, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○○○○" << endl;
	cout << "○○○○○○"; TextColor(7, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○○○○○○○○○○○○○○"; TextColor(7, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○○○" << endl;
	cout << "○○○○○"; TextColor(7, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○○○○○○○○○○○○○○○○"; TextColor(7, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○○" << endl;
	cout << "○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○" << endl;
	cout << "○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○" << endl;
	cout << "○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○" << endl;
	cout << "○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○" << endl;
	cout << endl;
	cout << endl;
	cout << endl;*/

	// ==============================================================================

	// ■ 갑옷 2
	/*TextColor(15, 0);
	cout << "○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○" << endl;
	cout << "○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○" << endl;
	cout << "○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○" << endl;
	cout << "○○○○○○○○○○○○○○○○○";
	TextColor(4, 0);
	cout << "●●"; TextColor(15, 0); cout << "○○○○○○○○○○○○○○○○○○○○○" << endl;
	cout << "○○○○○○○○○○○○○○○○○"; TextColor(4, 0); cout << "●●"; TextColor(15, 0); cout << "○○○○○○○○○○○○○○○○○○○○○" << endl;
	cout << "○○○○○○○○○○○○○○○"; TextColor(3, 0); cout << "●●●●●●"; TextColor(15, 0); cout << "○○○○○○○○○○○○○○○○○○○" << endl;
	cout << "○○○○○○○○○○○○○○○"; TextColor(8, 0); cout << "●●●●●●"; TextColor(15, 0); cout << "○○○○○○○○○○○○○○○○○○○" << endl;
	cout << "○○○○○○○○○○○○○○○"; TextColor(8, 0); cout << "●●●●●●"; TextColor(15, 0); cout << "○○○○○○○○○○○○○○○○○○○" << endl;
	cout << "○○○○○○○○○○"; TextColor(8, 0); cout << "●●"; TextColor(15, 0); cout << "○○○"; TextColor(8, 0); cout << "●●●●●●"; TextColor(15, 0); cout << "○○○"; TextColor(8, 0); cout << "●●"; TextColor(15, 0); cout << "○○○○○○○○○○○○○○" << endl;
	cout << "○○○○○○○○○○"; TextColor(8, 0); cout << "●●●●●●●●●●●●●●●●"; TextColor(15, 0); cout << "○○○○○○○○○○○○○○" << endl;
	cout << "○○○○○○○○○"; TextColor(8, 0); cout << "●●●"; TextColor(8, 8); cout << "■■"; TextColor(8, 0); cout << "●"; TextColor(8, 8); cout << "■■"; TextColor(8, 0); cout << "●"; TextColor(8, 8); cout << "■■"; TextColor(8, 0); cout << "●"; TextColor(8, 8); cout << "■■"; TextColor(8, 0); cout << "●●●"; TextColor(15, 0); cout << "○○○○○○○○○○○○○○" << endl;
	cout << "○○○○○○○○"; TextColor(8, 0); cout << "●●●●"; TextColor(8, 8); cout << "■■"; TextColor(8, 0); cout << "●"; TextColor(8, 8); cout << "■■"; TextColor(8, 0); cout << "●"; TextColor(8, 8); cout << "■■"; TextColor(8, 0); cout << "●"; TextColor(8, 8); cout << "■■"; TextColor(8, 0); cout << "●●●●"; TextColor(15, 0); cout << "○○○○○○○○○○○○○" << endl;
	cout << "○○○○○○○"; TextColor(8, 0); cout << "●●●●●"; TextColor(8, 8); cout << "■■"; TextColor(8, 0); cout << "●"; TextColor(8, 8); cout << "■■"; TextColor(8, 0); cout << "●"; TextColor(8, 8); cout << "■■"; TextColor(8, 0); cout << "●"; TextColor(8, 8); cout << "■■"; TextColor(8, 0); cout << "●●●●●"; TextColor(15, 0); cout << "○○○○○○○○○○○○" << endl;
	cout << "○○○○○○○○○○○○"; TextColor(8, 8); cout << "■■"; TextColor(8, 0); cout << "●"; TextColor(8, 8); cout << "■■"; TextColor(8, 0); cout << "●"; TextColor(8, 8); cout << "■■"; TextColor(8, 0); cout << "●"; TextColor(8, 8); cout << "■■"; TextColor(15, 0); cout << "○○○○○○○○○○○○○○○○○" << endl;
	cout << "○○○○○○○○○○○○"; TextColor(8, 8); cout << "■■"; TextColor(8, 0); cout << "●"; TextColor(8, 8); cout << "■■"; TextColor(8, 0); cout << "●"; TextColor(8, 8); cout << "■■"; TextColor(8, 0); cout << "●"; TextColor(8, 8); cout << "■■"; TextColor(15, 0); cout << "○○○○○○○○○○○○○○○○○" << endl;
	cout << "○○○○○○○○○○○○"; TextColor(8, 8); cout << "■■"; TextColor(8, 0); cout << "●"; TextColor(8, 8); cout << "■■"; TextColor(8, 0); cout << "●"; TextColor(8, 8); cout << "■■"; TextColor(8, 0); cout << "●"; TextColor(8, 8); cout << "■■"; TextColor(15, 0); cout << "○○○○○○○○○○○○○○○○○" << endl;
	cout << "○○○○○○○○○○○○"; TextColor(8, 8); cout << "■■"; TextColor(8, 0); cout << "●"; TextColor(8, 8); cout << "■■"; TextColor(8, 0); cout << "●"; TextColor(8, 8); cout << "■■"; TextColor(8, 0); cout << "●"; TextColor(8, 8); cout << "■■"; TextColor(15, 0); cout << "○○○○○○○○○○○○○○○○○" << endl;
	cout << "○○○○○○○○○○○●●●●●●●●●●●●●○○○○○○○○○○○○○○○○○○○○○○○○○○○" << endl;
	cout << "○○○○○○○○○○○●●●●●●●●●●●●●○○○○○○○○○○○○○○○○○○○○○○○○○○○" << endl;
	cout << "○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○" << endl;*/



	// ==============================================================================

	// 악세사리 1종
	//○○○○○○ ●●●●●●
	/*TextColor(0, 0);
	cout << "○○○○○○○○○"; TextColor(8, 0); cout << "**"; TextColor(0, 0); cout << "○○○○○○○○○○○"; TextColor(8, 0); cout << "**"; TextColor(0, 0); cout << "○○○○○○○" << endl;
	cout << "○○○○○○○○"; TextColor(8, 0); cout << "**"; TextColor(0, 0); cout << "○○○○"; TextColor(8, 0); cout << "&"; TextColor(0, 0); cout << "○○○○○○"; TextColor(8, 0); cout << "**"; TextColor(0, 0); cout << "○○○○○○"; TextColor(8, 0); cout << "&"; TextColor(0, 0); cout << "○○○○" << endl;
	cout << "○○○○○○○"; TextColor(8, 0); cout << "**"; TextColor(0, 0); cout << "○"; TextColor(8, 0); cout << "&&&&&&"; TextColor(0, 0); cout << "○○○○"; TextColor(8, 0); cout << "**"; TextColor(0, 0); cout << "○○"; TextColor(8, 0); cout << "*"; TextColor(8, 0); cout << "&&&&&&"; TextColor(0, 0); cout << "○○" << endl;
	cout << "○○○○○○"; TextColor(8, 0); cout << "**"; TextColor(0, 0); cout << "○"; TextColor(8, 0); cout << "*"; TextColor(8, 0); cout << "&&"; TextColor(0, 0); cout << "○○"; TextColor(8, 0); cout << "&"; TextColor(0, 0); cout << "○○○○○"; TextColor(8, 0); cout << "**"; TextColor(0, 0); cout << "○"; TextColor(8, 0); cout << "**"; TextColor(8, 0); cout << "&&"; TextColor(0, 0); cout << "○○"; TextColor(8, 0); cout << "&"; TextColor(0, 0); cout << "○○○○○" << endl;
	cout << "○○○○○○"; TextColor(8, 0); cout << "****"; TextColor(0, 0); cout << "○○○○○○○○○"; TextColor(8, 0); cout << "*****"; TextColor(0, 0); cout << "○○○○○○○○" << endl;
	cout << "○○○○○"; TextColor(3, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○○○○○"; TextColor(8, 0); cout << "**"; TextColor(0, 0); cout << "○○○○○○○○○○○○" << endl;
	cout << "○○○○"; TextColor(3, 0); cout << "●●●●"; TextColor(0, 0); cout << "○○○○○○○○○○"; TextColor(3, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○○○○○○" << endl;
	cout << "○○○"; TextColor(3, 0); cout << "●●●●●●"; TextColor(8, 0); cout << "**"; TextColor(0, 0); cout << "○○○○○○"; TextColor(3, 0); cout << "●●●●"; TextColor(8, 0); cout << "**"; TextColor(0, 0); cout << "○○○○○○○○○○" << endl;
	cout << "○○○○"; TextColor(3, 0); cout << "●●●●"; TextColor(0, 0); cout << "○"; TextColor(3, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○"; TextColor(3, 0); cout << "●●●●●●"; TextColor(8, 0); cout << "**"; TextColor(0, 0); cout << "○○○○○○○○○" << endl;
	cout << "○○○○"; TextColor(8, 0); cout << "*"; TextColor(3, 0); cout << "●●"; TextColor(0, 0); cout << "○"; TextColor(3, 0); cout << "●●●●"; TextColor(0, 0); cout << "○○○○○"; TextColor(3, 0); cout << "●●●●"; TextColor(0, 0); cout << "○○"; TextColor(3, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○" << endl;
	cout << "○○○○"; TextColor(8, 0); cout << "**"; TextColor(0, 0); cout << "○"; TextColor(3, 0); cout << "●●●●●●"; TextColor(0, 0); cout << "○○○"; TextColor(8, 0); cout << "**"; TextColor(3, 0); cout << "●●"; TextColor(0, 0); cout << "○○"; TextColor(3, 0); cout << "●●●●"; TextColor(0, 0); cout << "○○○○○○○" << endl;
	cout << "○○○○"; TextColor(8, 0); cout << "**"; TextColor(0, 0); cout << "○○"; TextColor(3, 0); cout << "●●●●"; TextColor(0, 0); cout << "○○○○"; TextColor(8, 0); cout << "**"; TextColor(0, 0); cout << "○○○"; TextColor(3, 0); cout << "●●●●●●"; TextColor(0, 0); cout << "○○○○○○" << endl;
	cout << "○○○○"; TextColor(8, 0); cout << "**"; TextColor(0, 0); cout << "○○○"; TextColor(3, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○"; TextColor(3, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○"; TextColor(3, 0); cout << "●●●●"; TextColor(0, 0); cout << "○○○○○○○" << endl;
	cout << "○○○○○"; TextColor(3, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○"; TextColor(3, 0); cout << "●●●●"; TextColor(0, 0); cout << "○○○○"; TextColor(3, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○" << endl;
	cout << "○○○○"; TextColor(3, 0); cout << "●●●●"; TextColor(0, 0); cout << "○○○○○○"; TextColor(3, 0); cout << "●●●●●●"; TextColor(0, 0); cout << "○○○○○○○○○○○○○" << endl;
	cout << "○○○"; TextColor(3, 0); cout << "●●●●●●"; TextColor(0, 0); cout << "○○○○○○"; TextColor(3, 0); cout << "●●●●"; TextColor(0, 0); cout << "○○○○○○○○○○○○○○" << endl;
	cout << "○○○○"; TextColor(3, 0); cout << "●●"; TextColor(15, 0); cout << "●"; TextColor(3, 0); cout << "●"; TextColor(0, 0); cout << "○○○○○○○○"; TextColor(3, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○○○○○○○○" << endl;
	cout << "○○○○○"; TextColor(3, 0); cout << "●●"; TextColor(0, 0); cout << "○○○○○○○○○○○○○○○○○○○○○○○○○○" << endl;
	cout << "○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○○" << endl;
	cout << endl;
	cout << endl;*/

	// ==============================================================================

	// 랜덤 숫자 담기
	int numA = rand() % 5 + 1;
	int numB = rand() % 15 + 6;
	int numC = rand() % 167 + 23;

	//-1 ~5까지의 랜덤숫자->인트

	//- 6 ~19 까지의 랜덤숫자->인트

	//- 23 ~189 까지의 랜덤숫자->인트
	//	ㄴ 단 검증 수식을 만들어와라
	// => 23 ~ 189 사이의 랜덤숫자
	
	// 수식?
	// 189을 최대값으로 하려면 190으로 나눈 나머지로 해야 0 ~ 189가 되지만
	// 시작이 23 부터 시작하기 때문에 + 23을 해야 한다.
	// 그렇기 때문에 190에서 23을 뺀 값으로 나눈 후 나머지를 구한다.
	// 167으로 나눈 나머지를 할 경우 0 ~ 166의 숫자만 남게 된다.
	// 이 때 처음 시작하는 숫자인 23을 더해주면 
	// 시작 숫자가 0이 아닌 23 부터 시작하며 끝인 166은 189가 된다.
	cout <<"1 ~ 5 까지의 랜덤 숫자 : " << numA << endl;
	cout <<"6 ~ 19 까지의 랜덤 숫자 : " << numB << endl;
	cout <<"23 ~ 189 까지의 랜덤 숫자 : "<< numC << endl;
	

	





















}

void TextColor(int font, int backGround)
{
	int Color = font + backGround * 16;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color);
}
