#include "MainGame_07.h"


/*
=> ���ø� ��Ģ
- ���ø��� �⺻������ ��ũ ������ �ٹ߷� ����ϴ� ���̱� ������ ��Ģ�� �ݵ�� �����Ѵ�.

1. ���� �ڷ����� ����ؾ� �Ѵ�.
cout << riskValue(2.932323, 2.3f) << endl; => X

2. ����/���ڿ��� ����� ���� ���� ��������.
cout << addValue("�̰͵�", "�ű��ϳ�?") << endl; => X
�� ���ڿ��� �迭 = ������ �̱� ������ �����ͳ����� ������ �ȵȴ�.


*/

MainGame_07::MainGame_07()
{


	//outPutValue();
	//cout << endl;
	//
	//outPutValue(50);
	//cout << endl;
	//
	//outPutFunc("���ø� ���μ���");
	//cout << endl;

	//outPutFunc(2.5, 3.99);
	//cout << endl;

	//cout << maxValue(2.44, 5.55) << endl;
	//cout << endl;

	//cout << addValue(4, 56) << endl;
	//cout << endl;
	//
	//cout << addValue(3.14, 56.86) << endl;
	//cout << endl;

	int nLhs = 10;
	int nRhs = 20;

	
	Swap<int>(nLhs, nRhs);
	printf("���� : %d, %d\n", nLhs, nRhs);

	float fLhs = 10.0f;
	float fRhs = 20.0f;

	Swap<float>(fLhs, fRhs);
	printf("�Ǽ� : %f, %f\n", fLhs, fRhs);

	std::string oLhs = "��Ȳ";
	std::string oRhs = "������";

	// swap / Swap -> �Ʒ� �ڵ� ȣ�� ���� ������ ����
	Swap<std::string>(oLhs, oRhs);
	printf("���ڿ� : %s, %s\n", oLhs.c_str(), oRhs.c_str());

	// - �� ���� ���� �Լ� ����
	// �� 1. ���ø� ����
	// �� 2. ������ ȣ�� �Ұ�
	// �� 3. �� ���� �Է¹޾� ���� �Ǵ� ����� �����ִ� ��� (��Ÿ��)
}

MainGame_07::~MainGame_07()
{
	// ! Do Nothing
}



//template<typename T>
//inline void MainGame_07::outPutFunc(T num)
//{
//	cout << "���� �Ϲ� �Լ��� ����� �ʴ�." << endl;
//	cout << num << endl;
//}
//
//template<typename T1, typename T2>
//inline void MainGame_07::outPutFunc(T1 numL, T2 numR)
//{
//	//cout << "�� : " << num << endl;
//	//cout << numL << ", " << numR < endl;
//}
//// �Լ� ���ø��� ���Ǵ� �Լ� ������ ���� ���� ��ð� �Ǿ�� �Ѵ�.
//// �� �̰� ���ϸ� ��ũ ����
//
//
//template<typename T3>
//inline T3 MainGame_07::maxValue(T3 numL, T3 numR)
//{
//	cout << "T3 �Լ�" << endl;
//
//	return (numL > numR) ? numL : numR;
//}
//
//template<typename T4>
//inline T4 MainGame_07::addValue(T4 numL, T4 numR)
//{
//	cout << "T4 �Լ�" << endl;
//	return numL + numR;
//}
//
//template<typename T5>
//inline T5 MainGame_07::riskValue(T5 numL, T5 numR)
//{
//	cout << "T5 �Լ�" << endl;
//	return numL + numR;
//}
//
