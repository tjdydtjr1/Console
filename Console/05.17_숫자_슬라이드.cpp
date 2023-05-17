#include "slide.h"

namespace Slide
{
	// Ű�Է�
	enum KeyInput
	{
		LEFT = 1,
		DOWN,
		RIGHT,
		UP = 5
	};

	// ������ ����
	const int arrMax = 20;
	int slide[arrMax] = { 0 };
	int tempArr[arrMax] = { 0 };
	KeyInput Key = UP;
	int randNum = 0;
	int temp = 0;
	int input = 0;


	void Init()
	{
		// �ʱⰪ ���� ����
		for (int i = 0; i < (arrMax - 1); ++i)
		{
			// 1 ~ 19������ �� ����
			temp = rand() % 19 + 1;

			// ���� �ڸ� �� �ְ� �Ǹ� �ٽ� ����
			if (tempArr[temp] == 1)
			{
				--i;
				continue;
			}
			// ���� �ڸ� 1�� ����
			tempArr[temp] = 1;

			// ������ �迭�� ����
			slide[i] = temp;
		}
		// ���� �ϴ��� �÷��̾� = 20 ����
		slide[19] = 20;
		tempArr[19] = 20;
	}

	void NumSlide()
	{
/*
����1. ���� �����̵�

- ������ : 5 x 4
- ������ġ�� ���� �ϴ� (����)

- ġƮ �ʼ�
�� ġƮŰ�� ������ �ϳ��� ���ڸ� �����ϰ� ������ ���ڴ� ���ĵȴ�.
�� ����ڰ� ������ ������ ���߸鼭 ���α׷��� ������ OK

- �Ϲ������� ���� �꿡 ����� ����ó�� �ؿ´�.
*/
		

		
		while(true)
		{
			// �ʱ�ȭ
			Init();

			while (true)
			{
				// ���� �����̵� ����
				printf("================================================");
				printf("���� �����̵� ����\n\n");
				for (int i = 1; i <= arrMax; ++i)
				{
					//printf("%d\t", slide[i - 1]);
					if (slide[i - 1] != 20)
					{
						printf("%d\t", slide[i - 1]);
					}
					else if (slide[i - 1] == 20)
					{
						printf("%s\t", "��");
					}

					if (i % 5 == 0)
					{
						cout << '\n' << '\n';
					}
				}
				cout << '\n' << '\n';
				printf("================================================\n");

				printf("LEFT = 1, DOWN = 2, RIGHT = 3, UP = 5\n");
				cin >> input;
				switch (input)
				{
				case UP:
				{
					for (int i = 0; i < arrMax; ++i)
					{
						if (slide[i] == 20)
						{
							if (i != 0 && i != 1 && i != 2 && i != 3 && i != 4)
							{
								temp = slide[i - 5];
								slide[i - 5] = slide[i];
								slide[i] = temp;
							}
							else
							{
								printf("�� �̻� �� �� �����ϴ�.\n");
								Sleep(1000);
								break;
							}
						}
					}
				}
				break;
				case DOWN:
				{
					for (int i = 0; i < arrMax; ++i)
					{
						if (slide[i] == 20)
						{
							if (i != 15 && i != 16 && i != 17 && i != 18 && i != 19)
							{
								temp = slide[i + 5];
								slide[i + 5] = slide[i];
								slide[i] = temp;
							}
							else
							{
								printf("�� �̻� �� �� �����ϴ�.\n");
								Sleep(1000);
								break;
							}
						}
					}
				}
				break;
				case LEFT:
				{
					for (int i = 0; i < arrMax; ++i)
					{
						if (slide[i] == 20)
						{
							if (i != 0 && i != 5 && i != 10 && i != 15 )
							{
								temp = slide[i - 1];
								slide[i - 1] = slide[i];
								slide[i] = temp;	
							}
							else
							{
								printf("�� �̻� �� �� �����ϴ�.\n");
								Sleep(1000);
								break;
							}
						}
					}
				}
				break;
				case RIGHT:
				{
					for (int i = 0; i < arrMax; ++i)
					{
						if (slide[i] == 20)
						{
							if (i != 4 && i != 9 && i != 14 && i != 19)
							{
								temp = slide[i + 1];
								slide[i + 1] = slide[i];
								slide[i] = temp;
							}
							else
							{
								printf("�� �̻� �� �� �����ϴ�.\n");
								Sleep(1000);
								break;
							}
						}
					}
				}
				break;
				default:
					printf("�Է��� �߸��Ǿ����ϴ�.");
					break;
				}
				temp = 0;
				system("cls");
			}
		}
		

	}
}