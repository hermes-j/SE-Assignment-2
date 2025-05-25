/*
	C011181 ������ - ����2 (�����ڵ�: 20179)
*/
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

#include "MemberCollection.h"
#include "Session.h"
#include "BikeCollection.h"
#include "RentalCollection.h"

#include "SignupControl.h"
#include "LoginControl.h"
#include "LogoutControl.h"
#include "AddBikeControl.h"
#include "RentBikeControl.h"
#include "RentalInfoControl.h"
#include "ExitControl.h"
using namespace std;

void doTask(const string &str);

Session session;
MemberCollection memberCollection;
BikeCollection bikeCollection;
RentalCollection rentalCollection;

/// <summary>
/// input file�� line �� �޴� ���� �� ��� ����
/// </summary>
/// <param name="str">input file�� �� line</param>
void doTask(const string &str) {
	int menu_level_1 = 0, menu_level_2 = 0;
	istringstream iss(str);
	vector<string> params;

	// �޴� �б�
	iss >> menu_level_1 >> menu_level_2;

	// �޴� ���� parameter �б�
	string param;
	while (iss >> param) {
		params.push_back(param);
	}

	// �޴��� ��� ����
	switch (menu_level_1) {
	case 1:
		switch (menu_level_2) {
		case 1: { // ȸ������
			cout << "1.1. ȸ������" << endl << "> ";
			// ��й�ȣ ���� ���Ե� ��ɻ� ����ڰ� �Է��ϴ� ������ ���� ����� 
			// Signup operation ������ ����ϸ� �� �ȴٰ� �Ǵ�.
			cout << params[0] << " " << params[1] << " " << params[2] << "\n\n";
			SignupControl SUCtrl(&memberCollection);
			SUCtrl.Signup(params[0], params[1], params[2]);
			break;
		}
		}
		break;
	case 2:
		switch (menu_level_2) {
		case 1: { // �α���
			cout << "2.1. �α���" << endl << "> ";
			cout << params[0] << " " << params[1] << "\n\n";
			LoginControl LICtrl(&memberCollection, &session);
			LICtrl.login(params[0], params[1]); // session�� ���� �����
			break;
		}
		case 2: { // �α׾ƿ�
			cout << "2.2. �α׾ƿ�" << endl << "> ";
			LogoutControl LOCtrl(&session);
			LOCtrl.logout();
			break;
		}
		}
		break;
	case 3:
		switch (menu_level_2) {
		case 1: { // ������ ���
			cout << "3.1. ������ ���" << endl << "> ";
			cout << params[0] << " " << params[1] << "\n\n";
			AddBikeControl ABCtrl(&bikeCollection);
			ABCtrl.AddBike(params[0], params[1]);
			break;
		}
		}
		break;
	case 4:
		switch (menu_level_2) {
		case 1: { // ������ �뿩
			cout << "4.1. ������ �뿩" << endl << "> ";
			RentBikeControl RBCtrl(&bikeCollection, &rentalCollection, &session);
			RBCtrl.rentBike(params[0]);
			break;
		}
		}
		break;
	case 5:
		switch (menu_level_2) {
		case 1: { // ������ �뿩 ����Ʈ ��ȸ
			cout << "5.1. ������ �뿩 ����Ʈ" << endl;
			RentalInfoControl RICtrl(&rentalCollection, &session);
			RICtrl.showRentals();
			break;
		}
		}
		break;
	case 6:
		switch (menu_level_2) {
		case 1: { // ���α׷� ����
			ExitControl ExCtrl;
			ExCtrl.program_exit();
			break;
		}}
		break;
	}
}

/// <summary>
/// ���� ���� �Լ�. input ���� �ε� �� ���� �� doTask ���� �� output ���� �ۼ�
/// </summary>
/// <returns></returns>
int main()
{
	ifstream readFile("input.txt");
	ofstream output("output.txt");
	streambuf* coutBuf = cout.rdbuf();
	cout.rdbuf(output.rdbuf());
	string line;
	if (readFile.is_open()) {
		while (getline(readFile, line)) {
			if (!line.empty()) doTask(line);
		}
	}
	cout.rdbuf(coutBuf);
	readFile.close();
	output.close();
	return 0;
}