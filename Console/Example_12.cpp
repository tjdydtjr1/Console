#include "Example_12.h"

// ������ ������
#define EXAMPLE_TYPE_PRINT				1
// ����
#define EXAMPLE_TYPE_TERNARY_OPERATOR	2
// ���ڿ�
#define EXAMPLE_TYPE_STRING				3

#define EXAMPLE_TYPE					EXAMPLE_TYPE_STRING

namespace EXAMPLE_2
{
	void Example()
	{

	}
}

#if EXAMPLE_TYPE == EXAMPLE_TYPE_PRINT

	//! Do Nothing

#elif EXAMPLE_TYPE == EXAMPLE_TYPE_TERNARY_OPERATOR

	cout << "���� ������";
	int numA, numB;
	cout << "���� �Է�: ";
	cin >> numA;

	numB = (numA > 0) ? numA : numA * (-1);

	cout << "�Է��� ���� �� : " << numB << endl;
	printf("\n");

	int numberA;
	int numberB = 100;
	int result;

	cout << "���� �Է� : ";
	cin >>numberA;

	result = numberA < 10 ? numberA : numberB;

	cout << "���� ������ ����� : " << result << endl;


#else
	
	char monnja = 'A';
	int numA = 20;
	float numB = 3.2f;
	bool numC = true;
	
	std::cout << moonja << std::endl;

	std::cout << sizeof(moonja) << " : ����Ʈ " << std::endl;
	std::cout << sizeof(numA) << " : ����Ʈ " << std::endl;
	std::cout << sizeof(numB) << " : ����Ʈ " << std::endl;
	std::cout << sizeof(numC) << " : ����Ʈ " << std::endl;

	/*
	=> ���Ǹ� ��￩�� �� ���ڿ�

	- C/C++�� Ÿ�Կ� ������ ���
	�� �⺻������ NULL ����

	* ���� ����
	- ���ڿ� ���ڿ��� �������� ����
	�� ���ڴ� NULL���� �߰� �ȵȴ�.
	�� ���ڿ��� NULL ���ڰ� �߰� �ȴ�.
	=> ó���� ���� ���������ϴµ� ���ڿ��� �������� �ι��ڸ� �־ ���� �� ������.
	C++������ NULL = 0 ���� ���� �ȴ�.
	�޸� �ּҸ� 0���� ��´�.

	=> NULL

	- iostream�� ���� ��.

	- NULL�� 0 �ּҸ� �ǹ��ϸ� �׷��⿡ ���� ��� ������ ������ �ʱ�ȭ �Ҷ���
	����� �� �ִ�.

	EX)
	char* p = NULL		==		char* p = 0;

	*int n = NULL		!=		int n = 0;

	- ���ڴ� p��� ������ �ּҰ��� 0�� �ִ°��̰� ���ڴ� ���� 0�� n��
	�ְڴٶ�� �ǹ��̴�.



	*/

	printf("\n");

	// ����
	char strA = 'A';
	cout << "strA = " << strA << endl;

	// ���ڿ�
	char strB[4] = "abc";
	cout << "strB = " << strB << endl;
	
	/*
	- C/C++ ����� ���ڿ� ǥ�� ���
	�� C/C++ ���� "" ������ ���ؼ� ���ڿ��� ǥ���ϴ� ���� �����ϸ�
	�� �� char�� �迭�� �̿��Ѵ�.
	�� ����, ���ڿ� ����� ���� �ʱ�ȭ�� ������ ��� �� ���ڸ�
	��������� ������� �ʾƵ� �ȴ�.

	char arr1[] = {'h','i','~'};
	�� ���ڸ� ����� �迭 -> ���ڿ��̶�� �� �� ����.

	char arr2[] = {'h','i','~', '\0'};
	�� ���ڿ� �迭

	- ���� �迭�� ���ڿ��� �������� \NULL(\0)�� ���� ����

	- ���ڿ� ������ �������� char�� �迭�� ������ ��� 
	\NULL�� ���ڿ� �������� �ڵ����� ���Եȴ�.

	- �� ������ �ƽ�Ű �ڵ� ���� 0�̴�.
	�� �׸��� �̸� ������ ���·� ����� ��� �ƹ��� ����� �߻����� �ʴ´�.

	* C/C++ ������ ���ڿ��� �Ǳ� ���ؼ� �ݵ�� �� ���ڸ� ǥ���ؾ� �Ѵ�.
	�� ����? : ���� ��Ÿ���� ����

	*/

	char strC[20] = "i like game.!";

	cout << strC << endl;

	strC[10] = '\0';

	cout << strC < , endl;

	strC[2] = '\0';

	cout << strC << endl;

#endif





/*
���� ����. ����� ���� �ڷ���

- ��Ʈ�� ���� �´�.

- �����Ұ� ������ �´�.

*/