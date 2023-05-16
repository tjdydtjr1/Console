#include "Bingo.h"
/*
����3. ���� �����

- 0 ~ 24������ ���� �������� ��ġ�ؼ� 5 x 5�� ����Ѵ�.
- ���ڸ� �����ϸ� #, %, & ���(�˾Ƽ�) �ٲ۴�.
- ���� �Ǹ� ���� ī��Ʈ�� �ö󰡰� 5 ���� �Ǹ� ������ ���� �ȴ�.
  �� ��, ������ ����Ǹ� ���α׷��� ����Ǵ°� �ƴ϶� �ϼ��� ���� ���־�� �Ѵ�.

���� ����1. ����
- ���� ��� ����
- ��, ȥ���ϴ� ���� �ƴ� AI�� ������ ���� �÷����ϴ� ���� ����
- �ϼ����� AI ���ؿ� ���� ������.

���� ����. 4�� ���ڿ� + ������
- ��Ʈ�� ����´�.
- �����Ұ� ������ �´�.
*/

namespace BingoGame
{
	void Bingo()
	{
		const int arrMax = 25;
		const int endGame = 5;
		int arrNum[arrMax] = { 0 };
		int resultNum[arrMax] = { 0 };
		int open = 0;
		int gamePlay = 0;

		while (gamePlay < endGame)
		{
			for (int i = 0; i < arrMax; ++i)
			{
				resultNum[i] = i;
			}
			// ������ 
			for (int i = 0; i < arrMax; ++i)
			{
				for (int j = 1; j <= arrMax; ++j)
				{
					printf("%s\t", (arrNum[j-1] == 0) ? "X" : "O");
					if (j % 5 == 0)
					{
						cout << '\n' << '\n';
					}
				}
				cin >> open;
				if (open > 24)
				{
					printf("�ش��ϴ� ������ ���ڰ� �����ϴ�.\n");
					--i;
					system("cls");
					continue;
				}
				system("cls");
				arrNum[open] = 1;

				
				
			}

			++gamePlay;
		}
	}
}