/*
����1. �ζ� ��÷��

- ��÷��ȣ 6�� + ���ʽ� ��ȣ 1��

- 6�� �Է� �޴´�.

- �ʼ� : ġƮ

- ����
- 1�� : ��÷ ��ȣ 6���� ���� �Է��� 6���� ���ڰ� ���� ��
- 2�� : ��÷ ��ȣ 5�� + ���ʽ� ��ȣ 1���� ���� �Է��� ���� 6���� ���� ��
- 3�� : ��÷ ��ȣ 5���� ���� �Է��� 5���� ���ڰ� ���� ��
- 4�� : ��÷ ��ȣ 4���� ���� �Է��� 4���� ���ڰ� ���� ��
- 5�� : ��÷ ��ȣ 3���� ���� �Է��� 3���� ���ڰ� ���� ��

*/
#include "Lotto.h"

namespace Lotto
{
	// 1. ��÷ ��ȣ 6�� + ���ʽ� ��ȣ 1�� = 7�� ��÷ (���� ��÷ 45��ȣ����)
	// 2. ����ڰ� ������ ��ȣ			= 6�� �Է�
	// 3. ��÷ ��ȣ ����� ��ȣ ��		= ������ ���� ��� Ȯ��
	

	// ���� �ζ� ��ȣ ����ü
	struct SetNum
	{
		int m_randNum;
	};

	// ����� �Է¹��� ��ȣ ����ü
	struct UserNum
	{
		int m_selectNum;
	};

	// ���� ��ȣ�� ���� ��÷
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

		// randNum�� ��������
		printf("�ζ� ��ȣ ��÷\n\n");
		for (int i = 0; i < 6; ++i)
		{
			lottoNum[i].m_randNum = (rand() % 45) + 1;
			printf("%d\t", lottoNum[i].m_randNum);
		}

		cout << '\n';
		printf("���ʽ� ��ȣ ��÷ : ");
		// �߰��� ���ʽ� ��ȣ
		bonusNum = rand() % 45 + 1;
		printf("%d\n", bonusNum);

		for (int i = 0; i < 6; ++i)
		{
			cin >> userNum[i].m_selectNum;
		}

		// ������ �ִ��� �Ǻ�
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
		// ���� ����
		printf("���� ���� : %d\n���ʽ� ��ȣ : %d\n", result,bonus);
		
		if (bonus == 0)
		{
			switch (result)
			{
			case FAIL:
				printf("��÷ �Ǿ����ϴ�.\n");
				break;
			case FIRST:
				printf("��÷ �Ǿ����ϴ�.\n");
				break;
			case SECOND:
				printf("��÷ �Ǿ����ϴ�.\n");
				break;
			case THIRD:
				printf("5�� ��÷ �Ǿ����ϴ�.\n");
				break;
			case FOURS:
				printf("4�� ��÷ �Ǿ����ϴ�.\n");
				break;
			case FIFTH:
				printf("3�� ��÷ �Ǿ����ϴ�.\n");
				break;
			case SIXTH:
				printf("1�� ��÷ �Ǿ����ϴ�.\n");
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
				printf("��÷ �Ǿ����ϴ�.\n");
				break;
			case FIRST:
				printf("��÷ �Ǿ����ϴ�.\n");
				break;
			case SECOND:
				printf("��÷ �Ǿ����ϴ�.\n");
				break;
			case THIRD:
				printf("5�� ��÷ �Ǿ����ϴ�.\n");
				break;
			case FOURS:
				printf("4�� ��÷ �Ǿ����ϴ�.\n");
				break;
			case FIFTH:
				printf("2�� ��÷ �Ǿ����ϴ�.\n");
				break;
			default:
				break;
			}
		}
	}
}



