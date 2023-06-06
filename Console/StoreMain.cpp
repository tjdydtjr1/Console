#pragma once
#include "StoreMain.h"

StoreMain::StoreMain()
{
	system("mode con:cols=500 lines=300");

	// 상점에 넣기
	m_store.m_weaponVec.push_back(item.weaponA);
	m_store.m_armorVec.push_back(item.armorA);
	m_store.m_acceVec.push_back(item.acceA);
	m_store.m_fortionVec.push_back(item.fortion);

	m_store.m_weaponVec.push_back(item.weaponB);
	m_store.m_armorVec.push_back(item.armorB);
	m_store.m_acceVec.push_back(item.acceB);

	// 플레이어 인벤토리
	m_player.m_inven.m_weaponInven.push_back(item.weaponA);
	m_player.m_inven.m_armorInven.push_back(item.armorA);
	m_player.m_inven.m_acceInven.push_back(item.acceA);

	m_player.setName("플레이어AA");
	int exit = 0;
	while (true)
	{
		int select = 0;
		system("cls");
		printf("1. 상점 입장하기\t2. 인벤토리 보기\t3. 능력치 확인");
		cin >> select;

		if (select == 1)
		{
			select = 0;
			system("cls");
			printf("========================= 상점 =========================\n");
			printf("- 아이템 목록 -\n");
			printf("1. 무기\n2. 장비\n3. 악세사리\n4. 포션\n5. 상점 나가기\n");
			cin >> select;
			printf("뒤로 돌아가려면 아무키나 누르세요.\n");
			switch (select)
			{
			case 1:
			{
				system("cls");
				printf("===== 무기 =====\n");
				for (m_store.m_weaponIter = m_store.m_weaponVec.begin(); m_store.m_weaponIter != m_store.m_weaponVec.end(); ++m_store.m_weaponIter)
				{
					cout << '\n';
					cout << "무기 이름 : " << m_store.m_weaponIter->m_name << endl;
					cout << "물리 공격력 : " << m_store.m_weaponIter->m_nAtk << endl;
					cout << "마법 공격력 : " << m_store.m_weaponIter->m_nMatk << endl;
					cout << "특수 효과 : " << m_store.m_weaponIter->m_chSpecial << endl;
					cout << "아이템 설명 : " << m_store.m_weaponIter->m_chExplanation << endl;

					cout << '\n' << '\n';
				}
				exit = _getch();
			}
			break;
			case 2:
			{
				system("cls");
				printf("===== 방어구 =====\n");
				for (m_store.m_armorIter = m_store.m_armorVec.begin(); m_store.m_armorIter != m_store.m_armorVec.end(); ++m_store.m_armorIter)
				{
					cout << '\n';
					cout << "방어구 이름 : " << m_store.m_armorIter->m_name << endl;
					cout << "물리 방어력 : " << m_store.m_armorIter->m_nPhysicalDef << endl;
					cout << "마법 방어력 : " << m_store.m_armorIter->m_nMagicDef << endl;
					cout << "특수 효과 : " << m_store.m_armorIter->m_chSpecial << endl;
					cout << "아이템 설명 : " << m_store.m_armorIter->m_chExplanation << endl;

					cout << '\n' << '\n';
				}
				exit = _getch();
			}
			break;
			case 3:
			{
				system("cls");
				printf("===== 악세사리 =====\n");
				for (m_store.m_acceIter = m_store.m_acceVec.begin(); m_store.m_acceIter != m_store.m_acceVec.end(); ++m_store.m_acceIter)
				{
					cout << '\n';
					cout << "악세사리 이름 : " << m_store.m_acceIter->m_name << endl;
					cout << "물리 방어력 : " << m_store.m_acceIter->m_nPhysicalDef << endl;
					cout << "마법 방어력 : " << m_store.m_acceIter->m_nMagicDef << endl;
					cout << "특수 효과 : " << m_store.m_acceIter->m_chSpecial << endl;
					cout << "아이템 설명 : " << m_store.m_acceIter->m_chExplanation << endl;

					cout << '\n' << '\n';
				}
				exit = _getch();
			}
			break;
			case 4:
			{
				system("cls");
				printf("===== 물약 =====\n");
				cout << "하급 물약 : " << m_store.m_fortionVec[0].m_nLowerFortion << endl;
				cout << "상급 물약 : " << m_store.m_fortionVec[0].m_nUpperFortion << endl;

			}
			break;
			case 5:
			{
				system("cls");
				continue;
			}
			break;
			default:
			{
				printf("해당하는 목록이 없습니다.\n");
				Sleep(1000);
				system("cls");
			}
				break;
			}
		}
		else if(select == 2)
		{
			system("cls");
			printf("======================= 인벤토리 =======================\n");
			printf("===== 무기 =====\n");
			for (m_player.m_inven.m_weaponIter = m_player.m_inven.m_weaponInven.begin(); m_player.m_inven.m_weaponIter != m_player.m_inven.m_weaponInven.end(); ++m_player.m_inven.m_weaponIter)
			{
				cout << "무기 이름 : " << m_player.m_inven.m_weaponIter->m_name << endl;
				cout << "물리 공격력 : " << m_player.m_inven.m_weaponIter->m_nAtk << endl;
				cout << "마법 공격력 : " << m_player.m_inven.m_weaponIter->m_nMatk << endl;
				cout << "특수 효과 : " << m_player.m_inven.m_weaponIter->m_chSpecial << endl;
				cout << "아이템 설명 : " << m_player.m_inven.m_weaponIter->m_chExplanation << endl;

				cout << '\n' << '\n';
			}
			printf("===== 방어구 =====\n");
			for (m_player.m_inven.m_armorIter = m_player.m_inven.m_armorInven.begin(); m_player.m_inven.m_armorIter != m_player.m_inven.m_armorInven.end(); ++m_player.m_inven.m_armorIter)
			{
				cout << "방어구 이름 : " << m_player.m_inven.m_armorIter->m_name << endl;
				cout << "물리 방어력 : " << m_player.m_inven.m_armorIter->m_nPhysicalDef << endl;
				cout << "마법 방어력 : " << m_player.m_inven.m_armorIter->m_nMagicDef << endl;
				cout << "특수 효과 : " << m_player.m_inven.m_armorIter->m_chSpecial << endl;
				cout << "아이템 설명 : " << m_player.m_inven.m_armorIter->m_chExplanation << endl;

				cout << '\n' << '\n';
			}
			printf("===== 악세사리 =====\n");
			for (m_player.m_inven.m_acceIter = m_player.m_inven.m_acceInven.begin(); m_player.m_inven.m_acceIter != m_player.m_inven.m_acceInven.end(); ++m_player.m_inven.m_acceIter)
			{
				cout << "악세사리 이름 : " << m_player.m_inven.m_acceIter->m_name << endl;
				cout << "물리 방어력 : " << m_player.m_inven.m_acceIter->m_nPhysicalDef << endl;
				cout << "마법 방어력 : " << m_player.m_inven.m_acceIter->m_nMagicDef << endl;
				cout << "특수 효과 : " << m_player.m_inven.m_acceIter->m_chSpecial << endl;
				cout << "아이템 설명 : " << m_player.m_inven.m_acceIter->m_chExplanation << endl;

				cout << '\n' << '\n';
			}
			printf("===== 물약 =====\n");
			printf("하급 물약 : %d\n상급 물약 : %d\n", m_store.m_fortionVec[0].m_nLowerFortion - 100, m_store.m_fortionVec[0].m_nUpperFortion - 100);
			
			cout << '\n' << '\n';
			exit = _getch();
		}
		else if (select == 3)
		{
			printf("===== 능력치 =====\n");

			// 플레이어 능력치 + 장비 추가 능력치
			cout << "이름 : " << m_player.getName() << endl;
			cout << "물리 공격력 : " << m_player.getAtk() << " + " << m_player.m_inven.m_weaponInven[0].m_nAtk << endl;
			cout << "마법 공격력 : " << m_player.getMatk() << " + " << m_player.m_inven.m_weaponInven[0].m_nMatk << endl;
			cout << "물리 방어력 : " << m_player.getPhysicalDef() << " + " << m_player.m_inven.m_armorInven[0].m_nPhysicalDef << endl;
			cout << "마법 방어력 : " << m_player.getMagicDef() << " + " << m_player.m_inven.m_armorInven[0].m_nMagicDef << endl;
			
			cout << '\n' << '\n';
			printf("================= 착용 장비 =================\n");
			printf("===== 무기 =====\n");
			for (m_player.m_inven.m_weaponIter = m_player.m_inven.m_weaponInven.begin(); m_player.m_inven.m_weaponIter != m_player.m_inven.m_weaponInven.end(); ++m_player.m_inven.m_weaponIter)
			{
				cout << "무기 이름 : " << m_player.m_inven.m_weaponIter->m_name << endl;
				cout << "물리 공격력 : " << m_player.m_inven.m_weaponIter->m_nAtk << endl;
				cout << "마법 공격력 : " << m_player.m_inven.m_weaponIter->m_nMatk << endl;
				cout << "특수 효과 : " << m_player.m_inven.m_weaponIter->m_chSpecial << endl;
				cout << "아이템 설명 : " << m_player.m_inven.m_weaponIter->m_chExplanation << endl;

				

				//Pixel(1);
				//PrintWeapon();
				cout << '\n' << '\n';
			}
			printf("===== 방어구 =====\n");
			for (m_player.m_inven.m_armorIter = m_player.m_inven.m_armorInven.begin(); m_player.m_inven.m_armorIter != m_player.m_inven.m_armorInven.end(); ++m_player.m_inven.m_armorIter)
			{
				cout << "방어구 이름 : " << m_player.m_inven.m_armorIter->m_name << endl;
				cout << "물리 방어력 : " << m_player.m_inven.m_armorIter->m_nPhysicalDef << endl;
				cout << "마법 방어력 : " << m_player.m_inven.m_armorIter->m_nMagicDef << endl;
				cout << "특수 효과 : " << m_player.m_inven.m_armorIter->m_chSpecial << endl;
				cout << "아이템 설명 : " << m_player.m_inven.m_armorIter->m_chExplanation << endl;

				cout << '\n' << '\n';
			}
			printf("===== 악세사리 =====\n");
			for (m_player.m_inven.m_acceIter = m_player.m_inven.m_acceInven.begin(); m_player.m_inven.m_acceIter != m_player.m_inven.m_acceInven.end(); ++m_player.m_inven.m_acceIter)
			{
				cout << "악세사리 이름 : " << m_player.m_inven.m_acceIter->m_name << endl;
				cout << "물리 방어력 : " << m_player.m_inven.m_acceIter->m_nPhysicalDef << endl;
				cout << "마법 방어력 : " << m_player.m_inven.m_acceIter->m_nMagicDef << endl;
				cout << "특수 효과 : " << m_player.m_inven.m_acceIter->m_chSpecial << endl;
				cout << "아이템 설명 : " << m_player.m_inven.m_acceIter->m_chExplanation << endl;

				cout << '\n' << '\n';
			}
			
			/*gotoxy(150, 40);

			PrintArmor();
			gotoxy(150, 60);

			PrintAcce();*/
		
			exit = _getch();
		}
		else
		{
			system("cls");
			printf("다시 입력해주세요.\n");
			Sleep(1000);
			continue;
		}
	}
}

StoreMain::~StoreMain()
{

}
