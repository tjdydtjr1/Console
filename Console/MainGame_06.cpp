#include "MainGame_06.h"

MainGame_06::MainGame_06()
{
	/*
	=> STL 맵에서 자주 사용하는 기능

	- STL에서는 컨테이너에 따라 약간의 기능적 차이만 있을 뿐 동일한 이름의 멤버 함수가
	  다수 존재한다.

	- begin()
	- end()
	- clear()
	- empty()
	- erase()
	- insert()
	- size()
   *- find()
	  ㄴ 인자로 들어간 값을 찾는다.

	*/
	
	// 상속등을 통해 넣어줘야할 시
	_mData.insert(std::pair<string, int>("프로그래밍", 50));
	_mData.insert(std::pair<string, int>("공부가", 50));
	_mData.insert(std::pair<string, int>("제일", 50));
	_mData.insert(std::pair<string, int>("쉬워요", 50));

	// 직접적으로 데이터를 넣을 시
	_mData.insert(std::make_pair("학생A", 10));
	_mData.insert(std::make_pair("학생B", 20));
	_mData.insert(std::make_pair("학생C", 30));
	_mData.insert(std::make_pair("학생D", 40));
	_mData.insert(std::make_pair("학생E", 50));

	// 이런 방식도 된다.
	std::pair<string, int> pr1("학생6", 100);
	_mData.insert(pr1);
	
	// map에서 대괄호 연산을 쓰면 안된다.
	// ㄴ [] 사용시 insert()까지 같이 실행
	// iterator가 아래의 _mData[]를 터지지않도록 넣어주고 실행한다.
	/*if (_mData["재능칠드런"])
	{
		cout << "있다" << endl;
	}
	else
	{
		cout << "없다" << endl;
	}*/

	// 맵에서 찾을 때는 아래와 같이 find() 사용하고 끝을 명시를 해줘야한다.
	if (_mData.find("KGA") != _mData.end())
	{
		cout << "있다" << endl;
	}
	else
	{
		cout << "없다" << endl;
	}

	_mData.erase("학생C");

	for (_miData = _mData.begin(); _miData != _mData.end(); ++_miData)
	{
		cout << _miData->first << ", " << _miData->second << endl;
	}
	cout << endl;

	cout << endl;

	string name;

	cout << "누구를 찾고 있는건지..?" << endl;

	while (cin >> name)
	{
		if (_mData.find(name) != _mData.end())
		{
			cout << name << " 의 나이는" << "[" << _mData[name] << "]" << endl << endl;
		}
		else
		{
			cout << "그런 사람은 울반에 없다..?" << endl << endl;
			break;
		}
	}
	cout << '\n';

	// 한줄 조사. decltype
	// 아래 맵의 의도를 파악해 온다.
	map<std::string, int> ValueList;
	
	for (int i = 0; i < 10; ++i)
	{
		char szKey[MAX_PATH] = "";

		// szKey -> key_1... 넣는다.
		sprintf_s(szKey, "Key_%d", i + 1);

		// szKey(문자열), 정수 = pair로 묶어서 넣는다.
		ValueList.insert(std::make_pair(szKey, i + 1));
		// decltype타입 명시(ValueList의 타입으로):: 문자열, 정수를 넣는다.
		ValueList.insert(decltype(ValueList)::value_type(szKey, i + 1));
		// map<문자열, 정수>의 타입으로 문자열, 정수를 넣는다.
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


