/*
����1. ������ �����

- ������ ������, ������ �ٸ� ���� �� �� + �Ǽ��縮���� ���� Ư��
�� 5������ ����� ȭ�鿡 ��� 15��

	���� : 
	���� : ���
	- Lv 15 �̻�
	- ���� ���ݷ� : 42 ~ 48
	- ���� ���ݷ� : 25 ~ 31
	- ���̰� ���̰� �� ����Դϴ�.
	- 320 G

	���� : ����
	- Lv 15 �̻�
	- ���� ���ݷ� : 35 ~ 60
	- ���� ���ݷ� : 20 ~ 26
	- ����ġ�� ������ �� ���� ���ݷ¿� ���� �߰� �˴ϴ�.
	- 260 G

	���� : Ȱ
	- Lv 20 �̻�
	- ���� ���ݷ� : 51 ~ 207
	- ���� ���ݷ� : 48 ~ 152
	- ��弦 ���� �� �ִ� ���� ���ݷ��� ���� �˴ϴ�.
	- 410 G

	���� : �б�
	- Lv 15 �̻�
	- ���� ���ݷ� : 24 ~ 55
	- ���� ���ݷ� : 23 ~ 48
	- ��弦 ���� �� 1% Ȯ���� ���� ȿ���� ���� �˴ϴ�.
	- 250 G

	���� : ������
	- Lv 15 �̻�
	- ���� ���ݷ� : 10 ~ 32
	- ���� ���ݷ� : 54 ~ 72
	- ������ ������ ������ �Դϴ�.
	- 300 G

	�� : 
	
	���� : �߰� ����
	- Lv 15 �̻�
	- ���� ���� : 181
	- ���� ���� : 150
	- �������� �ܴ��մϴ�.
	- 450 G

	���� : �߰� ����
	- Lv 15 �̻�
	- ���� ���� : 194
	- ���� ���� : 172
	- �������� �ܴ��մϴ�.
	- 470 G

	���� : ���� �尩
	- Lv 15 �̻�
	- ���� ���� : 145
	- ���� ���� : 132
	- ������ ������ ��ǳ�� �� �˴ϴ�.
	- 300 G

	���� : �߰� ��Ʈ
	- Lv 15 �̻�
	- ���� ���� : 163
	- ���� ���� : 143
	- �������� �ܴ��մϴ�.
	- 400 G

	���� : �߰� �Ź�
	- Lv 15 �̻�
	- ���� ���� : 157
	- ���� ���� : 135
	- �������� �ܴ��մϴ�.
	- 410 G

	�Ǽ��縮 :
	�����
	- Lv 15 �̻�
	- ���� ���� 326
	- 510 G


	����
	- Lv 15 �̻�
	- ���� ���� 311
	- 500 G

	�Ͱ���
	- Lv 15 �̻�
	- ���� ���� 283
	- 490 G


	����
	- Lv 15 �̻�
	- ���� ���� 275
	- 480 G


	���ġ
	- Lv 15 �̻�
	- ���� ���� 61
	- ���� ���� 340
	- 550 G

- ��µ� ȭ�鿡�� ������ ������ ���� ���� + Ư���� �Բ� �����ȴ�.

- �ʼ�: ���� 1�� + �� 1�� + �Ǽ��縮 1��
�� �÷� ��Ʈ
 �� ���� ���� ������ �� �������� �߰��Ѵ�.

 ����2. ���� ���� ���

 - 1 ~ 5������ �������� -> ��Ʈ

 - 6 ~ 19 ������ �������� -> ��Ʈ

 - 23 ~ 189 ������ �������� -> ��Ʈ
 ��  ���� ������ �����Ͷ�

 ���� ����. �ݺ���

 - �ݺ����� ������ ���ҿ� ���ؼ� ����

 - ��Ʈ�� ����´�.

*/

#include <iostream>
#include <time.h>
#include <Windows.h>

using std::cout;
using std::endl;
using std::cin;

void TextColor(int font, int backGround);

void main()
{
	system("mode con:cols=200 lines=300");

	// rand() ����
	// srand() ���� �ʱ�ȭ
	srand(time(NULL));

	// �� ���⺰ ���ݷ�
	int greatSwordPA = rand() % 7 + 42;
	int greatSwordMA = rand() % 7 + 25;

	int axPA		 = rand() % 26 + 35;
	int axMA		 = rand() % 7 + 20;

	int bowPA		 = rand() % 157 + 51;
	int bowMA		 = rand() % 105 + 48;

	int bluntPA		 = rand() % 32 + 24;
	int bluntMA		 = rand() % 26 + 23;

	int staffPA		 = rand() % 23 + 10;
	int staffMA		 = rand() % 19 + 54;

	// ����
	printf("���� : ���\n- Lv 15 �̻�\n- ���� ���ݷ� : 42 ~ 48\n- ���� ���ݷ� : 25 ~ 31\n- ���̰� ���̰� �� ���\n- ���� : 320 G\n���ݽ� ���� ���ݷ� : %d\n���ݽ� ���� ���ݷ� : %d\n\n",greatSwordPA,greatSwordMA);
	printf("���� : ����\n- Lv 15 �̻�\n- ���� ���ݷ� : 35 ~ 60\n- ���� ���ݷ� : 20 ~ 26\n- ����ġ�� ���� �� �ִ� ���� ���ݷ� ���� Ȯ�� ����\n- ���� : 260 G\n���ݽ� ���� ���ݷ� : %d\n���ݽ� ���� ���ݷ� : %d\n\n",axPA,axMA);
	printf("���� : Ȱ\n- Lv 20 �̻�\n- ���� ���ݷ� : 51 ~ 207\n- ���� ���ݷ� : 48 ~ 152\n- ��弦 ���� �� �ִ� ���� ���ݷ� ����\n- ���� : 410 G\n���ݽ� ���� ���ݷ� : %d\n���ݽ� ���� ���ݷ� : %d\n\n", bowPA, bowMA);
	printf("���� : �б�\n- Lv 15 �̻�\n- ���� ���ݷ� : 24 ~ 55\n- ���� ���ݷ� : 23 ~ 48\n- ��弦 ���� �� 1% Ȯ���� ���� ȿ���� ����\n- ���� : 250 G\n���ݽ� ���� ���ݷ� : %d\n���ݽ� ���� ���ݷ� : %d\n\n", bluntPA, bluntMA);
	printf("���� : ������\n- Lv 15 �̻�\n- ���� ���ݷ� : 10 ~ 32\n- ���� ���ݷ� : 54 ~ 72\n- ������ ������ ������\n- ���� : 300 G\n���ݽ� ���� ���ݷ� : %d\n���ݽ� ���� ���ݷ� : %d\n\n", staffPA, staffMA);

	// ��
	printf("���� : �߰� ����\n- Lv 15 �̻�\n- ���� ���� : 181\n- ���� ���� : 150\n- �������� �ܴ��մϴ�.\n- ���� : 450 G\n\n");
	printf("���� : �߰� ����\n- Lv 15 �̻�\n- ���� ���� : 194\n- ���� ���� : 172\n- �������� �ܴ��մϴ�.\n- ���� : 470 G\n\n");
	printf("���� : ���� �尩\n- Lv 15 �̻�\n- ���� ���� : 145\n- ���� ���� : 132\n- ������ ������ ��ǳ�� �� �˴ϴ�.\n- ���� : 300 G\n\n");
	printf("���� : �߰� ��Ʈ\n- Lv 15 �̻�\n- ���� ���� : 163\n- ���� ���� : 143\n- �������� �ܴ��մϴ�.\n- ���� : 400 G\n\n");
	printf("���� : �߰� �Ź�\n- Lv 15 �̻�\n- ���� ���� : 157\n- ���� ���� : 135\n- �������� �ܴ��մϴ�.\n- ���� : 450 G\n\n");

	// �Ǽ��縮
	printf("���� : �����\n- Lv 15 �̻�\n- ���� ���� : 326\n- ���� : 510 G\n\n");
	printf("���� : ����\n- Lv 15 �̻�\n- ���� ���� : 311\n- ���� : 500 G\n\n");
	printf("���� : �Ͱ���\n- Lv 15 �̻�\n- ���� ���� : 283\n- ���� : 490 G\n\n");
	printf("���� : ����\n- Lv 15 �̻�\n- ���� ���� : 275\n- ���� : 480 G\n\n");
	printf("���� : ���ġ\n- Lv 15 �̻�\n- ���� ���� : 61\n- ���� ���� : 340\n- ���� : 550 G\n\n");

	
	// ==============================================================================
	// ���� 1�����
	/*TextColor(0, 0);
	cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡ�"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡۡۡۡۡ�"; TextColor(15, 0); cout << "��"; TextColor(4, 0); cout << "��"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡۡۡۡ�"; TextColor(15, 0); cout << "��"; TextColor(4, 0); cout << "����"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡۡۡۡ�"; TextColor(15, 0); cout << "��"; TextColor(4, 0); cout << "����"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡۡۡۡ�"; TextColor(15, 0); cout << "��"; TextColor(4, 0); cout << "����"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡۡۡۡ�"; TextColor(15, 0); cout << "��"; TextColor(4, 0); cout << "����"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡۡۡۡ�"; TextColor(15, 0); cout << "��"; TextColor(4, 0); cout << "����"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡۡۡۡ�"; TextColor(15, 0); cout << "��"; TextColor(4, 0); cout << "����"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡۡۡۡ�"; TextColor(15, 0); cout << "��"; TextColor(4, 0); cout << "����"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡۡۡۡ�"; TextColor(15, 0); cout << "��"; TextColor(4, 0); cout << "����"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡ�"; TextColor(6, 0); cout << "���"; TextColor(0, 0); cout << "�ۡ�"; TextColor(15, 0); cout << "��"; TextColor(4, 0); cout << "����"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "�ۡ�"; TextColor(6, 0); cout << "���"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡ�"; TextColor(6, 0); cout << "���"; TextColor(0, 0); cout << "��"; TextColor(15, 0); cout << "��"; TextColor(4, 0); cout << "����"; TextColor(15, 0); cout << "��"; TextColor(0, 0); cout << "��"; TextColor(6, 0); cout << "���"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡۡ�"; TextColor(6, 0); cout << "�����"; TextColor(5, 0); cout << "��"; TextColor(6, 0); cout << "�����"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡۡۡۡۡ�"; TextColor(6, 0); cout << "����"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡۡۡۡۡ�"; TextColor(6, 0); cout << "����"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡۡۡۡۡ�"; TextColor(6, 0); cout << "����"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡ�"; TextColor(1, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;*/
	cout << endl;
	cout << endl;
	cout << endl;
	
	// ==============================================================================

	// �� 1�� �� ��
	/*
	TextColor(0, 0);
	cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡۡۡ�"; TextColor(7, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�"; TextColor(7, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡۡ�"; TextColor(7, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�"; TextColor(7, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡ�"; TextColor(7, 0); cout << "�ܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡ�"; TextColor(7, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡ�"; TextColor(7, 0); cout << "�ܡܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�"; TextColor(7, 0); cout << "�ܡܡ�"; TextColor(0, 0); cout << "�ۡ�"; TextColor(7, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡ�"; TextColor(7, 0); cout << "�ܡܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡ�"; TextColor(4, 0); cout << "����������"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡ�"; TextColor(7, 0); cout << "�ܡܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡ�"; TextColor(7, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡ�"; TextColor(4, 0); cout << "���"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡ�"; TextColor(4, 0); cout << "���"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡ�"; TextColor(7, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡ�" << endl;
	cout << "�ۡ�"; TextColor(7, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�"; TextColor(7, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡ�" << endl;
	cout << "��"; TextColor(7, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡ�"; TextColor(4, 0); cout << "����������������"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡ�"; TextColor(7, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡ�"; TextColor(4, 0); cout << "����"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�"; TextColor(4, 0); cout << "����"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡ�"; TextColor(13, 0); cout << "l"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�"; TextColor(13, 0); cout << "l"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡ�"; TextColor(13, 0); cout << "l"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�"; TextColor(13, 0); cout << "l"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡ�"; TextColor(7, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "��"; TextColor(13, 0); cout << "l"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�"; TextColor(13, 0); cout << "l"; TextColor(0, 0); cout << "��"; TextColor(7, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡ�"; TextColor(7, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "��"; TextColor(13, 0); cout << "l"; TextColor(9, 0); cout << "^^^^^^^^^^^^^^^^^"; TextColor(13, 0); cout << "l"; TextColor(0, 0); cout << "��"; TextColor(7, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡ�"; TextColor(7, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�"; TextColor(7, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡ�"; TextColor(7, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(7, 0); cout << "�ܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡ�"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(7, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡ�"; TextColor(7, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�"; TextColor(7, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡ�"; TextColor(7, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡ�"; TextColor(4, 0); cout << "��������������"; TextColor(0, 0); cout << "�ۡۡۡ�"; TextColor(7, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡۡۡۡۡ�"; TextColor(4, 0); cout << "��������������"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡ�"; TextColor(7, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�"; TextColor(7, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡ�"; TextColor(7, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�"; TextColor(7, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡ�"; TextColor(7, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�"; TextColor(7, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << endl;
	cout << endl;
	cout << endl;*/

	// ==============================================================================

	// �� ���� 2
	/*TextColor(15, 0);
	cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�";
	TextColor(4, 0);
	cout << "�ܡ�"; TextColor(15, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�"; TextColor(4, 0); cout << "�ܡ�"; TextColor(15, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�"; TextColor(3, 0); cout << "�ܡܡܡܡܡ�"; TextColor(15, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�"; TextColor(8, 0); cout << "�ܡܡܡܡܡ�"; TextColor(15, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�"; TextColor(8, 0); cout << "�ܡܡܡܡܡ�"; TextColor(15, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡۡۡ�"; TextColor(8, 0); cout << "�ܡ�"; TextColor(15, 0); cout << "�ۡۡ�"; TextColor(8, 0); cout << "�ܡܡܡܡܡ�"; TextColor(15, 0); cout << "�ۡۡ�"; TextColor(8, 0); cout << "�ܡ�"; TextColor(15, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡۡۡ�"; TextColor(8, 0); cout << "�ܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡ�"; TextColor(15, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡۡ�"; TextColor(8, 0); cout << "�ܡܡ�"; TextColor(8, 8); cout << "���"; TextColor(8, 0); cout << "��"; TextColor(8, 8); cout << "���"; TextColor(8, 0); cout << "��"; TextColor(8, 8); cout << "���"; TextColor(8, 0); cout << "��"; TextColor(8, 8); cout << "���"; TextColor(8, 0); cout << "�ܡܡ�"; TextColor(15, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡ�"; TextColor(8, 0); cout << "�ܡܡܡ�"; TextColor(8, 8); cout << "���"; TextColor(8, 0); cout << "��"; TextColor(8, 8); cout << "���"; TextColor(8, 0); cout << "��"; TextColor(8, 8); cout << "���"; TextColor(8, 0); cout << "��"; TextColor(8, 8); cout << "���"; TextColor(8, 0); cout << "�ܡܡܡ�"; TextColor(15, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡ�"; TextColor(8, 0); cout << "�ܡܡܡܡ�"; TextColor(8, 8); cout << "���"; TextColor(8, 0); cout << "��"; TextColor(8, 8); cout << "���"; TextColor(8, 0); cout << "��"; TextColor(8, 8); cout << "���"; TextColor(8, 0); cout << "��"; TextColor(8, 8); cout << "���"; TextColor(8, 0); cout << "�ܡܡܡܡ�"; TextColor(15, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡۡۡۡۡ�"; TextColor(8, 8); cout << "���"; TextColor(8, 0); cout << "��"; TextColor(8, 8); cout << "���"; TextColor(8, 0); cout << "��"; TextColor(8, 8); cout << "���"; TextColor(8, 0); cout << "��"; TextColor(8, 8); cout << "���"; TextColor(15, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡۡۡۡۡ�"; TextColor(8, 8); cout << "���"; TextColor(8, 0); cout << "��"; TextColor(8, 8); cout << "���"; TextColor(8, 0); cout << "��"; TextColor(8, 8); cout << "���"; TextColor(8, 0); cout << "��"; TextColor(8, 8); cout << "���"; TextColor(15, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡۡۡۡۡ�"; TextColor(8, 8); cout << "���"; TextColor(8, 0); cout << "��"; TextColor(8, 8); cout << "���"; TextColor(8, 0); cout << "��"; TextColor(8, 8); cout << "���"; TextColor(8, 0); cout << "��"; TextColor(8, 8); cout << "���"; TextColor(15, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡۡۡۡۡ�"; TextColor(8, 8); cout << "���"; TextColor(8, 0); cout << "��"; TextColor(8, 8); cout << "���"; TextColor(8, 0); cout << "��"; TextColor(8, 8); cout << "���"; TextColor(8, 0); cout << "��"; TextColor(8, 8); cout << "���"; TextColor(15, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡۡۡۡۡܡܡܡܡܡܡܡܡܡܡܡܡܡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡۡۡۡۡܡܡܡܡܡܡܡܡܡܡܡܡܡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;*/



	// ==============================================================================

	// �Ǽ��縮 1��
	//�ۡۡۡۡۡ� �ܡܡܡܡܡ�
	/*TextColor(0, 0);
	cout << "�ۡۡۡۡۡۡۡۡ�"; TextColor(8, 0); cout << "**"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡ�"; TextColor(8, 0); cout << "**"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡ�"; TextColor(8, 0); cout << "**"; TextColor(0, 0); cout << "�ۡۡۡ�"; TextColor(8, 0); cout << "&"; TextColor(0, 0); cout << "�ۡۡۡۡۡ�"; TextColor(8, 0); cout << "**"; TextColor(0, 0); cout << "�ۡۡۡۡۡ�"; TextColor(8, 0); cout << "&"; TextColor(0, 0); cout << "�ۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡ�"; TextColor(8, 0); cout << "**"; TextColor(0, 0); cout << "��"; TextColor(8, 0); cout << "&&&&&&"; TextColor(0, 0); cout << "�ۡۡۡ�"; TextColor(8, 0); cout << "**"; TextColor(0, 0); cout << "�ۡ�"; TextColor(8, 0); cout << "*"; TextColor(8, 0); cout << "&&&&&&"; TextColor(0, 0); cout << "�ۡ�" << endl;
	cout << "�ۡۡۡۡۡ�"; TextColor(8, 0); cout << "**"; TextColor(0, 0); cout << "��"; TextColor(8, 0); cout << "*"; TextColor(8, 0); cout << "&&"; TextColor(0, 0); cout << "�ۡ�"; TextColor(8, 0); cout << "&"; TextColor(0, 0); cout << "�ۡۡۡۡ�"; TextColor(8, 0); cout << "**"; TextColor(0, 0); cout << "��"; TextColor(8, 0); cout << "**"; TextColor(8, 0); cout << "&&"; TextColor(0, 0); cout << "�ۡ�"; TextColor(8, 0); cout << "&"; TextColor(0, 0); cout << "�ۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡ�"; TextColor(8, 0); cout << "****"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡ�"; TextColor(8, 0); cout << "*****"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡ�"; TextColor(3, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡ�"; TextColor(8, 0); cout << "**"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡ�"; TextColor(3, 0); cout << "�ܡܡܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡ�"; TextColor(3, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡ�"; TextColor(3, 0); cout << "�ܡܡܡܡܡ�"; TextColor(8, 0); cout << "**"; TextColor(0, 0); cout << "�ۡۡۡۡۡ�"; TextColor(3, 0); cout << "�ܡܡܡ�"; TextColor(8, 0); cout << "**"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡ�"; TextColor(3, 0); cout << "�ܡܡܡ�"; TextColor(0, 0); cout << "��"; TextColor(3, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡ�"; TextColor(3, 0); cout << "�ܡܡܡܡܡ�"; TextColor(8, 0); cout << "**"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡ�"; TextColor(8, 0); cout << "*"; TextColor(3, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "��"; TextColor(3, 0); cout << "�ܡܡܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡ�"; TextColor(3, 0); cout << "�ܡܡܡ�"; TextColor(0, 0); cout << "�ۡ�"; TextColor(3, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡ�"; TextColor(8, 0); cout << "**"; TextColor(0, 0); cout << "��"; TextColor(3, 0); cout << "�ܡܡܡܡܡ�"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(8, 0); cout << "**"; TextColor(3, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡ�"; TextColor(3, 0); cout << "�ܡܡܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡ�"; TextColor(8, 0); cout << "**"; TextColor(0, 0); cout << "�ۡ�"; TextColor(3, 0); cout << "�ܡܡܡ�"; TextColor(0, 0); cout << "�ۡۡۡ�"; TextColor(8, 0); cout << "**"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(3, 0); cout << "�ܡܡܡܡܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡ�"; TextColor(8, 0); cout << "**"; TextColor(0, 0); cout << "�ۡۡ�"; TextColor(3, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡ�"; TextColor(3, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡ�"; TextColor(3, 0); cout << "�ܡܡܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡ�"; TextColor(3, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡ�"; TextColor(3, 0); cout << "�ܡܡܡ�"; TextColor(0, 0); cout << "�ۡۡۡ�"; TextColor(3, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡ�"; TextColor(3, 0); cout << "�ܡܡܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡ�"; TextColor(3, 0); cout << "�ܡܡܡܡܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡ�"; TextColor(3, 0); cout << "�ܡܡܡܡܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡ�"; TextColor(3, 0); cout << "�ܡܡܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡ�"; TextColor(3, 0); cout << "�ܡ�"; TextColor(15, 0); cout << "��"; TextColor(3, 0); cout << "��"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡ�"; TextColor(3, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡ�"; TextColor(3, 0); cout << "�ܡ�"; TextColor(0, 0); cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << "�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�" << endl;
	cout << endl;
	cout << endl;*/

	// ==============================================================================

	// ���� ���� ���
	int numA = rand() % 5 + 1;
	int numB = rand() % 15 + 6;
	int numC = rand() % 167 + 23;

	//-1 ~5������ ��������->��Ʈ

	//- 6 ~19 ������ ��������->��Ʈ

	//- 23 ~189 ������ ��������->��Ʈ
	//	�� �� ���� ������ �����Ͷ�
	// => 23 ~ 189 ������ ��������
	
	// ����?
	// 189�� �ִ밪���� �Ϸ��� 190���� ���� �������� �ؾ� 0 ~ 189�� ������
	// ������ 23 ���� �����ϱ� ������ + 23�� �ؾ� �Ѵ�.
	// �׷��� ������ 190���� 23�� �� ������ ���� �� �������� ���Ѵ�.
	// 167���� ���� �������� �� ��� 0 ~ 166�� ���ڸ� ���� �ȴ�.
	// �� �� ó�� �����ϴ� ������ 23�� �����ָ� 
	// ���� ���ڰ� 0�� �ƴ� 23 ���� �����ϸ� ���� 166�� 189�� �ȴ�.
	cout <<"1 ~ 5 ������ ���� ���� : " << numA << endl;
	cout <<"6 ~ 19 ������ ���� ���� : " << numB << endl;
	cout <<"23 ~ 189 ������ ���� ���� : "<< numC << endl;
	

	





















}

void TextColor(int font, int backGround)
{
	int Color = font + backGround * 16;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color);
}
