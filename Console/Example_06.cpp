#include <iostream>
#include <windows.h>
// STL -> string
// �� �޸� ����̳� ���ڿ��� �ٷ� �� �ִ� �Լ����� ����
#include <string>

// wchar -> �����ڵ� ���ڿ��� �ٷ� �� ����� �Ѵ�.
#include <wchar.h>


using std::cout;
using std::cin;
using std::endl;

#pragma region �Լ�
/*
=> �Լ� (���ÿ� �޸𸮰� �ö�)

- ����� ���Ǳ� (������ ������ ����.)

-> ����ϴ� ����

- �ߺ� ���� ����
- ���� ������
- ������ ���
- ����

- ���� ���
��ȯ �ڷ��� �Լ��̸� (�Է� �ڷ���(�μ�(��))
{ <- �Լ� ����

	�Լ� ����

} <- �Լ� ��

- �Լ� �̸� : �Լ��� �̸� (�Լ��� ȣ���Ҷ� ���)
- �μ�(����) : �Լ��� �ؾ� �� ���� ���λ����� �����ϸ� �Լ��� �۾��Ÿ�
- ��ȯ �ڷ��� : �Լ��� ����(��ȯ)�ϴ� ���� ������ ���̸� �Լ��� �۾� ���
- �Լ� ���� : { } �ȿ� �Լ��� ���� �ڵ尡 �����Ѵ�.

=> �Լ��� �̸��� �⺻������ �����ؾ� �Ѵ�.
�� ������ �̸��� �Լ��� N�� �̻� �����ϴ°��� �Ұ����ϴ�.

=> void�� �Լ���?

- ����(��ȯ) �� ���� ���� �Լ�
- �Լ��� �Է� �Ǵ� ����� ���� ��� void Ű���带 ���ؼ� �ش� ��/�����
���ٶ�� ���� ����Ѵ�.

-> �츮�� �˰� �𸣰� ����� �Լ���
�� rand() : �������� �̴� �Լ�
�� Sleep(1000) : 1�ʰ� ���߰� ���ִ� �Լ� 

* �Լ� ������ �⺻������ �����Լ� ���ʿ� �Ѵ�.

-> C / C++ ����� �Լ� ������ �ʿ��� ����

- C/C++ ����� �����Ϸ��� �⺻������ ������ ������ ������ �Ʒ��� �ؼ��Ѵ�.

- �� �� �����Ϸ��� �̹� ����ģ ���ο��� ���ԵǾ� ���� ���� �Լ��� ȣ���� ���
�����Ϸ��� �̿� ���� ������ �𸣱� ������ ������ �߻��Ѵ�.

- �׷��� ������ �Լ��� ������ ���ؼ� �����Ϸ����� �ش� �Լ��� ���� ��򰡿���
�����Ѵٴ� ���θ� �˷���� �Ѵ�.

- ��, �Լ��� ����� ���ǰ� �ݵ�� ������ ���Ͽ� �������� �ʾƵ� �ȴٴ°��� �ǹ�

- �Լ��� ������ �ߺ����� ����ϴ°��� ���������� �Լ��� ���Ǵ� �ݵ�� �����ؾ� �Ѵ�.


*/

#pragma endregion

// string ���ڿ�
using std::string;

// �Լ� ����
void OutputValueA();

// int���� ������ ��ȯ x
void OutputValueB(int numA);
void OutputValueC(int numA, int numB);

// ���ڿ�
void OutputString(string str);
string GetStringFunc(string strA, string strB);
int CheckingString(string strA, string strB);

// ��Ģ����
// ���ϱ�
int GetAddValue(int numA, int numB);

// ����
int GetSubValue(int numA, int numB);

// ����
int GetMultipleValue(int numA, int numB);

// ������ : ���������� �ݺ����� ���� ������ ����Ǳ⿡ �����ս��� ���� ��� �Դ´�.
int GetDivideValue(int numA, int numB);

// ������ ������ �Լ��� �̸��� �⺻������ �ߺ��� ���� �ʾƾ� �Ѵ�.
// �� �̰� ���� �ذ��� �� ������?

// ========================================================
void TextColor(int font, int backGround);
void DotArtA();
// =========================================================
namespace NS_FUNC_A
{
	void Sample()
	{
		cout << "���� �ٷ� Sample �Լ�" << endl;
	}
}

namespace NS_FUNC_B
{
	void Sample()
	{
		cout << "���� �ٷ� Sample �Լ�" << endl;
	}
}

void main()
{
	//COORD bufferSize = { 100, 1000 }; // ����, ����
	//SetConsoleScreenBufferSize(GetStdHandle(STD_OUTPUT_HANDLE), bufferSize);
	//system("mode con:cols=300 lines=500");
	//DotArtA();

	NS_FUNC_A::Sample();
	NS_FUNC_B::Sample();

	cout << '\n';

	OutputValueA();
	OutputValueB(5);
	OutputValueC(1, 9);

	OutputString("������ �ʹ� ��մ�.");
	
	// =============================================================================

	int nResultA = GetAddValue(18, 25);

	OutputValueB(nResultA);

	string sResultB = GetStringFunc("��մ�", "��վ�");
	OutputString(sResultB);

	nResultA = CheckingString("���� �� ���ּ���", "���� �� ���ּ���");

	OutputValueB(nResultA);

	cout << '\n';

	int numL = 0;
	int numR = 0;

	cout << "���� (2��) �Է� : " << endl;
	cin >> numL >> numR;

	// �Լ� ��¿� ���� C����� �������� ���������� ���� ������ �ִ�.
	/*printf("%d + %d = %d\n", numL, numR, GetAddValue(numL, numR));
	printf("%d - %d = %d\n", numL, numR, GetSubValue(numL, numR));
	printf("%d * %d = %d\n", numL, numR, GetMultipleValue(numL, numR));
	printf("%d / %d = %d\n", numL, numR, GetDivideValue(numL, numR));*/

	/*
	- �� ó�� �Լ��� �پ��� ������ ���� �� �ִ�.

	=> C/C++ ����� �Լ� ����
	
	- �Է� O, ��� O
	- �Է� O, ��� X
	- �Է� X, ��� O
	- �Է� X, ��� X
	
	EX)
	void ShowInfo(int nAge, char* psName);
	�� �Է� O / ��� X
	int GetRandomValue(void);
	�� �Է� X / ��� O
	void SomeFunction(void);
	�� �Է� X / ��� X
	
	*/
}

/*
- ������ �Է� �����Ϳ� ��� �����Ͱ� ������ �ش� ������ �Լ���� ��Ī�Ѵ�.
���� C / C++ ���� �Լ� ������ ������ �Ǳ� ������ ��ǻ���� ��ɹ��� �ۼ��ϱ�
���ؼ��� �ݵ�� �ش� ������ �Լ� �ȿ� �ۼ��� ��� �Ѵ�.

*/

// { }

// ����

void OutputValueA()
{
	cout << "���� �ٷ� �Լ���." << endl;
}

void OutputValueB(int numA)
{
	cout << numA << endl;
}

void OutputValueC(int numA, int numB)
{
	cout << numA << numB << endl;
}

void OutputString(string str)
{
	cout << str << endl;
}

string GetStringFunc(string strA, string strB)
{
	// ��Ģ ���� x
	return strA + strB;
	// �⺻������ string�� ���ڿ��� �ٷ� �� �ִ� �پ��� ����� �����Ѵ�.
	// append() : n���ڿ� �ڿ� n2 ���ڿ��� �ٿ� �ִ´�.
	strA.append(strB);
	// ���� -> ������ -> �޸�
}

int CheckingString(string strA, string strB)
{
	/*
	�Լ��� return Ű���带 ���ؼ� �Լ��� ���� �Ǵ� ������� ��ȯ�ϴ� ����
	�����ϸ� �Լ��� ��� ���� �Է°��� �޸� �ϳ��� ������� ��ȯ �� �� �ִ�.

	*/

	// ������ 1 / �ٸ��� 0 ��ȯ
	return strA == strB;
}

int GetAddValue(int numA, int numB)
{
	return numA + numB;
}

int GetSubValue(int numA, int numB)
{
	return numA - numB;
}

int GetMultipleValue(int numA, int numB)
{
	return numA * numB;
}

int GetDivideValue(int numA, int numB)
{
	return numA / numB;
}

void DotArtA()
{
	TextColor(0, 0);
	cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡۡۡۡۡ�"; TextColor(15, 0); cout << "��"; TextColor(4, 0); cout << "��"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡۡۡۡ�"; TextColor(15, 0); cout << "��"; TextColor(4, 0); cout << "����"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡۡۡۡ�"; TextColor(15, 0); cout << "��"; TextColor(4, 0); cout << "����"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡۡۡۡ�"; TextColor(15, 0); cout << "��"; TextColor(4, 0); cout << "����"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡۡۡۡ�"; TextColor(15, 0); cout << "��"; TextColor(4, 0); cout << "����"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡۡۡۡ�"; TextColor(15, 0); cout << "��"; TextColor(4, 0); cout << "����"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡۡۡۡ�"; TextColor(15, 0); cout << "��"; TextColor(4, 0); cout << "����"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡۡۡۡ�"; TextColor(15, 0); cout << "��"; TextColor(4, 0); cout << "����"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡۡۡۡ�"; TextColor(15, 0); cout << "��"; TextColor(4, 0); cout << "����"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡ�"; TextColor(6, 0); cout << "���"; TextColor(0, 0); cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(4, 0); cout << "����"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�"; TextColor(6, 0); cout << "���"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡ�"; TextColor(6, 0); cout << "���"; TextColor(0, 0); cout << "��"; TextColor(15, 0); cout << "��"; TextColor(4, 0); cout << "����"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "��"; TextColor(6, 0); cout << "���"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡۡ�"; TextColor(6, 0); cout << "�����"; TextColor(5, 0); cout << "��"; TextColor(6, 0); cout << "�����"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡۡۡۡۡ�"; TextColor(6, 0); cout << "����"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡۡۡۡۡ�"; TextColor(6, 0); cout << "����"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡۡۡۡۡ�"; TextColor(6, 0); cout << "����"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡ�"; TextColor(1, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << endl;
	cout << endl;
	cout << endl;
}

void TextColor(int font, int backGround)
{
	int Color = font + backGround * 16;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color);
}