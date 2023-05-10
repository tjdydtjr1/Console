#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#pragma region �Լ� + ��/���
/*
=> ������ ��� �����̶�?
- ��/����� ���α׷��� ���ļ� ������ ��ĥ �� �ִ� ������ �ǹ��Ѵ�.
�� ��/����� ������ ���� �ش� ��/����� ������ �� �ִ� ������ �޶�����.

- �ٲ㸻��, ���� �ٸ� ���������� ��ȿ�� ������ �̸��� ���ϴ� ��/�����
������ ��� ���� ��/����� ���� ������� �ǹ�

- C/C++ ���� {}(������) �� ������ ���ؼ� Ư�� ������ ���۰� ���� ��Ÿ���°��� �����ϴ�.

=> C/C++ ����� ��/��� ����

- ����(����)
�� Ư�� ���������� ������ ������ ��/���
 �� EX: ���� / ���� / ��� ��� �Ҹ�

- �۷ι�(����)
�� ���α׷� ��ü���� ������ ������ ��/���
 �� �߸� ����ϸ� �޸� ������ �ݵ�� �߻��ϱ� ������ ���Ǹ� ���Ѵ�.


- ���� ����(����)
�� Ư�� ���������� ������ �����ϴ�.
�� ��, ���� ������ �޸� �ش� ������ ���� �׻� �����Ǵ� ��/���


- ���� �۷ι�(����)
�� ���� ������ �޸� �ش� ��/����� ���� �� ���Ͽ����� ������ ������ ��/���


=> ���� ��� ����
�� ����, ����, ���� ������ ������ LifeCycle(���� �ֱ�) �����غ���.
 �� �޸� ��ȯ ����
  �� Allocate -> Release -> Memory Pool(���� �޸�)
   �� ������ �޸𸮰� Ȯ���� �������� ������ �Ǳ���� ����ϴٰ� ���� �����
		������ �޸� Ǯ�� ��ȯ�Ǵ� ������ �ǹ��Ѵ�.

- ������ �ڽ��� ����� Scope{} ������ �����ǰ� �Ҹ��� �ȴ�.
- ���������� ���� �ֱ� : ���ø����̼��� ���� �ֱ�
- ���������� ���� �ֱ� : �Ϲ������� �Լ��� ���� �ֱ�� �����ϴٰ� �����Ѵ�.


*/
#pragma endregion

void IncreaseValue(int Value);
void DecreaseValue(int Value);

// ���� ����
// �� ���� ������ ����� static
// �� ����� ���� ������ ���� ����ϰڴٴ� �ǹ�
static int g_Value = 0;
const int g_ConstantValue = 0;

void main()
{
	// for���� ���ӵ� i for���� ������ ������� => ������ ����Ŭ
	/*for (int i = 0; i < 5; ++i)
	{
		int k = 10;
		i += 1;
	}*/

	int Value = 0;

	cout << "���� �Է� : ";

	// -> 10
	cin >> Value;

	cout << '\n';

	cout << "== ���� ���� ��Ų �� ==" << endl;

	// 10
	IncreaseValue(Value);
	// 10
	IncreaseValue(Value);

	// 20
	cout << "���� ������ ��: " << g_Value << endl << endl;

	cout << "== ���� ���� ��Ų �� ==" << endl;

	DecreaseValue(Value);
	DecreaseValue(Value);

	cout << "���� ������ �� : " << g_Value << endl << endl;
	// - static Ű������ �������� �Լ� ȣ��� ���� �����ȴ�.


	/*
	C/C++ ���� Ư�� �����ȿ� ���ο� ������ ����� ����� �����Ѵ�.
	�� ���� ��ø�� �����ϴ�.

	����, C/C++ ���� ������ �ߺ����� �ʴ´ٸ� ������ �̸��� ���ϴ�
	��/����� ����°��� �����ϱ� ������ Ư�� ������ �ش� ������ ���ο�
	���� �������� ������ �̸��� ������ ������� �ϴ��� �̴� �����Ϸ�
	���忡�� ������ ó������ �ʴ´�.
	�� ���������� �ش� ����� ����

	��, ���� �������� ���ο� ������ ������� �ϴ��� �ش� ������ �̸��� ������ �̸��� ���ϴ�
	������ �ܺ� �������� ����Ǿ� ������ Ư�� ������ �����ؼ� �ش� ������
	���� �����ϴ� ���� �Ұ��� �ϴ�.

	Why -> ��/����� ���� �켱 ������ ���� ����� �������� ������ ���� �Ǳ� ����

	*/

	// �͸� ���� => 1ȸ�� �������� Ư¡�� ����
	// EX) �� �����ް� ����
	// if���� �Ⱦ��� ���� 
	// ���� �⺻ ���� => 	�ʱ�ȭ -> ����(��Ÿ�� ��) -> ����(�� �ʴ� 60��) -> ����(�׷�����)
	// => ü�̴�(ü��) �۾��� �ʿ� 1���� �˻�

	{	// <- ���ο� ���� ����
		int Value = 0;
		int g_ConstantValue = 0;

		Value = 100;
		g_ConstantValue = 200;

	}	// <- ���ο� ���� ����

	cout << "== ���ο� ������ ����� �� ==" << endl;

	cout << "���� ���� ���� : " << Value << endl;
	
	cout << "���� ���� : " << g_ConstantValue << endl;



}

// ���� ���� ��Ų��.
void IncreaseValue(int Value)
{
	int LocalValue = 0;

	g_Value += Value;
	LocalValue += Value;

	cout << "IncreaseValue �Լ��� ���� ���� : " << LocalValue << endl;

}

// ���� ���� ��Ų��.
void DecreaseValue(int Value)
{
	// �Լ� ���� ����� static
	// �� �ѹ��� �ʱ�ȭ �ǰ� ���������� �޸� �Լ��� ���������� �Ҹ���� �ʴ´�.
	static int LocalValue = 0;

	g_Value -= Value;
	LocalValue -= Value;

	cout << "DecreaseValue �Լ��� ���� ���� : " << LocalValue << endl;

	/*
	���� ��/����� Ư�������� ������ ������ ���� ������ Ư����
	���α׷��� ����ɶ� ���� ������� �ʴ� ���� ������ Ư���� ���
	���ϰ� �ִ�.

	EX) ���� ���� <=> ���� ����

	�׷��� ������ ���� ��/����� �����ϴ� �ش� �ڵ�� �ش� ������ ����Ǵ�
	�� ù �������� ��ȿ�ϴٴ°��� �� �� �ִ�.
	(���⼱ �ʱ�ȭ�� �ѹ��� �̷�����.)

	*/
}