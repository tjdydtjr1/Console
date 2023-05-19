#pragma once

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

struct InfoData
{
	const char* name;
	int age;
	const char* phone;
	int weight;
	int height;
};

class Family
{
private:
	InfoData m_info[2];

public:
	void setFamilyOne(void);
	void setFamilytwo(void);
	void printFamily(void);

	Family();
	~Family();
};

