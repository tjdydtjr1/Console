#include "Example_10.h"


// �ڵ带 �����ϱ� ���� ��ó���� (������ ������)
#define EXAMPLE_TYPE_PRINT			1

// �迭 Ÿ�� (1����, 2���� ���...)
#define ARRAY_TYPE_SIMPLE			1
#define ARRAY_TYPE_MULTI_DIMENSION  2

// ��� ����
#define EXAMPLE_TYPE			EXAMPLE_TYPE_PRINT
#define ARRAY_TYPE				ARRAY_TYPE_MULTI_DIMENSION


namespace EXAMPLE_1
{
#define ARRAY_SIZE			5

	void Example()
	{

#if EXAMPLE_TYPE == EXAMPLE_TYPE_PRINT

		cout << "ȿ������ ������Ʈ ����" << endl;

		cout << '\n';

		int numA = 0;
		int numB = 1;
		int numC = 2;
		int numD = 3;
		int numE = 4;
		int numF = 5;

		cout << numA << endl;
		cout << numB << endl;
		cout << numC << endl;
		cout << numD << endl;
		cout << numE << endl;
		cout << numF << endl;
		
		cout << '\n';

		// 1����
		int num[6];
		// int : �迭�� �̷�� ��� �ڷ���
		// num : �迭�� �̸�
		// [6] : �迭�� ����

		cout << num[0] << endl;
		cout << num[1] << endl;
		cout << num[2] << endl;
		cout << num[3] << endl;
		cout << num[4] << endl;
		cout << num[5] << endl;

		cout << '\n';
		
		// �迭 ���� ����� ���ÿ� �ʱ�ȭ ����
		int anNums[6] = { 0, 1, 2, 3, 4, 5 };

		for (int i = 0; i < 6; ++i)
		{
			cout << "�迭�� �� : " << anNums[i] << endl;
		}

		cout << '\n';


#if ARRAY_TYPE == ARRAY_TYPE_SIMPLE

		/*
		- sizeof �����ڴ� ������ �ڷ��� �Ǵ� ��/����� ����Ʈ ũ�⸦ ����ϴ�
		������ �Ѵ�.

		- ���� sizeof �����ڸ� �迭�� Ȱ���� ��� �迭 ��ü�� ����Ʈ ũ�⸦ ���
		�ϴ� ���� �����ϴ�.

		EX)
		int anValues[5];
		sizeof(anValues);		<- �迭�� ��ü ũ�� (�迭 ũ�� * �迭 ��� ũ�� = 20)
		sizeof(anValues[0]);	<- �迭�� ��� ũ�� (int���� �ش��ϴ� ũ�� = 4)
		
		- C/C++ ��� �迭�� �ʱ�ȭ ���

		int anValuesA[10] = { 0 };
		int anValuesB[] = {1, 2, 3, 4, 5 };

		- �迭�� ũ��� ��������� �迭�� ������ �� �����ִ°��� ����������
		�迭�� �ʱ�ȭ�� �̿��ϸ� �迭�� ũ�⸦ ���� ������� �ʴ��� �����Ϸ���
		���ؼ� �ʱ�ȭ�� ��ﳪ ���� ������ŭ �迭�� ũ�Ⱑ ��������.

		*/

		// ����ó���� ���۵Ǵ� �κ�

		int anValuesA[ARRAY_SIZE] =
		{
			1, 2, 3, 4, 5
		};
		int anValuesB[] =
		{
			1, 2, 3, 4, 5
		};
		
		// �� ���� ����� ū ����� ����� ����. -> �迭�� ������ �ȳѰ� �ϱ� ���� ����
		const int SizeA = sizeof(anValuesA) / sizeof(anValuesA[0]);
		const int SizeB = sizeof(anValuesB) / sizeof(anValuesB[0]);

		// 1. �Ʒ� ����� ȿ���� ��������.
		// 2. �������� ���� �ʴ�.
		// 3. ������ ���� ���å�� ����.
		cout << "== �迭 ��� ��� ==" << endl;
		printf("%d, %d, %d, %d, %d\n", anValuesA[0], anValuesA[1], anValuesA[2], anValuesA[3], anValuesA[4]);

		cout << '\n';


		for (int i = 0; i < SizeA; ++i)
		{
			printf("%d%c ", anValuesA[i], (i <= SizeA - 2) ? ',' : ' ');
		}
		cout << '\n';

		for (int i = 0; i < SizeA; ++i)
		{
			// ���� ������ => ���ǽ� ? ��(����) : ����(����)
			printf("%d%c ", anValuesB[i], (i <= SizeB - 2) ? ',' : ' ');
		}
		cout << '\n';

		
#else			
		int anMatrix[5][5];
		int anDimensionMatrix[5][5][5];

		/*
		sizeof(anMatrix);				=> 5 * (�迭 ��� ũ�� : 5 * 4 ) = 100
		sizeof(anDimensionMatrix);		=> 5 * (5 * (�迭 ��� ũ�� : 5 * 4 ) = 500
		*/
		// �������� 1�������� ó������ => 2���� = 1��������  3������ 1���� 3��

		int anDimensionMatrix[ARRAY_TYPE][ARRAY_SIZE][ARRAY_SIZE] = { 0 };
		const int nPage = sizeof(anDimensionMatrix) / sizeof(anDimensionMatrix[0]);

	/*	for (int i = 0; i < nPage; ++i)
		{
			for(int j = 0; j < nRow; ++j)
			{
				for (int k = 0; k < nCol; ++k)
				{

				}
		}*/
		

#endif			// ARRAY_TYPE == ARRAY_TYPE_SIMPLE

#else			

#endif			// EXAMPLE_TYPE == EXAMPLE_TYPE_PRINT
	}


	
}