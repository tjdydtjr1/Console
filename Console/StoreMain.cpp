#pragma once
#include "StoreMain.h"

StoreMain::StoreMain()
{
	system("mode con:cols=500 lines=300");

	// ������ �ֱ�
	m_store.m_weaponVec.push_back(item.weaponA);
	m_store.m_armorVec.push_back(item.armorA);
	m_store.m_acceVec.push_back(item.acceA);
	m_store.m_fortionVec.push_back(item.fortion);

	m_store.m_weaponVec.push_back(item.weaponB);
	m_store.m_armorVec.push_back(item.armorB);
	m_store.m_acceVec.push_back(item.acceB);

	// �÷��̾� �κ��丮
	m_player.m_inven.m_weaponInven.push_back(item.weaponA);
	m_player.m_inven.m_armorInven.push_back(item.armorA);
	m_player.m_inven.m_acceInven.push_back(item.acceA);

	m_player.setName("�÷��̾�AA");
	int exit = 0;
	while (true)
	{
		int select = 0;
		system("cls");
		printf("1. ���� �����ϱ�\t2. �κ��丮 ����\t3. �ɷ�ġ Ȯ��");
		cin >> select;

		if (select == 1)
		{
			select = 0;
			system("cls");
			printf("========================= ���� =========================\n");
			printf("- ������ ��� -\n");
			printf("1. ����\n2. ���\n3. �Ǽ��縮\n4. ����\n5. ���� ������\n");
			cin >> select;
			printf("�ڷ� ���ư����� �ƹ�Ű�� ��������.\n");
			switch (select)
			{
			case 1:
			{
				system("cls");
				printf("===== ���� =====\n");
				for (m_store.m_weaponIter = m_store.m_weaponVec.begin(); m_store.m_weaponIter != m_store.m_weaponVec.end(); ++m_store.m_weaponIter)
				{
					cout << '\n';
					cout << "���� �̸� : " << m_store.m_weaponIter->m_name << endl;
					cout << "���� ���ݷ� : " << m_store.m_weaponIter->m_nAtk << endl;
					cout << "���� ���ݷ� : " << m_store.m_weaponIter->m_nMatk << endl;
					cout << "Ư�� ȿ�� : " << m_store.m_weaponIter->m_chSpecial << endl;
					cout << "������ ���� : " << m_store.m_weaponIter->m_chExplanation << endl;

					cout << '\n' << '\n';
				}
				exit = _getch();
			}
			break;
			case 2:
			{
				system("cls");
				printf("===== �� =====\n");
				for (m_store.m_armorIter = m_store.m_armorVec.begin(); m_store.m_armorIter != m_store.m_armorVec.end(); ++m_store.m_armorIter)
				{
					cout << '\n';
					cout << "�� �̸� : " << m_store.m_armorIter->m_name << endl;
					cout << "���� ���� : " << m_store.m_armorIter->m_nPhysicalDef << endl;
					cout << "���� ���� : " << m_store.m_armorIter->m_nMagicDef << endl;
					cout << "Ư�� ȿ�� : " << m_store.m_armorIter->m_chSpecial << endl;
					cout << "������ ���� : " << m_store.m_armorIter->m_chExplanation << endl;

					cout << '\n' << '\n';
				}
				exit = _getch();
			}
			break;
			case 3:
			{
				system("cls");
				printf("===== �Ǽ��縮 =====\n");
				for (m_store.m_acceIter = m_store.m_acceVec.begin(); m_store.m_acceIter != m_store.m_acceVec.end(); ++m_store.m_acceIter)
				{
					cout << '\n';
					cout << "�Ǽ��縮 �̸� : " << m_store.m_acceIter->m_name << endl;
					cout << "���� ���� : " << m_store.m_acceIter->m_nPhysicalDef << endl;
					cout << "���� ���� : " << m_store.m_acceIter->m_nMagicDef << endl;
					cout << "Ư�� ȿ�� : " << m_store.m_acceIter->m_chSpecial << endl;
					cout << "������ ���� : " << m_store.m_acceIter->m_chExplanation << endl;

					cout << '\n' << '\n';
				}
				exit = _getch();
			}
			break;
			case 4:
			{
				system("cls");
				printf("===== ���� =====\n");
				cout << "�ϱ� ���� : " << m_store.m_fortionVec[0].m_nLowerFortion << endl;
				cout << "��� ���� : " << m_store.m_fortionVec[0].m_nUpperFortion << endl;

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
				printf("�ش��ϴ� ����� �����ϴ�.\n");
				Sleep(1000);
				system("cls");
			}
				break;
			}
		}
		else if(select == 2)
		{
			system("cls");
			printf("======================= �κ��丮 =======================\n");
			printf("===== ���� =====\n");
			for (m_player.m_inven.m_weaponIter = m_player.m_inven.m_weaponInven.begin(); m_player.m_inven.m_weaponIter != m_player.m_inven.m_weaponInven.end(); ++m_player.m_inven.m_weaponIter)
			{
				cout << "���� �̸� : " << m_player.m_inven.m_weaponIter->m_name << endl;
				cout << "���� ���ݷ� : " << m_player.m_inven.m_weaponIter->m_nAtk << endl;
				cout << "���� ���ݷ� : " << m_player.m_inven.m_weaponIter->m_nMatk << endl;
				cout << "Ư�� ȿ�� : " << m_player.m_inven.m_weaponIter->m_chSpecial << endl;
				cout << "������ ���� : " << m_player.m_inven.m_weaponIter->m_chExplanation << endl;

				cout << '\n' << '\n';
			}
			printf("===== �� =====\n");
			for (m_player.m_inven.m_armorIter = m_player.m_inven.m_armorInven.begin(); m_player.m_inven.m_armorIter != m_player.m_inven.m_armorInven.end(); ++m_player.m_inven.m_armorIter)
			{
				cout << "�� �̸� : " << m_player.m_inven.m_armorIter->m_name << endl;
				cout << "���� ���� : " << m_player.m_inven.m_armorIter->m_nPhysicalDef << endl;
				cout << "���� ���� : " << m_player.m_inven.m_armorIter->m_nMagicDef << endl;
				cout << "Ư�� ȿ�� : " << m_player.m_inven.m_armorIter->m_chSpecial << endl;
				cout << "������ ���� : " << m_player.m_inven.m_armorIter->m_chExplanation << endl;

				cout << '\n' << '\n';
			}
			printf("===== �Ǽ��縮 =====\n");
			for (m_player.m_inven.m_acceIter = m_player.m_inven.m_acceInven.begin(); m_player.m_inven.m_acceIter != m_player.m_inven.m_acceInven.end(); ++m_player.m_inven.m_acceIter)
			{
				cout << "�Ǽ��縮 �̸� : " << m_player.m_inven.m_acceIter->m_name << endl;
				cout << "���� ���� : " << m_player.m_inven.m_acceIter->m_nPhysicalDef << endl;
				cout << "���� ���� : " << m_player.m_inven.m_acceIter->m_nMagicDef << endl;
				cout << "Ư�� ȿ�� : " << m_player.m_inven.m_acceIter->m_chSpecial << endl;
				cout << "������ ���� : " << m_player.m_inven.m_acceIter->m_chExplanation << endl;

				cout << '\n' << '\n';
			}
			printf("===== ���� =====\n");
			printf("�ϱ� ���� : %d\n��� ���� : %d\n", m_store.m_fortionVec[0].m_nLowerFortion - 100, m_store.m_fortionVec[0].m_nUpperFortion - 100);
			
			cout << '\n' << '\n';
			exit = _getch();
		}
		else if (select == 3)
		{
			printf("===== �ɷ�ġ =====\n");

			// �÷��̾� �ɷ�ġ + ��� �߰� �ɷ�ġ
			cout << "�̸� : " << m_player.getName() << endl;
			cout << "���� ���ݷ� : " << m_player.getAtk() << " + " << m_player.m_inven.m_weaponInven[0].m_nAtk << endl;
			cout << "���� ���ݷ� : " << m_player.getMatk() << " + " << m_player.m_inven.m_weaponInven[0].m_nMatk << endl;
			cout << "���� ���� : " << m_player.getPhysicalDef() << " + " << m_player.m_inven.m_armorInven[0].m_nPhysicalDef << endl;
			cout << "���� ���� : " << m_player.getMagicDef() << " + " << m_player.m_inven.m_armorInven[0].m_nMagicDef << endl;
			
			cout << '\n' << '\n';
			printf("================= ���� ��� =================\n");
			printf("===== ���� =====\n");
			for (m_player.m_inven.m_weaponIter = m_player.m_inven.m_weaponInven.begin(); m_player.m_inven.m_weaponIter != m_player.m_inven.m_weaponInven.end(); ++m_player.m_inven.m_weaponIter)
			{
				cout << "���� �̸� : " << m_player.m_inven.m_weaponIter->m_name << endl;
				cout << "���� ���ݷ� : " << m_player.m_inven.m_weaponIter->m_nAtk << endl;
				cout << "���� ���ݷ� : " << m_player.m_inven.m_weaponIter->m_nMatk << endl;
				cout << "Ư�� ȿ�� : " << m_player.m_inven.m_weaponIter->m_chSpecial << endl;
				cout << "������ ���� : " << m_player.m_inven.m_weaponIter->m_chExplanation << endl;

				

				//Pixel(1);
				//PrintWeapon();
				cout << '\n' << '\n';
			}
			printf("===== �� =====\n");
			for (m_player.m_inven.m_armorIter = m_player.m_inven.m_armorInven.begin(); m_player.m_inven.m_armorIter != m_player.m_inven.m_armorInven.end(); ++m_player.m_inven.m_armorIter)
			{
				cout << "�� �̸� : " << m_player.m_inven.m_armorIter->m_name << endl;
				cout << "���� ���� : " << m_player.m_inven.m_armorIter->m_nPhysicalDef << endl;
				cout << "���� ���� : " << m_player.m_inven.m_armorIter->m_nMagicDef << endl;
				cout << "Ư�� ȿ�� : " << m_player.m_inven.m_armorIter->m_chSpecial << endl;
				cout << "������ ���� : " << m_player.m_inven.m_armorIter->m_chExplanation << endl;

				cout << '\n' << '\n';
			}
			printf("===== �Ǽ��縮 =====\n");
			for (m_player.m_inven.m_acceIter = m_player.m_inven.m_acceInven.begin(); m_player.m_inven.m_acceIter != m_player.m_inven.m_acceInven.end(); ++m_player.m_inven.m_acceIter)
			{
				cout << "�Ǽ��縮 �̸� : " << m_player.m_inven.m_acceIter->m_name << endl;
				cout << "���� ���� : " << m_player.m_inven.m_acceIter->m_nPhysicalDef << endl;
				cout << "���� ���� : " << m_player.m_inven.m_acceIter->m_nMagicDef << endl;
				cout << "Ư�� ȿ�� : " << m_player.m_inven.m_acceIter->m_chSpecial << endl;
				cout << "������ ���� : " << m_player.m_inven.m_acceIter->m_chExplanation << endl;

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
			printf("�ٽ� �Է����ּ���.\n");
			Sleep(1000);
			continue;
		}
	}
}

StoreMain::~StoreMain()
{

}
