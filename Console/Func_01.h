#pragma once
#include <iostream>
#include <vector>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

#define MAX_PATH 250

struct STData
{
	// ���ڿ� ���ڿ� ��ȯ������ ����
	// c_str()
	int m_nValue;
	std::string m_oString;
};

class Func_01
{
public:
	void sampleVector(std::vector<int> valueList);
	void sampleSTVector(std::vector<STData> valueList);
	void practiceVector(void);
};

