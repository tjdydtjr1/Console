#include "MainGame_06.h"

MainGame_06::MainGame_06()
{
	/*
	=> STL �ʿ��� ���� ����ϴ� ���

	- STL������ �����̳ʿ� ���� �ణ�� ����� ���̸� ���� �� ������ �̸��� ��� �Լ���
	  �ټ� �����Ѵ�.

	- begin()
	- end()
	- clear()
	- empty()
	- erase()
	- insert()
	- size()
   *- find()
	  �� ���ڷ� �� ���� ã�´�.

	*/
	
	// ��ӵ��� ���� �־������ ��
	_mData.insert(std::pair<string, int>("���α׷���", 50));
	_mData.insert(std::pair<string, int>("���ΰ�", 50));
	_mData.insert(std::pair<string, int>("����", 50));
	_mData.insert(std::pair<string, int>("������", 50));

	// ���������� �����͸� ���� ��
	_mData.insert(std::make_pair("�л�A", 10));
	_mData.insert(std::make_pair("�л�B", 20));
	_mData.insert(std::make_pair("�л�C", 30));
	_mData.insert(std::make_pair("�л�D", 40));
	_mData.insert(std::make_pair("�л�E", 50));

	// �̷� ��ĵ� �ȴ�.
	std::pair<string, int> pr1("�л�6", 100);
	_mData.insert(pr1);
	
	// map���� ���ȣ ������ ���� �ȵȴ�.
	// �� [] ���� insert()���� ���� ����
	// iterator�� �Ʒ��� _mData[]�� �������ʵ��� �־��ְ� �����Ѵ�.
	/*if (_mData["���ĥ�己"])
	{
		cout << "�ִ�" << endl;
	}
	else
	{
		cout << "����" << endl;
	}*/

	// �ʿ��� ã�� ���� �Ʒ��� ���� find() ����ϰ� ���� ��ø� ������Ѵ�.
	if (_mData.find("KGA") != _mData.end())
	{
		cout << "�ִ�" << endl;
	}
	else
	{
		cout << "����" << endl;
	}

	_mData.erase("�л�C");

	for (_miData = _mData.begin(); _miData != _mData.end(); ++_miData)
	{
		cout << _miData->first << ", " << _miData->second << endl;
	}
	cout << endl;

	cout << endl;

	string name;

	cout << "������ ã�� �ִ°���..?" << endl;

	while (cin >> name)
	{
		if (_mData.find(name) != _mData.end())
		{
			cout << name << " �� ���̴�" << "[" << _mData[name] << "]" << endl << endl;
		}
		else
		{
			cout << "�׷� ����� ��ݿ� ����..?" << endl << endl;
			break;
		}
	}
	cout << '\n';

	// ���� ����. decltype
	// �Ʒ� ���� �ǵ��� �ľ��� �´�.
	map<std::string, int> ValueList;
	
	for (int i = 0; i < 10; ++i)
	{
		char szKey[MAX_PATH] = "";

		// szKey -> key_1... �ִ´�.
		sprintf_s(szKey, "Key_%d", i + 1);

		// szKey(���ڿ�), ���� = pair�� ��� �ִ´�.
		ValueList.insert(std::make_pair(szKey, i + 1));
		// decltypeŸ�� ���(ValueList�� Ÿ������):: ���ڿ�, ������ �ִ´�.
		ValueList.insert(decltype(ValueList)::value_type(szKey, i + 1));
		// map<���ڿ�, ����>�� Ÿ������ ���ڿ�, ������ �ִ´�.
		ValueList.insert(std::map<std::string, int>::value_type(szKey, i + 1));
		
	} 

	for (test = ValueList.begin(); test != ValueList.end(); ++test)
	{
		cout << test->first << ", " << test->second << endl;
	}

	//
}


MainGame_06::~MainGame_06()
{
}

std::pair<std::pair<int, int>, std::pair<int, int>> MainGame_06::getMinMaxValue(std::vector<int> a_oValueList)
{
	return std::pair<std::pair<int, int>, std::pair<int, int>>();
}

void MainGame_06::printMap(std::map<std::string, int> a_oValueList)
{
}


