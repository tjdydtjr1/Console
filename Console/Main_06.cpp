#include "MainGame_02.h"

void main()
{
	/*
	- ���𹮿� ���� ������ Ŭ�������� ������ *�ν��Ͻ�* ��� �Ѵ�.
	- Ŭ������ �������� Ÿ���ϻ����� �� ��ü�� ������ �����ϴ� ������ �ƴϴ�.
	- ����ü�� �����Ѵٰ� �ؼ� ����ü ������ ����°��� �ƴѰ� ó��
	- Ŭ������ �����Ѵٰ� �ؼ� ������ ���� ����� �� �ִ� �޸𸮰�
	�Ҵ��� ������ �ʴ´�.
	*/
	/*
	* ���� �ް� ����
	- ���� vs ����
	- MainGame mg / MainGame* mg
	- Ŭ������ ���� �ν��Ͻ��� �޸𸮸� �������� �Ҵ� ��ų���̳�
	  Ȥ�� �������� �Ҵ� ��ų���̳��� ����
	- �������� �Ҵ��� �Ǹ� ���� ������ �Ҵ��� �ǰ� �����Ҵ��� ���� �Ҵ�ȴ�.
	- ���ÿ� �ö� �޸𸮴� �Լ� ������ ����� �ڵ����� �Ҹ� �Ǳ� ������
	  ������ ������ ���� �ʿ䰡 ����.

	- new Ű���� -> Ŭ������ ����� �ϸ� 
	1. �޸� �Ҵ�
	2. ������ ȣ��
	3. Ÿ�� ��ȯ

	- delete�� ����ϸ�
	1. �Ҹ��� ȣ��
	2. �޸𸮸� ����

	*/
	MainGame_02* mg = new MainGame_02;

	delete mg;
}