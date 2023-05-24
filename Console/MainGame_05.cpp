#include "MainGame_05.h"
#define Line LinePrint()



MainGame_05::MainGame_05()
{
	/*
	- STL ���Ϳ��� ���� ����ϴ� ���
	1. push_back()				 : �����͸� �ڿ��� ���� �߰��Ѵ�. (��)
	- emplace_back				 : �����͸� �ڿ������� �߰��Ѵ�. (��)
	2. pop_back()			   	 : ������ �ڿ������� ���� ����
	
	3. size()					 : ������ ũ�� (����)
	4. resize()					 : ������ ũ�� �� ���� 
	5. clear()					 : �ε��� ���� ���� (�޸� ������ �ΰ� ���� ���� -> �޸� �Ҵ� X)
	6. begin()					 : ������ 0��° �ε���
	7. end()					 : ������ ������ �ε���
	8. insert(��ġ, ��)			 : ����
	   insert(��ġ, ����, ��)     : ����
	9. erase(��ġ)				 : �����. (���� ������ ���� ���� <> �ݺ��ڸ� ����ϸ� �޸� �������� ����)

	vector�� front Iterator , back Iterator�� �����Ѵ�.

	��������
	vector�� list�� ����
	 �������� ����� ���� ������ ���� �� vector�� ����ϸ� �ȵȴ�.
	 
	 �߰�
	 at()
	*/

	_vNumber.push_back(1);
	_vNumber.push_back(2);

	cout << _vNumber[0] << endl;
	cout << _vNumber[1] << endl;


	LinePrint();
	_vNumber.pop_back();
	_vNumber.pop_back();

	// ������ : ��
	for (int i = 0; i < 10; ++i)
	{
		_vNumber.push_back(i);
		cout << _vNumber[i] << endl;
	}

	LinePrint();

	_vNumber.push_back(1);

	_vNumber.pop_back();

	_vNumber.clear();
	LinePrint();

	//_vNumber.insert(_vNumbe  r.begin() + 5, 100);

	_vNumber.push_back(1);
	_vNumber.push_back(2);


	_vNumber.insert(_vNumber.begin() + 1, 100);
	

	// ������ : ��
	// �� ���� ������ ���� ���
	for (int i = 0; i < _vNumber.size(); ++i)
	{
		cout << _vNumber[i] << endl;
	}

	LinePrint();

	// ������ : �ֻ�
	// �� �ݺ��ڸ� ���� ��ȸ
	// ǥ�� ���
	_viNumber = _vNumber.begin();
	for (_viNumber; _viNumber != _vNumber.end(); ++_viNumber)
	{
		cout << *_viNumber << endl;
	}
	// ����Ʈ ������ : ��ǻ�Ͱ� �޸� �Ҵ� ������ ���� �Ѵ�.

	LinePrint();
	
}

MainGame_05::~MainGame_05()
{

}

void MainGame_05::printVector()
{
	LinePrint();
	LinePrint();
	LinePrint();

	cout << "push.back()" << endl;

	_vNumber.push_back(1);
	_vNumber.push_back(2);
	_vNumber.push_back(3);
	_vNumber.push_back(4);
	_vNumber.push_back(5);

	cout << _vNumber[0] << endl;
	cout << _vNumber[1] << endl;
	cout << _vNumber[2] << endl;
	cout << _vNumber[3] << endl;
	cout << _vNumber[4] << endl;

	LinePrint();

	cout << "insert()" << endl;
	_vNumber.insert(_vNumber.begin() + 2, 10);

	cout << _vNumber[0] << endl;
	cout << _vNumber[1] << endl;
	cout << _vNumber[2] << endl;
	cout << _vNumber[3] << endl;
	cout << _vNumber[4] << endl;
	
	LinePrint();

	cout << "pop_back" << endl;

	// ����: ������ üũ / �ݺ��� ���ο��� ����� ������ �鿩�� �Ѵ�.
	_vNumber.pop_back();

	for (int i = 0; i < _vNumber.size(); ++i)
	{
		cout << _vNumber[i] << endl;
	}
	
	// for each , auto ����
	/*
	- �־��� ������ ��� �����͸� �ϳ��� ��ȸ�ϸ� �����ϴ� ��쿡 ����Ѵ�.
	�� for each�� �����̳��� �ݺ��� ����

	- for each�� vector�� �����̳� ��Ұ� �ƴϰ� �˰��� �Լ�
	- ��� �����̳ʴ� �ݺ��ڸ� ������ ������ for each�� ����ؼ� �����̳��� ���� ������ �����ϴ�.
	- �̰� ������ ������ for each�� ���� iterator�� �����ϰ� ����Ʈ ������ �̸�
	  �����̳ʸ� ��ȸ�ϸ鼭 ���ϴ� ��ҿ� ������ �����ϴ�.

	=> auto ( STL ������ ��� ��, ������ ���� ���� �ڷ��� Ȯ�� �κ�)
	- �����Ϸ��� �����Ͻ� �ڵ����� �ڷ����� �߷��Ѵ�.
	- �����Ϸ��� �ڷ����� �߷� �ϱ� ���ؼ��� ������� ������ �־����� �Ѵ�.
	- C/C++ ���� �⺻������ ������ ������ �� �ش� ������ �ڷ����� ����ؾ� �Ѵ�.
	- auto Ű���� ��ü�� C# -> var �� �����ϸ� �ڷ����� Ȯ���Ǵ� �ñ�� ������ Ÿ��
	- auto Ű���忡 ���� �ڷ����� �����Ǵ� ������ ������ �Ҵ�Ǵ� �ʱⰪ�� ������
	  �Ǵ��ϱ� ������ auto�� ���� ���� ������ Ư������ �Ҵ��ؾ� �Ѵ�.

	*/

	// ��û ���ſ� ���� ������� ����
	// ������ ������ �ʿ���� ���������� ���������� ����Ѵ�.
	/*for each (auto p in _vNumber)
	{
		cout << "for each��" << p << endl;
	}*/

	cout << "erase()" << endl;

	// ����
	// erase(_vNumber.begin() + index);
	// ����
	// erase(_vNumber.begin() + s, _vNumber.begin() + d);
	_vNumber.erase(_vNumber.begin() + 1);
	// ��ŸƮ -> ����
	_vNumber.erase(_vNumber.begin(), _vNumber.begin() + 3);

	LinePrint();

	// ����ȸ
	for (_vriNumber = _vNumber.rbegin(); _vriNumber !=_vNumber.rend(); ++_vriNumber)
	{
		cout << *_vriNumber << endl;
	}
	LinePrint();
	/*
	 ���� ����
	 at == [] ������ ������� �����ش�.
	 �� ������? -> ������
	 at : ���� ��ġ�� ���Ҹ� �����ϴ� �������̽�

	 [] : ���� ������ ���� �ʱ� ������ �ӵ��鿡�� �����ϴ�.
	 at : ���� ������ �ϱ� ������ �ӵ��� ������. ��, �������鿡���� �ξ� �����ϴ�.
	*/
	cout << "at()" << endl;

	//cout << _vNumber.at(4) << endl;
	//cout << _vNumber[4] << endl;

	Line;

	// ù��° ��� ����
	// ���� ���� ������ �Ǿ��ִ��� Ȯ���� �����ϰ�
	// �� -> front�� ��µ� �����Ⱚ�̸� �޸� ����ȭ�� �ȵƴ�. �޸� �ּҰ� ������ ����ȭ�� �ƴ�
	cout << "front" << endl;
	cout << _vNumber.front() << endl;

	Line;

	// ������ ���� ����
	// �� �ε����� ���� ������ �Ǿ��ִ��� Ȯ��
	cout << "back" << endl;
	cout << _vNumber.back() << endl;

	Line;

	// ���� ������ ����� Ȯ���Ѵ�.
	cout << "size" << endl;
	cout << _vNumber.size() << endl;

	Line;
	_vNumber.clear();

	Line;

	// empty() : ��� ������ t / �ϳ� �̻� �ִ� ��� f
	if (_vNumber.empty())
	{
		cout << "���� �����" << endl << endl;
		
		// ��� �ִٸ� ���� ������ ������ �ʿ䰡 ����.
		return; // ���ǹ������� return�� ���ǹ��� �� ���ʿ� ���� ���ǹ��� ������.

	}

	cout << _vNumber.at(2) << endl;


}


void MainGame_05::sampleVector(std::vector<int> valueList)
{
}

void MainGame_05::sampleSTVector(std::vector<STData> valueList)
{
}

void MainGame_05::practiceVector(void)
{
}

/*
����1. ���Ϳ� ������...
- ���� �Լ��� "ȿ����" �ְ� "�� ���꼺" �ְ� ������ ������ �ݿ��Ͽ� ������ �´�.
- �Լ� ������ �ǵ��� �ʴ´�.
void MainGame_05::sampleSTVector(std::vector<STData> valueList)
{
}


26�ϱ��� -> 3���� �ð�
����2. STL ���� ���� (������ ����, �Ǹ�, �κ��丮 ����)
=> ��Ʈ������ ���

- ��ǥ ��Ʈ 1���� (���� + �� + ����(�Ǽ��縮))

- �ʼ�:
�� ������ ���� �� �Ǹ� ���
�� ������ �������� ������ �����ؾ� �Ѵ�.
�� �������� �ɷ�ġ�� ���� ĳ������ �ɷ�ġ�� ���
�� ������ �̸�, ����, �ɷ�ġ, ���� ���� ��� ����

- ������ �����ϸ� ������ �з��� ���´�.
	�� 1. ����		2. ��		3. ����(�Ǽ��縮)

- �� �޴����� �����Ӱ� ��ȯ�� �����ؾ� �Ѵ�.

*/