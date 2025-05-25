/*
	C011181 이형준 - 과제2 (개인코드: 20179)
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
/// input file의 line 별 메뉴 선택 및 기능 실행
/// </summary>
/// <param name="str">input file의 각 line</param>
void doTask(const string &str) {
	int menu_level_1 = 0, menu_level_2 = 0;
	istringstream iss(str);
	vector<string> params;

	// 메뉴 읽기
	iss >> menu_level_1 >> menu_level_2;

	// 메뉴 뒤의 parameter 읽기
	string param;
	while (iss >> param) {
		params.push_back(param);
	}

	// 메뉴별 기능 실행
	switch (menu_level_1) {
	case 1:
		switch (menu_level_2) {
		case 1: { // 회원가입
			cout << "1.1. 회원가입" << endl << "> ";
			// 비밀번호 등이 포함된 기능상 사용자가 입력하는 정보에 대한 출력은 
			// Signup operation 내에서 출력하면 안 된다고 판단.
			cout << params[0] << " " << params[1] << " " << params[2] << "\n\n";
			SignupControl SUCtrl(&memberCollection);
			SUCtrl.Signup(params[0], params[1], params[2]);
			break;
		}
		}
		break;
	case 2:
		switch (menu_level_2) {
		case 1: { // 로그인
			cout << "2.1. 로그인" << endl << "> ";
			cout << params[0] << " " << params[1] << "\n\n";
			LoginControl LICtrl(&memberCollection, &session);
			LICtrl.login(params[0], params[1]); // session에 정보 저장됨
			break;
		}
		case 2: { // 로그아웃
			cout << "2.2. 로그아웃" << endl << "> ";
			LogoutControl LOCtrl(&session);
			LOCtrl.logout();
			break;
		}
		}
		break;
	case 3:
		switch (menu_level_2) {
		case 1: { // 자전거 등록
			cout << "3.1. 자전거 등록" << endl << "> ";
			cout << params[0] << " " << params[1] << "\n\n";
			AddBikeControl ABCtrl(&bikeCollection);
			ABCtrl.AddBike(params[0], params[1]);
			break;
		}
		}
		break;
	case 4:
		switch (menu_level_2) {
		case 1: { // 자전거 대여
			cout << "4.1. 자전거 대여" << endl << "> ";
			RentBikeControl RBCtrl(&bikeCollection, &rentalCollection, &session);
			RBCtrl.rentBike(params[0]);
			break;
		}
		}
		break;
	case 5:
		switch (menu_level_2) {
		case 1: { // 자전거 대여 리스트 조회
			cout << "5.1. 자전거 대여 리스트" << endl;
			RentalInfoControl RICtrl(&rentalCollection, &session);
			RICtrl.showRentals();
			break;
		}
		}
		break;
	case 6:
		switch (menu_level_2) {
		case 1: { // 프로그램 종료
			ExitControl ExCtrl;
			ExCtrl.program_exit();
			break;
		}}
		break;
	}
}

/// <summary>
/// 메인 실행 함수. input 파일 로드 및 라인 별 doTask 실행 후 output 파일 작성
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