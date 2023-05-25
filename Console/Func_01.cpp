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



	// ����
	for (int i = 0; i < valueList.size(); ++i)
	{
		// ���
	}

	for (auto oIterator = valueList.begin(); oIterator != valueList.end(); ++oIterator)
	{
		// ���
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
		vector<STData>::iterator iter = valueList.begin();
		
		// ó�� ���� ������ ��ȸ
		for (iter; iter != valueList.end(); ++iter)
		{
			//cout << valueList[i].m_nValue << ", ";
			//cout << valueList[i].m_oString << endl;
			//++i;
			cout << "������ ��� : ";
			cout << iter->m_nValue << ", ";
			cout << iter->m_oString << endl;
		}
	}





	// �ٸ� ��ĵ�
	for (int i = 0; i < valueList.size(); ++i)
	{
		// ���

	}

	/*
	=> ��� ������ ���� �ݺ����� ��ȭ

	- C++�� �ᱹ ����̱� ������ �ð��� ������ ���� ������ �ǰ� ũ�� ����
	  ��ȭ�� �����.

	EX)
	�𸮾󿡼� �����ϴ� ��� 
	iterator���� �ݺ����̱⿡ �̰� ���� �߰� �ϱ⿡�� �޸𸮰� �Ʊ���.
	�׷��� �Ʒ��� ���� ����Ѵ�.
	for(STData stData : ValueList)
	{
	}
	�� Range ��� for / �����̳� ��� for

	
	=> C != C++
	- printf �Լ��� %s ���� ���ڴ� C��� ��� ��Ÿ���� ���ڿ��� ��ü�ϱ� ���� �������
	  �Ϲ����� ������δ� C++����� ���ڿ��� ǥ���ϴ� ���� �Ұ����ϴ�.
	- �׷��� ������ C++����� ���ڿ��� c_str() �Լ��� ���ؼ� C��� ��Ÿ���� ���ڿ���
	  ǥ���ϴ� ���� �����ϴ�.


	*/

	// ����ü ���� ����
	for (STData stDATA : valueList)
	{
		printf("����ü ������ : %d, %s\n", stDATA.m_nValue, stDATA.m_oString.c_str());
	}

	// �ݺ��� ���
	for (auto oIterator = valueList.begin(); oIterator != valueList.end(); ++oIterator)
	{
		// ����ü�� ���ڴٰ� ������ ������ ��üȭ ��Ű���� �ʾұ⿡ Ȯ���۾��� �ʿ��ϴ�
		int nIndex = oIterator - valueList.begin();
		printf("%d ��° ����ü ������ : %d, %s\n", nIndex + 1, oIterator->m_nValue, oIterator->m_oString.c_str());
	}
}

void Func_01::practiceVector(void)
{
	vector<int> ValueListA;
	vector<STData> ValueListB;

	for (int i = 0; i < 10; ++i)
	{
		ValueListA.push_back(i + 1);
	}

	for (int i = 0; i < 10; ++i)
	{
		STData stData;
		stData.m_nValue = i + 1;
		stData.m_oString = std::to_string(i * 0.5f);
		ValueListB.push_back(stData);
	}

	printf("===== int ���� =====");
	sampleVector(ValueListA);

	printf("===== STData ���� =====");
	sampleSTVector(ValueListB);

	int nNumStrings = 0;
	std::vector<std::string> oStringList;

	printf("���� �Է� : ");
	scanf_s("%d", &nNumStrings);

	printf("\n ===== ���ڿ� �Է� =====\n");

	for (int i = 0; i < nNumStrings; ++i)
	{
		// MAX_PATH : OS -> Windows �ִ� ���� ���͸� ��� 250�� ���� ���� �ؼ�
		// �� 250 ~ 270 ��Ȳ�� ���� ������ ����
		char szString[MAX_PATH] = "";

		printf("%d ��° ���ڿ� �Է� : ", i + 1);
		//scanf("%s", szString);

		//oStringList.push_back(szString);

	}
	
	cout << "===== ���ڿ� ��� =====" << endl;

	for (auto oIterator = oStringList.begin(); oIterator != oStringList.end(); ++oIterator)
	{
		int nIndex = oIterator - oStringList.begin();
		printf("%d ��° ���ڿ� ��� : %s\n", nIndex + 1, oIterator->c_str());
	}

	/*
	iterator�� �ݵ�� begin() end()�� ����ؾ� �Ѵ�.
	�� ���������� �����̳ʵ��� �ݺ������� ���� ����������� ���п� �������� �ö󰬴�.

	vector ���� ��� ���������� �����͸� �����ϱ� ������ �������� ������ ���ʴ��
	����Ǿ� �ִ� �ݸ�
	�ʰ� ���� �����̳ʴ� �������� ������ �����̱� ������
	������ ������ �� ����.
	
	*/
}
