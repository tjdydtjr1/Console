/*
����2. ���ڿ� ���� (���ڵ� -> ������ Ÿ�Ӿ���)


*** �� ������ �⺻
- ���ڸ� �Է� �޾� �Է¹��� ���ڸ� �Ųٷ� ����Ѵ�.
�� EX) ABCD-> DCBA
***
- �ִ� �״�θ� ��������� ¦���� �ִ� ���ڸ� �Ųٷ� ����Ѵ�.
�� EX) ASDFG -> AFDSG

- �ֹι�ȣ�� �Է��ϰ� -�� ���ŵ� �ֹι�ȣ�� ����Ѵ�.
�� EX) 1234567-12345678 -> 123456712345678

*/
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void main()
{
	char inputChar[100] = { 0 };
	char tempChar[100] = { 0 };
	int count = 0;
	int temp = 0;

	cin >> inputChar;
	while (inputChar[count] != '\0')
	{
		++count;
	}

	// -���ڸ� �Է� �޾� �Է¹��� ���ڸ� �Ųٷ� ����Ѵ�.
	// �ӽ� �迭�� ����
	for (int i = 0; i < count; ++i)
	{
		tempChar[i] = inputChar[i];
	}
	temp = count;
	
	/*for (int i = 0; i < count; ++i)
	{
		inputChar[i] = tempChar[temp - 1];
		--temp;
	}
	cout << inputChar;*/

	// ¦���� ���
	temp = count;
	for (int i = 0; i < count; ++i)
	{
		if (i % 2)
		{
			// ¦���� ���
			if ((temp - i - 1) % 2 == 1)
			{
				inputChar[i] = tempChar[temp - i];
			}
			// Ȧ���� ���
			inputChar[i] = tempChar[temp - i - 1];
		}
		
	}
	cout << inputChar;

	/*�ֹι�ȣ�� �Է��ϰ� - �� ���ŵ� �ֹι�ȣ�� ����Ѵ�.
		�� EX) 1234567 - 12345678 -> 123456712345678*/
	// 48 ~ 57

	//int idx = 0;
	//for (int i = 0; i < count; ++i)
	//{
	//	if (inputChar[i] == '-')
	//	{
	//		continue;
	//	}
	//	tempChar[idx] = inputChar[i];
	//	++idx;
	//}
	//cout << tempChar;

}