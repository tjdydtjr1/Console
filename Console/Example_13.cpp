#include "Example_13.h"

#define EXAMPLE_TYPE_STRUCT				1
#define EXAMPLE_TYPE_ENUM				2
#define EXAMPLE_TYPE_UNION				3
#define EXAMPLE_TYPE_CLASS				4


#define EXAMPLE_TYPE					EXAMPLE_TYPE_UNION

// 사용자 정의 자료형 붙는 접근범위(지역,전역)에 대해서 신경을 많이 써야 한다.
// 구조체 => 단일객체(EX.Player)로 쓸것이냐 범용적(EX.Unit)으로 쓸것이냐
// 객체지향 관점에서는 범용적으로 만드는걸 선호


// 구조체 선언위치에 따른 장점
//	메모리 사용량이 많고 속도도 빠름

namespace EXAMPLE_3
{

	//	구조체 선언 위치 메모리 사용량이 많으나 속도가 빠름

	struct tagFamily
	{
		const char* name;				//이름
		int age;				//나이
		int height;				//키
		float weight;			//몸무게
		bool wedding;			//결혼 유무?
	};

	struct tagPlayer
	{
		int hp;
		int mp;
		int att;
		int def;
		float speed;
	};

	struct tagUnit
	{
		string name;
		int hp;
		float att;
		bool die;
	};

	//==================================================================================
	/*
	- 열거형 상수는 기본적으로 특정 값을 할당하지 않으면 컴파일러에 의해서 자동으로
	값을 할당한다. (0부터 -> 순서대로 값을 부여 한다.)

	- 단, 특정 상수에 값을 할당했을 경우 해당 상수 밑으로는 차례대로
	해당 상수에 할당된 값에서 +1씩 증가해서 할당이 이뤄진다.
	*/


	enum EColor_Type
	{
		// 열거형 상수는 기본적으로 전부 대문자 표기를 한다.
		RED,
		GREEN,
		BLUE = 1000,
		BLACK,
		WHITE
	};

	enum EMotion_Type : uint16_t
	{
		R_WALK,
		L_WALK,
		R_RUN,
		L_RUN
	};

	// 별도의 공간을 갖는다. enum 개선
	// ㄴ 모호함 제거, 메모리 낭비
	// : uint16_t -> 이와같이 메모리 절약하기 위해 메모리 명시가능
	enum class Motion_Type : uint16_t
	{
		R_WALK,
		L_WALK,
		R_RUN,
		L_RUN
	};
	
	/* enum
	추가된 기능으로 열거형에는 반드시 이름을 명시할 필요가 없어졌다. (익명 -> 1회성 데이터를 가질 수 있다.)
	ㄴ 익명의 개념

	- 해당 방식으로 선언된 열거형은 식별할 수 있는 이름이 당연히 존재하지 않기 때문에
	  따로 변수화 시키는건 불가능하다.

	- 이러한 규칙은 개정이 되면서 다른 사용자 정의 자료형에도 적용된다.

	*/
	// EX)
	enum
	{
		// 매크로와의 차이 컴파일 시간이 빨라진다.
		UINT_SIZE = 5
	};

	//====================================================================================
	// 공용체
	union STData
	{
		int m_nDataA;
		int m_nDataB;
		float m_fData;
	};

	void Example()
	{
		//구조체 선언 위치  메모리 사용량이 적으나 속도가 느림


#if EXAMPLE_TYPE == EXAMPLE_TYPE_STRUCT

		// 0. 설계 + 추상화
		// 1. 선언 : struct 만든부분
		// 2. 구현화 부분 : 아랫부분과 같이 구현
		// 3. 실제 사용되는 부분

		// C언어 방법
		//struct tagFamily Family;

		// C++ 방법
		tagFamily human;


		/*
		일단은 사용하기 위해서는 정의가 필요하고 구조체 멤버 변수에 접근하기
		위해서는 dot(.) 연산자를 사용한다.

		- 그외에는 일반적인 변수와 동일시 되기 때문에 사용을 위해서 초기화가
		  필요하다.
		- 또 다른 특징이 있다면 구조체의 초기화는 배열의 초기화와 같이 지정된 값이
		  순서대로 들어간다는 특징이 있다.
		*/

		human.name = "사라";
		human.age = 18;
		human.height = 230;
		cout << std::boolalpha;
		human.wedding = false;
		human.weight = 45;

		cout << "이름 : " << human.name << '\n';
		cout << "나이 : " << human.age << '\n';
		cout << "키 : " << human.height << '\n';
		cout << "결혼 : " << human.wedding << '\n';
		cout << "몸무게 : " << human.weight << '\n';

		cout << '\n';

		// 체력 : 100, 마나 : 50, 공격력 : 10, 방어력 : 5, 이동력 : 10.5f

		tagPlayer mage;
		mage.hp = 100;
		mage.mp = 50;
		mage.att = 10;
		mage.def = 5;
		mage.speed = 10.5f;


		// 범용적으로 사용 (확장성)
		tagUnit marin;

		// 구조체 선언과 동시에 초기화
		tagUnit zergling = { "저글링", 50, 5.5f, true };

		cout << "이름 : " << zergling.name << endl;
		cout << "체력 : " << zergling.hp << endl;
		cout << "공격력 : " << zergling.att << endl;
		cout << "사망여부 : " << zergling.die << endl;

		cout << sizeof(char*) << endl;

		cout << '\n';


		// 로드그래머 케이스
		// 사용자가 코드를 효율적으로 작성하기 위해 컴파일이 가능하게 유도하는 방법
		// ㄴ 구조체 자체는 반복문을 돌릴수 없지만 배열로 만들어 반복문을 사용할 수 있게 한다.
		tagPlayer arrPlayer[4] =
		{
			{100, 100, 100, 100, 100},
			{90, 90, 90, 90, 90},
			{80, 80, 80, 80, 80},
			{7, 7, 7, 7, 7},
		};

		for (int i = 0; i < 4; ++i)
		{
			cout << i + 1 << "번째 플레이어" << endl;
			cout << "HP : " << arrPlayer[i].hp << endl;
			cout << "================================" << endl;
			
		}


#elif EXAMPLE_TYPE == EXAMPLE_TYPE_ENUM

		// 1001
		// ㄴ 포폴에 있으면 절대 안되는 코드중에 하나
		// 아주 위험한 코드 어떤 블랙인지에 대한 모호함
		// 
		cout << "블랙 : " << BLACK << endl;

		EMotion_Type m_motion;

		m_motion = L_WALK;

		// 열거형은 switch문을 쓰기 좋다
		// 대부분의 게임에서 방향잡을 때 필수로 사용이 된다.
		// ㄴ 편리해서 + 유지보수 용이함.
		switch (m_motion)
		{
		case  R_WALK:
			cout << "오른쪽 걷기" << endl;
			break;
		case  L_WALK:
			cout << "왼쪽 걷기" << endl;

			break;
		case  R_RUN:
			cout << "오른쪽 뛰기" << endl;

			break;
		case  L_RUN:
			cout << "왼쪽 뛰기" << endl;

			break;
		default:
			break;
		}

		if (m_motion == L_WALK)
		{
			m_motion = R_RUN;

			if (m_motion == R_RUN)
			{
				cout << "오른쪽으로 뛰어간다." << endl;
			}
		}


#elif EXAMPLE_TYPE == EXAMPLE_TYPE_UNION

STData stData;

stData.m_nDataA = 0;
stData.m_nDataB = 200;
stData.m_fData = 3.14f;

// 메모리를 공유하기 때문에 마지막에 입력한 값만 제대로 들어간다.
cout << "== 공용체 == " << endl;
cout << "정수 데이터: " << stData.m_nDataA << endl;
cout << "정수 데이터: " << stData.m_nDataB << endl;
cout << "실수 데이터: " << stData.m_fData << endl;




#else


#endif	//0

	}
}

