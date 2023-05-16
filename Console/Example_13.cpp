#include "Example_13.h"

#define EXAMPLE_TYPE_STRUCT				1
#define EXAMPLE_TYPE_ENUM				2
#define EXAMPLE_TYPE_UNION				3
#define EXAMPLE_TYPE_CLASS				4


#define EXAMPLE_TYPE					EXAMPLE_TYPE_UNION

// ����� ���� �ڷ��� �ٴ� ���ٹ���(����,����)�� ���ؼ� �Ű��� ���� ��� �Ѵ�.
// ����ü => ���ϰ�ü(EX.Player)�� �����̳� ������(EX.Unit)���� �����̳�
// ��ü���� ���������� ���������� ����°� ��ȣ


// ����ü ������ġ�� ���� ����
//	�޸� ��뷮�� ���� �ӵ��� ����

namespace EXAMPLE_3
{

	//	����ü ���� ��ġ �޸� ��뷮�� ������ �ӵ��� ����

	struct tagFamily
	{
		const char* name;				//�̸�
		int age;				//����
		int height;				//Ű
		float weight;			//������
		bool wedding;			//��ȥ ����?
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
	- ������ ����� �⺻������ Ư�� ���� �Ҵ����� ������ �����Ϸ��� ���ؼ� �ڵ�����
	���� �Ҵ��Ѵ�. (0���� -> ������� ���� �ο� �Ѵ�.)

	- ��, Ư�� ����� ���� �Ҵ����� ��� �ش� ��� �����δ� ���ʴ��
	�ش� ����� �Ҵ�� ������ +1�� �����ؼ� �Ҵ��� �̷�����.
	*/


	enum EColor_Type
	{
		// ������ ����� �⺻������ ���� �빮�� ǥ�⸦ �Ѵ�.
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

	// ������ ������ ���´�. enum ����
	// �� ��ȣ�� ����, �޸� ����
	// : uint16_t -> �̿Ͱ��� �޸� �����ϱ� ���� �޸� ��ð���
	enum class Motion_Type : uint16_t
	{
		R_WALK,
		L_WALK,
		R_RUN,
		L_RUN
	};
	
	/* enum
	�߰��� ������� ���������� �ݵ�� �̸��� ����� �ʿ䰡 ��������. (�͸� -> 1ȸ�� �����͸� ���� �� �ִ�.)
	�� �͸��� ����

	- �ش� ������� ����� �������� �ĺ��� �� �ִ� �̸��� �翬�� �������� �ʱ� ������
	  ���� ����ȭ ��Ű�°� �Ұ����ϴ�.

	- �̷��� ��Ģ�� ������ �Ǹ鼭 �ٸ� ����� ���� �ڷ������� ����ȴ�.

	*/
	// EX)
	enum
	{
		// ��ũ�ο��� ���� ������ �ð��� ��������.
		UINT_SIZE = 5
	};

	//====================================================================================
	// ����ü
	union STData
	{
		int m_nDataA;
		int m_nDataB;
		float m_fData;
	};

	void Example()
	{
		//����ü ���� ��ġ  �޸� ��뷮�� ������ �ӵ��� ����


#if EXAMPLE_TYPE == EXAMPLE_TYPE_STRUCT

		// 0. ���� + �߻�ȭ
		// 1. ���� : struct ����κ�
		// 2. ����ȭ �κ� : �Ʒ��κа� ���� ����
		// 3. ���� ���Ǵ� �κ�

		// C��� ���
		//struct tagFamily Family;

		// C++ ���
		tagFamily human;


		/*
		�ϴ��� ����ϱ� ���ؼ��� ���ǰ� �ʿ��ϰ� ����ü ��� ������ �����ϱ�
		���ؼ��� dot(.) �����ڸ� ����Ѵ�.

		- �׿ܿ��� �Ϲ����� ������ ���Ͻ� �Ǳ� ������ ����� ���ؼ� �ʱ�ȭ��
		  �ʿ��ϴ�.
		- �� �ٸ� Ư¡�� �ִٸ� ����ü�� �ʱ�ȭ�� �迭�� �ʱ�ȭ�� ���� ������ ����
		  ������� ���ٴ� Ư¡�� �ִ�.
		*/

		human.name = "���";
		human.age = 18;
		human.height = 230;
		cout << std::boolalpha;
		human.wedding = false;
		human.weight = 45;

		cout << "�̸� : " << human.name << '\n';
		cout << "���� : " << human.age << '\n';
		cout << "Ű : " << human.height << '\n';
		cout << "��ȥ : " << human.wedding << '\n';
		cout << "������ : " << human.weight << '\n';

		cout << '\n';

		// ü�� : 100, ���� : 50, ���ݷ� : 10, ���� : 5, �̵��� : 10.5f

		tagPlayer mage;
		mage.hp = 100;
		mage.mp = 50;
		mage.att = 10;
		mage.def = 5;
		mage.speed = 10.5f;


		// ���������� ��� (Ȯ�强)
		tagUnit marin;

		// ����ü ����� ���ÿ� �ʱ�ȭ
		tagUnit zergling = { "���۸�", 50, 5.5f, true };

		cout << "�̸� : " << zergling.name << endl;
		cout << "ü�� : " << zergling.hp << endl;
		cout << "���ݷ� : " << zergling.att << endl;
		cout << "������� : " << zergling.die << endl;

		cout << sizeof(char*) << endl;

		cout << '\n';


		// �ε�׷��� ���̽�
		// ����ڰ� �ڵ带 ȿ�������� �ۼ��ϱ� ���� �������� �����ϰ� �����ϴ� ���
		// �� ����ü ��ü�� �ݺ����� ������ ������ �迭�� ����� �ݺ����� ����� �� �ְ� �Ѵ�.
		tagPlayer arrPlayer[4] =
		{
			{100, 100, 100, 100, 100},
			{90, 90, 90, 90, 90},
			{80, 80, 80, 80, 80},
			{7, 7, 7, 7, 7},
		};

		for (int i = 0; i < 4; ++i)
		{
			cout << i + 1 << "��° �÷��̾�" << endl;
			cout << "HP : " << arrPlayer[i].hp << endl;
			cout << "================================" << endl;
			
		}


#elif EXAMPLE_TYPE == EXAMPLE_TYPE_ENUM

		// 1001
		// �� ������ ������ ���� �ȵǴ� �ڵ��߿� �ϳ�
		// ���� ������ �ڵ� � �������� ���� ��ȣ��
		// 
		cout << "�� : " << BLACK << endl;

		EMotion_Type m_motion;

		m_motion = L_WALK;

		// �������� switch���� ���� ����
		// ��κ��� ���ӿ��� �������� �� �ʼ��� ����� �ȴ�.
		// �� ���ؼ� + �������� ������.
		switch (m_motion)
		{
		case  R_WALK:
			cout << "������ �ȱ�" << endl;
			break;
		case  L_WALK:
			cout << "���� �ȱ�" << endl;

			break;
		case  R_RUN:
			cout << "������ �ٱ�" << endl;

			break;
		case  L_RUN:
			cout << "���� �ٱ�" << endl;

			break;
		default:
			break;
		}

		if (m_motion == L_WALK)
		{
			m_motion = R_RUN;

			if (m_motion == R_RUN)
			{
				cout << "���������� �پ��." << endl;
			}
		}


#elif EXAMPLE_TYPE == EXAMPLE_TYPE_UNION

STData stData;

stData.m_nDataA = 0;
stData.m_nDataB = 200;
stData.m_fData = 3.14f;

// �޸𸮸� �����ϱ� ������ �������� �Է��� ���� ����� ����.
cout << "== ����ü == " << endl;
cout << "���� ������: " << stData.m_nDataA << endl;
cout << "���� ������: " << stData.m_nDataB << endl;
cout << "�Ǽ� ������: " << stData.m_fData << endl;




#else


#endif	//0

	}
}

