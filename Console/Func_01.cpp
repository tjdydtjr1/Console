#include "Func_01.h"

void Func_01::sampleVector(std::vector<int> valueList)
{

}

void Func_01::sampleSTVector(std::vector<STData> valueList)
{
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
