#pragma once
#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;


struct STData
{
	// c_string 문자와 문자열 변환에러시 참고
	int m_nValue;
	std::string m_oString;
};

class Func_01
{
public:
	void sampleVector(std::vector<int> valueList);
	void sampleSTVector(std::vector<STData> valueList);
};

