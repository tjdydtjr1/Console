#include <iostream>
#include <time.h>	// 불완전하지만 random 보다는 가벼움
#include <random>	// 엄청나게 무거운 헤더 파일 완벽한 난수 C++11

// 클래스는 using을 사용할 수 없다.
using std::cout;
using std::cin;
using std::endl;


#pragma region 난수 + 셔플
/*
=> 난수

- 난수(Random Number) : 무작위로 만들어 지는 알수 없는 값
ㄴ 패를 무작위로 섞기 위해 or 적의 움직임을 미리 알 수 없도록 하기 위해 난수가
	반드시 필요하다.
ㄴ rand() 함수를 호출하면 0 ~ 32767 중의 임의의 값중 하나를 불러온다.
ㄴ rand() 함수는 일정한 규칙에 따라 난수를 생성하는데 규칙이 항상 같으며 난수가
	생성되는 순서도 항상 같다.
	불완전 난수 : 비슷한 결과가 자주 나옴

=> 난수 생성 루틴

- 이러한 난수 생성 루틴 규칙에 변화를 줄 수 있는 srand()라는 함수가 있었다.

- srand()는 난수 발생기에 난수를 발생시키는 시작점(Seed) 제공하여 난수 발생기는
	이 시작점을 기준으로 난수를 발생 시킨다.

- 난수 발생기가 실행될 시점의 시간은 예측할 수가 없기 때문에 시간값을 시작점으로
	사용한다면 난수를 만들 수 있다.

=> 셔플

- 게임 프로그래밍에서의 셔플은 데이터를 섞는 행위를 말한다.
ㄴ 1. 프로그래머가 작성한 방식 (이 방법을 쓰자 -> 메모리가 적게 들기 때문)
ㄴ 2. 관련 함수를 이용해서	 (데이터량이 10만개 이상의 엄청날 경우 사용하자)

*/
#pragma endregion


void main()
{
	//srand(time(NULL));

	//int damage = (rand() % 10) + 1;
	//cout << "대미지 : " << damage << endl;

	//for (int i = 0; i < 10; ++i)
	//{
	//	printf("%d\t", rand());
	//}

	//// 셔플
	//int num[10];
	//int dest, sour, temp;

	//for (int i = 0; i < 10; ++i)
	//{
	//	num[i] = i;
	//}

	//// 프로그래머가 확인을 하기 위한 작업
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
	=> 완벽한 난수

	- srand/rand() 함수의 조합은 완벽한 난수를 생성할 수 없다.

	- 그렇기 때문에 C++11 버전에서 새롭게 추가된 랜덤 디바이스를 이용해야 완벽한
	난수를 생성하는 것이 가능하다.
	ㄴ Random Number Generator
	


	*/
	// random_device 사용법
	// 1. 난수 생성기 생성
	// 2. 시드찍기
	// 3. 범위 지정
	std::random_device oRandomDevice;
	// 시드 설정 : 난수 생성기를 실행 할 엔진 코드를 줘야함
	// ㄴ (난수 생성 엔진 초기화)
	// 유사 난수 생성기 -> 메르센 수 19937을 쓴다는것
	std::mt19937_64 rnd(oRandomDevice()); // 메르센 트위스트

	cout << "RandomDevice : \n" << rnd << endl;

	int RandomMin = 1;
	int RandomMax = 10;

	// 정수
	std::uniform_int_distribution<int> range(RandomMin, RandomMax);

	// 실수
	//std::uniform_real_distribution<float> range(RandomMin, RandomMax);

	// 정규 분포
	//std::normal_distribution<double> rang(RandomMin, RandomMax);

	cout << '\n';

	int RandomValue = range(rnd);

	cout << "추출값 : " << RandomValue << endl;
	
	int nNumberA = (rand() % 10) + 1;
	int nNumberB = (rand() % 10) + 1;
	
	int nNumberC = (oRandomDevice() % 10) + 1;
	int nNumberD = (oRandomDevice() % 10) + 1;


}

