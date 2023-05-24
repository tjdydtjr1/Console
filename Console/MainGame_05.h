#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <Windows.h>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

#pragma region STL Vector + Iterator
/*
* STL 3���� : ���� ���� ���̰� �ٸ� STL�� ���� ȣȯ ����(pair tuple ������)
vector list map

=> ���Ͷ�?
- STL(Standard Template Library)�� ���� �ִ� �÷��� Ŭ���� �� �ϳ��μ� �迭ó��
  �����ϴ� �÷��� Ŭ������ �ǹ��Ѵ�.
- �� �Ϲ����� �迭�� �����͸� �߰��ϱ� ���� ������ ���ѵǾ� ���� �ʱ� ������
  ��ǻ�Ͱ� ����ϴ� �� ���� ���� �����͸� �߰��ϴ°��� �����ϴ�.

EX)
vector<���ø� �μ�> ��ü �̸�(������ �μ�);
std::vector<int> ValueListA			-> int�� �����͸� �����ϰ� �ִ� ����
std::vector<float> ValueListB		-> float�� �����͸� �����ϰ� �ִ� ����

- STL ���ʹ� ������ ����̴�.
�� ���ٸ� ��Ģ�̳� ������ ���� �Ϲ����� �����̳ʶ�� �θ� �� �ִ�. (����ü Ŭ������ �޴´�)

- ���� ������ �����̳ʴ� �����͸� �������� �����ϸ� ������ �����̳ʴ� ���Ե� �����
  ������ �״�� �����ȴ�. (�迭�� Ư¡)


=> ������ �����̳�
- �⺻ �����̳� ��Ģ�� �Ʒ� ��Ģ�� �����Ѵٸ� ������ �����̳ʶ�� �θ���.
  �� ��ǥ������ vector, list, deque ���� �ִ�.

- ��Ģ 
1. ��� ��Ҵ� ���� ������� ��ġ�Ǿ�� �Ѵ�.
�� ù��° ��ҿ� ������ ��Ҹ� ������ ������ ��ҵ��� �ݵ�� �յڷ� ������ ��Ҹ�
  �ϳ��� ������ �־�� �Ѵ�.

2. �ּ��� ������ �ݺ��ڸ� ������ �־�� �Ѵ�. (forward iterator)
�� �̴� �ݺ��ڰ� �̵��Ҷ����� ����� ������ ������ ������ ������ �ֱ� �����̴�.

3. ������ �����̳��� ��ҵ��� ��Ȯ�� ������ ������.
�� ��Ȯ�� ������ ������ ������ Ư�� ��ġ�� �����ϴ� ������ �����ϴ�.

=> ������ Ư¡
- ������ ��� + �迭 ��� �����̳�
- C++ ���� Ȱ�� �󵵰� ���� ���� ����ϱⰡ ���� ����.
- �˻� �ӵ��� ������. (�б� �ɷ��� Ź���ϴ�.)
- �ݸ鿡 ������� ������.
- ���ο� �޸𸮸� �Ҵ��� ���� �߰��� ���ҿ� �Բ� "����" �Ѵ�.
- �޸� �Ҹ��� ũ��. (���� �����ͷ��� ���� ����. 10 ~ ?)


=> ���ͷ����Ͷ�? (Iterator)
- �÷��� Ŭ������ �����Ǿ� �ִ� �� �����Ϳ� �����ϱ� ���� ������ ��ü�ν� STL��
  ���ԵǾ� �ִ� ��� �÷��� Ŭ������ �������� ���۰� ���� ��Ÿ���� bigin�� end �Լ���
  ���ϰ� �ִ�.
- begin�� end�Լ��� ���ϰ� �ֱ� ������ ������ �ݺ��ؼ� �÷��ǿ� ���ԵǾ� �ִ� ��� �����Ϳ�
  �����ϴ� ���� �����ϴ�.

EX)
for(auto Iterator = ValueListA.begin(); Iterator != ValueListA.end(); ++Iterator)
{
	! Do Something
}
*/
#pragma endregion

struct STData
{
	int m_nValue;
	std::string m_oString;
};



class MainGame_05
{
private:
	// ������ ���� ����
	vector<int> _vNumber;
	// ������ ������ �ݺ��� ����(front)
	vector<int>::iterator _viNumber;
	// ������ ������ �ݺ��� ����(back)
	vector<int>::reverse_iterator _vriNumber;
	// vector�� ���� ȿ�������� ����ϴ¹�
	// ���Ŀ� ����ϰ� ����� �⺻���� �ͼ�������.
	//vector<MainGame_05*> _class;

public:
	void printVector();

	// �ζ��� �Լ� : ���� �ӵ� ����� ���� ���
	// �� �Լ��� ���ÿ��������� �ζ��� �Լ� ���ÿ� ���� �ʴ´�.
	// �� �ζ��� �Լ��� ���� ���Ǹ� ���� ����ó�� ���� ���� �ʴ´�.
	inline void LinePrint() { cout << "=====================================" << endl; }

	void sampleVector(std::vector<int> valueList);
	void sampleSTVector(std::vector<STData> valueList);
	void practiceVector(void);


	MainGame_05();
	~MainGame_05();

};

