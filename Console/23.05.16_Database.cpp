/*
����2. ����ü�� ����ؼ� ������ ���̽� �񽺹����Ѱ� ����� ����

- ���� Ÿ��Ʋ��, ����, ����, ����, Ư�̻��� ���.. �ʿ��ϸ� �߰��Ѵ�.

- �迭�� ����ϰ� ��±���.

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
			printf("%d ��° ���� �Է� : ", i + 1);
			cin >> game[i].m_chGameName;
			printf("\n���� ���� : ");
			cin >> game[i].m_nScore;
			printf("���� ���� : ");
			cin >> game[i].m_nPrice;
			cout << '\n';
			printf("Ư�̻��� : ");
			cin >> game[i].m_chEtc[100];
			cout << '\n';

		}
		
		for (int i = 0; i < 5; ++i)
		{
			printf("%d ��° ���� ����", i + 1);
			cout << "���� �̸� : " << game[i].m_chGameName << endl;;
			cout << "���� ���� : " << game[i].m_nScore << endl;
			cout << "���� ���� : " << game[i].m_nPrice << endl;
			cout << "Ư�� ���� : " << game[i].m_chEtc << endl;
			cout << '\n' << '\n';

		}
	}
}