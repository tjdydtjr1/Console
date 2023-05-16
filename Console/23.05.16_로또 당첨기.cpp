/*
과제1. 로또 당첨기

- 당첨번호 6개 + 보너스 번호 1개

- 6개 입력 받는다.

- 필수 : 치트

- 판정
- 1등 : 당첨 번호 6개와 내가 입력한 6개의 숫자가 같을 때
- 2등 : 당첨 번호 5개 + 보너스 번호 1개와 내가 입력한 숫자 6개가 같을 때
- 3등 : 당첨 번호 5개와 내가 입력한 5개의 숫자가 같을 때
- 4등 : 당첨 번호 4개와 내가 입력한 4개의 숫자가 같을 때
- 5등 : 당첨 번호 3개와 내가 입력한 3개의 숫자가 같을 때

*/
#include "Lotto.h"

namespace Lotto
{
	// 1. 당첨 번호 6개 + 보너스 번호 1개 = 7개 추첨 (랜덤 추첨 45번호까지)
	// 2. 사용자가 선택한 번호			= 6개 입력
	// 3. 당첨 번호 사용자 번호 비교		= 갯수에 따른 등수 확정
	

	// 뽑힌 로또 번호 구조체
	struct SetNum
	{
		int m_randNum;
	};

	// 사용자 입력받을 번호 구조체
	struct UserNum
	{
		int m_selectNum;
	};

	// 맞은 번호에 따른 당첨
	enum ENumber
	{
		FAIL,
		FIRST,
		SECOND,
		THIRD,
		FOURS,
		FIFTH,
		SIXTH
	};

	void CreateLotto()
	{
		SetNum lottoNum[6] = { 0 };
		UserNum userNum[6] = { 0 };
		int bonusNum = 0;
		int result = 0;
		int bonus = 0;

		// randNum에 랜덤숫자
		printf("로또 번호 추첨\n\n");
		for (int i = 0; i < 6; ++i)
		{
			lottoNum[i].m_randNum = (rand() % 45) + 1;
			printf("%d\t", lottoNum[i].m_randNum);
		}

		cout << '\n';
		printf("보너스 번호 추첨 : ");
		// 추가로 보너스 번호
		bonusNum = rand() % 45 + 1;
		printf("%d\n", bonusNum);

		for (int i = 0; i < 6; ++i)
		{
			cin >> userNum[i].m_selectNum;
		}

		// 같은게 있는지 판별
		for (int i = 0; i < 6; ++i)
		{
			for (int j = 0; j < 6; ++j)
			{
				if (userNum[i].m_selectNum == lottoNum[j].m_randNum)
				{
					++result;
					continue;
				}
				else if(userNum[i].m_selectNum == bonusNum)
				{
					bonus = 1;
				}
				
			}
		}
		// 맞춘 개수
		printf("맞춘 개수 : %d\n보너스 번호 : %d\n", result,bonus);
		
		if (bonus == 0)
		{
			switch (result)
			{
			case FAIL:
				printf("낙첨 되었습니다.\n");
				break;
			case FIRST:
				printf("낙첨 되었습니다.\n");
				break;
			case SECOND:
				printf("낙첨 되었습니다.\n");
				break;
			case THIRD:
				printf("5등 당첨 되었습니다.\n");
				break;
			case FOURS:
				printf("4등 당첨 되었습니다.\n");
				break;
			case FIFTH:
				printf("3등 당첨 되었습니다.\n");
				break;
			case SIXTH:
				printf("1등 당첨 되었습니다.\n");
				break;
			default:
				break;
			}
		}
		else
		{
			switch (result)
			{
			case FAIL:
				printf("낙첨 되었습니다.\n");
				break;
			case FIRST:
				printf("낙첨 되었습니다.\n");
				break;
			case SECOND:
				printf("낙첨 되었습니다.\n");
				break;
			case THIRD:
				printf("5등 당첨 되었습니다.\n");
				break;
			case FOURS:
				printf("4등 당첨 되었습니다.\n");
				break;
			case FIFTH:
				printf("2등 당첨 되었습니다.\n");
				break;
			default:
				break;
			}
		}
	}
}



