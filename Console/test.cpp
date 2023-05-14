/*
과제2. 월남뽕 (타임 어택)

- 치트 필수

- ♠  1 ~ 13까지의 카드
- ◆ 1 ~ 13까지의 카드
- ♣  1 ~ 13까지의 카드
- ♥  1 ~ 13까지의 카드

종류별 13장 -> 총 52장

- 예외처리
ㄴ A -> 1
ㄴ j -> 11
ㄴ Q -> 12
ㄴ K -> 13

- 52장의 카드를 최소 한번 랜덤으로 섞어주고 그 후 매턴 마다 3장씩 뒤집는다.

- 앞쪽에 배치된 두장의 카드를 보고 최소 배팅액 이상(임의)의 금액을 배팅한다.
- 배팅 후 세번째 카드의 수가 앞서 오픈 된 카드 숫자의 사이에 있다면 배팅금의 2배
	획득하여 소지금 추가
- 반대라면 소지금에서 배팅한 만큼 마이너스

- 필수 : 한턴이 끝나고 사용된 카드는 버려져 사용할 수 없다.
*/

#include <iostream>
#include <Windows.h>
#include <time.h>

using std::cout;
using std::cin;
using std::endl;


void main()
{
	
	int randCard[52] = { 0 };
	const int arrMax = sizeof(randCard) / sizeof(randCard[0]);

	for (int i = 0; i < arrMax; ++i)
	{
		randCard[i] = i + 1;
		printf("%d\n", randCard[i]);
	}



}