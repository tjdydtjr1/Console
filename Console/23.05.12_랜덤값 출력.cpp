//����1.rand()�� Ȱ���� ������ ���
//
//- 900 ����� -> 923������� ������ ���ڸ� �����ÿ�.
//
//9000000000000000000
//
//- �ʼ� : ������
//�� �� 10���� �������� ȭ�鿡 ����ϰ� Ȯ���� ǥ���Ѵ�.
// ��������̽��� �ٲ㺸��
#include <iostream>
#include <time.h>
#include <Windows.h>

using std::cout;
using std::cin;
using std::endl;

void main()
{
	unsigned long long randNum = 1;
	unsigned long long result[10] = { 0 };
	const unsigned long long minNum = 90000000000000000;
	const unsigned long long maxNum = 92300000000000000;

	for (int i = 0; i < 10; ++i)
	{
		srand(time(NULL));
		randNum += rand();

		if (randNum < minNum)
		{
			randNum *= (rand() % 1000 + 1);
			--i;
			continue;
		}
		else if (randNum > maxNum)
		{
			randNum = randNum / 100;
			randNum += rand();
			--i;
			continue;
		}
		result[i] = randNum;
		Sleep(2000);
	}

	for (int i = 0; i < 10; ++i)
	{
		cout << result[i] << endl;
	}
	
}