#include <iostream>
#include <string>

using namespace std;

class {
public:
	int accID; //계좌번호
	char name[10]; //이름
	int password; //비밀번호
	int balance; //잔고
}Account;

void Makeaccount() //계좌생성
{
	char name[10];
	int accid;
	int balance;
	int password;

	cout << "============계좌 생성=============";
	
	cout << "계좌번호를 입력하시오:"; cin >> accid;
	cout << "이름을 입력하시오:"; cin >> name;
	cout << "비밀번호를 입럭하시오:"; cin >> password;
	cout << "입금 할 금액: "; cin >> balance;

	cout << endl << "계좌가 생성되었습니다." << endl;

	//다시 메뉴로 이동이 되어야함
}

void Deleteaccount() //계좌삭제
{
	int accid;
	cout << "삭제 할 계좌번호를 입력하시오:"; cin >> accid;

	if (==accid) //기존의 계좌와 입력한 계좌가 같으면
	{
		delete //계좌삭제
		cout << endl << "계좌가 삭제되었습니다."
	}

	else //계좌가 틀림
	{
		cout << "입력하신 계좌는 업는 계좌 입니다.";
	}

	//다시 메뉴로 이동
	
}

void Showaccount() //계좌조회
{
	cout << "예금주 :" << name << endl;
	cout << "계좌번호 :" << accid << endl;
	for (int i = 0; i < 계좌갯수; i++)
	{
		cout << "통장종류 :\t";
	}

	//메뉴로 이동
}

void Logout() //로그아웃 시작화면으로 돌아감
{
	
}