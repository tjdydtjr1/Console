#include <iostream>
#include <time.h>	// �ҿ��������� random ���ٴ� ������
#include <random>	// ��û���� ���ſ� ��� ���� �Ϻ��� ���� C++11

// Ŭ������ using�� ����� �� ����.
using std::cout;
using std::cin;
using std::endl;


#pragma region ���� + ����
/*
=> ����

- ����(Random Number) : �������� ����� ���� �˼� ���� ��
�� �и� �������� ���� ���� or ���� �������� �̸� �� �� ������ �ϱ� ���� ������
	�ݵ�� �ʿ��ϴ�.
�� rand() �Լ��� ȣ���ϸ� 0 ~ 32767 ���� ������ ���� �ϳ��� �ҷ��´�.
�� rand() �Լ��� ������ ��Ģ�� ���� ������ �����ϴµ� ��Ģ�� �׻� ������ ������
	�����Ǵ� ������ �׻� ����.
	�ҿ��� ���� : ����� ����� ���� ����

=> ���� ���� ��ƾ

- �̷��� ���� ���� ��ƾ ��Ģ�� ��ȭ�� �� �� �ִ� srand()��� �Լ��� �־���.

- srand()�� ���� �߻��⿡ ������ �߻���Ű�� ������(Seed) �����Ͽ� ���� �߻����
	�� �������� �������� ������ �߻� ��Ų��.

- ���� �߻��Ⱑ ����� ������ �ð��� ������ ���� ���� ������ �ð����� ����������
	����Ѵٸ� ������ ���� �� �ִ�.

=> ����

- ���� ���α׷��ֿ����� ������ �����͸� ���� ������ ���Ѵ�.
�� 1. ���α׷��Ӱ� �ۼ��� ��� (�� ����� ���� -> �޸𸮰� ���� ��� ����)
�� 2. ���� �Լ��� �̿��ؼ�	 (�����ͷ��� 10���� �̻��� ��û�� ��� �������)

*/
#pragma endregion


void main()
{
	//srand(time(NULL));

	//int damage = (rand() % 10) + 1;
	//cout << "����� : " << damage << endl;

	//for (int i = 0; i < 10; ++i)
	//{
	//	printf("%d\t", rand());
	//}

	//// ����
	//int num[10];
	//int dest, sour, temp;

	//for (int i = 0; i < 10; ++i)
	//{
	//	num[i] = i;
	//}

	//// ���α׷��Ӱ� Ȯ���� �ϱ� ���� �۾�
	//for (int i = 0; i < 10; ++i)
	//{
	//	cout << num[i] << endl << endl;
	//}

	//for (int i = 0; i < 10; ++i)
	//{
	//	dest = rand() % 10;
	//	sour = rand() % 10;
	//	
	//	temp		= num[dest];
	//	num[dest]	= num[sour];
	//	num[sour]	= temp;
	//}

	//cout << endl;

	//for (int i = 0; i < 10; ++i)
	//{
	//	cout << "[" << i << "] = " << num[i] << endl;
	//}

	//cout << endl;

	/*
	=> �Ϻ��� ����

	- srand/rand() �Լ��� ������ �Ϻ��� ������ ������ �� ����.

	- �׷��� ������ C++11 �������� ���Ӱ� �߰��� ���� ����̽��� �̿��ؾ� �Ϻ���
	������ �����ϴ� ���� �����ϴ�.
	�� Random Number Generator
	


	*/
	// random_device ����
	// 1. ���� ������ ����
	// 2. �õ����
	// 3. ���� ����
	std::random_device oRandomDevice;
	// �õ� ���� : ���� �����⸦ ���� �� ���� �ڵ带 �����
	// �� (���� ���� ���� �ʱ�ȭ)
	// ���� ���� ������ -> �޸��� �� 19937�� ���ٴ°�
	std::mt19937_64 rnd(oRandomDevice()); // �޸��� Ʈ����Ʈ

	cout << "RandomDevice : \n" << rnd << endl;

	int RandomMin = 1;
	int RandomMax = 10;

	// ����
	std::uniform_int_distribution<int> range(RandomMin, RandomMax);

	// �Ǽ�
	//std::uniform_real_distribution<float> range(RandomMin, RandomMax);

	// ���� ����
	//std::normal_distribution<double> rang(RandomMin, RandomMax);

	cout << '\n';

	int RandomValue = range(rnd);

	cout << "���Ⱚ : " << RandomValue << endl;
	
	int nNumberA = (rand() % 10) + 1;
	int nNumberB = (rand() % 10) + 1;
	
	int nNumberC = (oRandomDevice() % 10) + 1;
	int nNumberD = (oRandomDevice() % 10) + 1;


}

