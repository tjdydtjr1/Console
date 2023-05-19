#include "Family.h"

Family::Family()
{
}

Family::~Family()
{
}
void Family::setFamilyOne(void)
{
	m_info[0].name = "서용석";
	m_info[0].age = 30;
	m_info[0].weight = 172;
	m_info[0].height = 73;
	m_info[0].phone = "010-0000-0000";
}

void Family::setFamilytwo(void)
{
	m_info[1].name = "서영석";
	m_info[1].age = 32;
	m_info[1].weight = 170;
	m_info[1].height = 70;
	m_info[1].phone = "010-0000-0000";
}

void Family::printFamily(void)
{
	for (int i = 0; i < 2; ++i)
	{
		cout << "이름 : " << m_info[i].name << endl;
		cout << "나이 : " << m_info[i].age << endl;
		cout << "키 : " << m_info[i].weight << endl;
		cout << "몸무게 : " << m_info[i].height << endl;
		cout << "번호 : " << m_info[i].phone << endl;
		cout << '\n';
	}
}


