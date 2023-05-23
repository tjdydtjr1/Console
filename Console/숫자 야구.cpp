/*
과제1. 숫자 야구 클래스로 나누기

- 두가지 버전
ㄴ 1. 가상화가 있는 버전 1개
ㄴ 2. 클래스가 최소 8개 있는 버전 1개

- 메인 함수에서 클래스를 선택해 원하는 버전을 플레이 할 수 있게 만든다.

과제2. 포트폴리오 선행 작업

- 도트를 추천

복습은 꼭 한다.

열심히 조사
- 노트에 적어온다.
- STL + 자료 구조 + 스택 + 큐 + 트리 + 벡터
  + 리스트 + 맵 + 반복자 + 컨테이너
*/
#include "BaseBall.h"

void main()
{
	BaseBall* Game = new BaseBall;

	delete Game;


}

/*
과제1. 숫자 야구

- 0 ~ 9까지의 숫자 중 컴퓨터가 임의로 3개를 뽑는다.
ㄴ RandNum

- 컴퓨터가 뽑은 숫자를 플레이어가 임의 숫자 3개를 선택하여 숫자와 자리수까지 맞추는 게임
ㄴ 판정

- 만약 선택한 숫자가 컴퓨터 숫자와 같으나 자리수가 다를 경우
ㄴ 1 볼(1B)

- 만약 선택한 숫자가 컴퓨터 숫자와 같고 자리수까지 일치할 경우
ㄴ 1 스트라이크(1S)

- 만약 선택한 숫자가 컴퓨터 숫자와 같지 않고 자리수도 일치하지 않으면
ㄴ 1 아웃(1 Out)

- 이렇게 한 턴에 3S를 만들 경우 몇번만에 맞췄는지 결과를 보여주며 게임 종료

- 필수 : 치트 O, 배열 x
*/