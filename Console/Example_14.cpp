#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#pragma region 4�� ���ڿ�
/*
=> C/C++ ����� ���ڿ� ���� �Լ� (char + �Լ�)

- ���ڿ� ���ڿ��� �ٷ� �� �Ϲ������� ����� �� �ִ� ��ɵ��� ����
- 4�� ���ڿ��� �⺻������ ������ �ݵ�� �ؾ� �Ѵ�.

1. strlen
�� ���ڿ��� ���̸� ���


��� ����
2. strcmp
�� ���ڿ��� ���ϴ� ���
�� ���� ��� 0, ���� ���ڿ��� Ŭ ��� ���, ���� ���ڿ��� ���� ��� ����

3. strcpy
�� ���ڿ��� �����ϴ� ���

4. strcat
�� ���ڿ��� ��ġ�� ���

5. strtok
�� ���ڿ� �ڸ���

*/
#pragma endregion

void LinePrint()
{
	cout << "================================================" << endl;
}



void main()
{
	cout << "4�� ���ڿ�" << endl;
	LinePrint();

	// 1. strlen() : ���ڿ� ����
	// �� EX) strlen("���ڿ�");

	char strA[100] = "abcdef";
	int lenA = strlen(strA);

	cout << strlen(strA) << endl;
	cout << "���ڿ� ����" << lenA << endl;

	LinePrint();

	// 2. strcmp(���ڿ�, ���ڿ�) : ���ڿ� ��
	/*
	int strcmp(char* str1, char* str2)
	{
		if(�� ���ڰ� ������?)
		{
			return 0;
		}
		else
		{
			if(�չ��ڰ� �� ū��?)
			{
				return -1;
			}
			else
			{
				return 1;
			}

		}
		return 0;
	}

	stringA < stringB = 0 ���� �۴�
	stringA == stringB = 0
	stringA > stringB = 0 ���� �۴�.

	*/

	//char strB[10] = "abc";
	//char strC[10] = "abc";
	//char strD[10] = "abb";

	//int lenB = strcmp(strB, strC);
	//int lenC = strcmp(strB, strD);

	//cout << "���ڿ� �� : " << lenB << endl;
	//cout << "���ڿ� �� : " << lenC << endl;

	//LinePrint();

	//// 3. strcpy(���ڿ�, ���ڿ�) : ���ڿ� ����

	//char strE[10] = "ABCDEFG";
	//char strF[10] = "HIJK";

	//cout << "���ڿ� ���� �� : " << strF << endl;

	//strcpy(strF, strE);

	//// s or ex ���� �ֵ��� extension Ȯ���
	////printf_s()
	////	strcpy_s( );
	////		strncpy();
	////		strncpy_s( );

	//// ���� ���� : �տ� �ִ� ���ڿ��� ũ�Ⱑ ������ ���ڿ� ���� 
	////			   �۰� �Ǹ� ������.
	//cout << "���ڿ� ���� �� : " << strF << endl;

	//LinePrint();

	//// 4. strcat(���ڿ�, ���ڿ�) : ���ڿ� ����

	//char strG[100] = "���� ������ ";
	//char strH[100] = "���� ���������.";

	//cout << "���ڿ� ���� �� : " << strG << endl;
	//strcat(strG, strH);

	//cout << "���ڿ� ���� �� : " << strG << endl;

	LinePrint();

	// 5. strtok : ���ڿ� �ڸ��� 
	// �� 4�� ���ڿ��� �ƴ����� ���� ����¿� ���� ���δ�.
	// �� �����찡 �����ϴ� �Լ� (txt, ini)
	// �� �ڸ� ���� EX: _ / \ ���..
	// �� �������� ��õ: ,�� ��������

	char strI[10] = "ABCD EFGH";
	
	strtok(strI, " ");

	cout << strI << endl; 

	// ����"��"
	char strJ[100] = "���ڿ�";
	const char* strK = "�̷��Ե� ����� �����ϳ�?";	// char* strK
	std::string strZ = "�̰͵� �ȴ�.";
	const char* strW = "���� �� ������?";
}

