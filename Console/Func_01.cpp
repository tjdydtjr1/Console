#include "Func_01.h"

void Func_01::sampleVector(std::vector<int> valueList)
{
	// �����Ͱ� ���ٸ� return
	if (valueList.empty())
	{
		printf("�����Ͱ� ����\n");
		return;
	}
	else
	{
		// �ݺ��� ���� �� ó���� ����Ŵ
		vector<int>::iterator iterator = valueList.begin();

		// ó�� ���� ������ ��ȸ
		for (iterator; iterator != valueList.end(); ++iterator)
		{
			cout << "������ ��� : " << *iterator << endl;
		}
	}
}

void Func_01::sampleSTVector(std::vector<STData> valueList)
{
	// �����Ͱ� ���ٸ� return
	if (valueList.empty())
	{
		printf("�����Ͱ� ����\n");
		return;
	}
	else
	{
		// �ݺ��� ���� �� ó���� ����Ŵ
		vector<STData>::iterator iterator = valueList.begin();
		
		// ó�� ���� ������ ��ȸ
		for (iterator; iterator != valueList.end(); ++iterator)
		{

		}
	}
}
