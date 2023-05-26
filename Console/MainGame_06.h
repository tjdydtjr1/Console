#pragma once
#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <set>
#include <list>
#include <Windows.h>
// C : time.h C++ : ctime -> �ð� ���� ����� �ִ� ������� => C++���� ���е� ���
#include <ctime>

// C++11���� �߰� �ƴ�. ( ����Ƽ �ڷ�ƾ���� ������)
// �� pair Ȯ�� ���� -> ��ȯ���� N�� �̻� ������ �� �ִ�.
// �� ���� ����ϴ� �Լ� or ���� ����ϴ� ���
// �� EX: make_tuple(Ʃ�� ����) / get(��������) 
// ��   / swap(Ʃ�� ���� �ٸ� ������ ����) / tie (Ʃ�� �� �з�)
#include <tuple>


using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::map;
using std::set;
using std::tuple;
using std::multimap;
using std::list;

#pragma region STL ��
/*
=> ���̶�?
�� ���͸� ���� ���� ��������� Ư�� �������� ���� ����Ѵ� ( �����, ����...)

- ���Ϳ� ���������� �����͸� �����ϴ� �÷��� Ŭ���� �� �ϳ��ν� �����Ǿ� �ִ�
  �����͸� Ű / ��� �������� �����ϴ� Ŭ������ �ǹ��Ѵ�.

 EX)
 std::map<int, int> ValueListA;					-> Ű : int��	 , ��� : int�� -> �ʼ���
 std::map<std::string, int> ValueListB;			-> Ű : string��	 , ��� : int�� -> �ʼ���

 -> ���� Ư¡
 - �ΰ��� ¦�� �̷�� ������ ���� �����̳� (�ڷᱸ��)
 - ���� �ڷᱸ���� BinarySearch Tree�� RedBlack Tree�� �����Ǿ� �ִ�.
 �� ���� �� Ʈ���� �ڰ� ���� ���� Ž�� Ʈ���� ���� / ���� ���� �����Ǿ� ������
   �ڰ� ���� �����̱� ������ ���� ���� ��Ģ�� ������.

- ���� �� Ʈ��
- �ֻ���(Root) ���� Black ����(nullLeaf) ��� ���� �������̴�.
�� NIL (nullLeaf) : �����Ͱ� ���� ���� ��� -> ���� ���

- ������ ���� �������� ���� �� ���� ������ ����� �ڽ��� �������̾�� �Ѵ�.
  �� �ݴ��� ���� ���� ��Ģ ����(EX : ������ ����� �ڽ��� �ݵ�� �������� �ʿ䰡 ����.)

- ���� ��忡�� ��Ʈ ������ ���� ��ο� �ִ� ������ ����� ������ ���ƾ� �Ѵ�.
  �� ���� ���ԵǴ� ���� ���� ��尡 �Ǹ� �̶� �� ��带 �߽�����
     ���� �ڽĿ� ���� ��带 �����ϴ� �۾��� �Ѵ�.

- ���� �� Ʈ���� ���� �����߿� ���� ������ ���� ȸ���� �Ѵ� (�� / ��)
  �� ��ȸ���� ���� �ڽ� ����� ������ �ڽ� ��带 �θ� ����� ���� �ڽ����� ����
  �� ��ȸ���� ������ �ڽ� ����� ���� �ڽ� ��带 �θ� ����� ������ �ڽ����� ����

- ���� �뷮�� �˻��� Ưȭ�� STL
- �������� ����� ����/���� ��Ȳ������ ���� ���� ������ �ƴϴ�. (�� ���� X, ����� �����۰˻� O)
- �ʰ� ������ ����� �ϴ� STL ���� �����ϸ� ��Ȳ�� �°� ��� �����̳ʸ� �������
  ����� �غ��� �Ѵ�. + ����
  �� EX: set, multiset, multimap, tuple ���..
  �� ���� STL �����̳ʵ��� map���� ��.���������� �����ϰ� �ִ�.

=> STL ���� �ٽ�
- 1. Ű�� ����� ���� ����.
�� ù��° ���� - first  : Ű
�� �ι�° ���� - second : ��

- 2. �߰��ϴ� ����� insert()�� ����ϸ� Ű�� ���, �ΰ��� ���ÿ� �߰��ؾ� �ϴ�
     pair / make_pair()�� ����ؾ� �Ѵ�.

=> pair
�� �ΰ����� �ڷ����� �ϳ��� �����ִ� ����ü
�� ���ø� ����ü�̱� ������ � �ڷ����� ������ OK

=> make_pair
�� pair�� ����� �ִ� �Լ�
�� EX) p.first = x, p.second = y;        => p = make_pair(x, y);



*/
#pragma endregion



class MainGame_06
{
private:
    map<string, int> _mData;
    map<string, int>::iterator _miData;
    map<std::string, int>::iterator test;
    // multimap ���� map���� ��������.
    //1.
    multimap <map<vector<MainGame_06*>, set<vector<float>>>,
        map<list<vector<int>>, vector<double>>> _muData1;

    //2.
    multimap<map<vector<MainGame_06*>, set<vector<float>>>,
        map<list<vector<int>>, vector<double>>> _muData;

    // set
    set<vector<int>> _svData;
    // tuple
    tuple<int, string, char> _tupleValue;

public:
    std::pair<std::pair<int, int>, std::pair<int, int>> getMinMaxValue(std::vector<int> a_oValueList);
    void printMap(std::map<std::string, int> a_oValueList);

    MainGame_06();
    ~MainGame_06();


};

