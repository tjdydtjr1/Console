/*
과제2. 구조체를 사용해서 데이터 베이스 비스무리한것 만들어 보기

- 게임 타이틀명, 평점, 가격, 점수, 특이사항 등등.. 필요하면 추가한다.

- 배열을 사용하고 출력까지.

*/
#include "Database.h"

namespace DB
{
	struct Evaluate
	{
		char m_chGameName[10];
		int m_nScore;
		int m_nPrice;
		char m_chEtc[100];
	};

	void DataBase()
	{
		Evaluate game[5] = { 0 };

		for (int i = 0; i < 5; ++i)
		{
			printf("%d 번째 게임 입력 : ", i + 1);
			cin >> game[i].m_chGameName;
			printf("\n게임 점수 : ");
			cin >> game[i].m_nScore;
			printf("게임 가격 : ");
			cin >> game[i].m_nPrice;
			cout << '\n';
			printf("특이사항 : ");
			cin >> game[i].m_chEtc[100];
			cout << '\n';

		}
		
		for (int i = 0; i < 5; ++i)
		{
			printf("%d 번째 게임 정보", i + 1);
			cout << "게임 이름 : " << game[i].m_chGameName << endl;;
			cout << "게임 평점 : " << game[i].m_nScore << endl;
			cout << "게임 가격 : " << game[i].m_nPrice << endl;
			cout << "특이 사항 : " << game[i].m_chEtc << endl;
			cout << '\n' << '\n';

		}
	}
}