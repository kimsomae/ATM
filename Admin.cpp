#include <iostream>
#include <string>

using namespace std;

class {
public:
	int accID; //���¹�ȣ
	char name[10]; //�̸�
	int password; //��й�ȣ
	int balance; //�ܰ�
}Account;

void Makeaccount() //���»���
{
	char name[10];
	int accid;
	int balance;
	int password;

	cout << "============���� ����=============";
	
	cout << "���¹�ȣ�� �Է��Ͻÿ�:"; cin >> accid;
	cout << "�̸��� �Է��Ͻÿ�:"; cin >> name;
	cout << "��й�ȣ�� �Է��Ͻÿ�:"; cin >> password;
	cout << "�Ա� �� �ݾ�: "; cin >> balance;

	cout << endl << "���°� �����Ǿ����ϴ�." << endl;

	//�ٽ� �޴��� �̵��� �Ǿ����
}

void Deleteaccount() //���»���
{
	int accid;
	cout << "���� �� ���¹�ȣ�� �Է��Ͻÿ�:"; cin >> accid;

	if (==accid) //������ ���¿� �Է��� ���°� ������
	{
		delete //���»���
		cout << endl << "���°� �����Ǿ����ϴ�."
	}

	else //���°� Ʋ��
	{
		cout << "�Է��Ͻ� ���´� ���� ���� �Դϴ�.";
	}

	//�ٽ� �޴��� �̵�
	
}

void Showaccount() //������ȸ
{
	cout << "������ :" << name << endl;
	cout << "���¹�ȣ :" << accid << endl;
	for (int i = 0; i < ���°���; i++)
	{
		cout << "�������� :\t";
	}

	//�޴��� �̵�
}

void Logout() //�α׾ƿ� ����ȭ������ ���ư�
{
	
}