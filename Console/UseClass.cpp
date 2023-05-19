#include "UseClass.h"

UseClass1::UseClass1()
{
	cout << "UseClass1 Class 1번" << endl;
}

UseClass1::~UseClass1()
{
}

UseClass2::UseClass2()
{
	cout << "UseClass2 Class 2번" << endl;
}

UseClass2::~UseClass2()
{
}

UseClass3::UseClass3()
{
	cout << "UseClass3 Class 3번" << endl;
}

UseClass3::~UseClass3()
{
}

UseClass4::UseClass4()
{
	cout << "UseClass4 Class 4번" << endl;
}

UseClass4::~UseClass4()
{
}

UseClass5::UseClass5()
{
	cout << "UseClass5 Class 5번" << endl;
}

UseClass5::~UseClass5()
{

}

UseClass::UseClass()
{
	UseClass1 class1;
	UseClass2 class2;
	UseClass3 class3;
	UseClass4 class4;
	UseClass5 class5;
}

UseClass::~UseClass()
{
}
