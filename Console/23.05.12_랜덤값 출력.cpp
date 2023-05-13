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

// ��������̽� ���
#include <random>

using std::cout;
using std::cin;
using std::endl;

void main()
{
	// �������� ������
	unsigned long long randNum = 1;

	// �������� ���� ��� ����
	unsigned long long result[10] = { 0 };

	// �ּ� ����
	const unsigned long long minNum = 90000000000000000;
	
	// �ִ� ����
	const unsigned long long maxNum = 92300000000000000;

	// ��հ�
	unsigned long long avr = maxNum - minNum;

	// �ӽ� �� ����
	unsigned long long temp[10] = { 0 };

	// rand() ���
	/*for (int i = 0; i < 10; ++i)
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
		cout << result[i] << "Ȯ�� : " << 1 / (double)avr << endl;
	}
	*/


	// random_device ���
	std::random_device randDevice;

	std::mt19937_64 rand(randDevice());


	for (int i = 0; i < 10; ++i)
	{
		std::uniform_int_distribution<unsigned long long> range(minNum, maxNum);
		temp[i] = range(rand);
	}

	for (int i = 0; i < 10; ++i)
	{
		cout << temp[i] << "\tȮ�� : " << 1 / (double)avr << endl;
	}

}