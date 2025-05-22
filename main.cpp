/*
	C011181 이형준 - 과제2 (개인코드: 20179)
*/
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;

void doTask(const string &str);
void program_exit();

/// <summary>
/// 메인 실행 함수. input 파일 로드 및 라인 별 doTask 실행
/// </summary>
/// <returns></returns>
int main()
{
	ifstream readFile("input.txt");
	string line;
	if (readFile.is_open()) {
		while (getline(readFile, line)) {
			if (!line.empty()) doTask(line);
		}
	}
}

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
		case 1: // 회원가입
			
			break;
		case 2:
		default:
			break;
		}
		break;
	case 2:
		switch (menu_level_2) {
		case 1: // 로그인
			cout << "로그인" << params[0] << params[1] << "\n";
			break;
		case 2: // 로그아웃
			cout << "로그아웃" << "\n";
			break;
		case 3:
		default:
			break;
		}
		break;
	case 3:
		switch (menu_level_2) {
		case 1: // 자전거 등록
			cout << "자전거 등록" << params[0] << params[1] << "\n";
			break;
		case 2:
		default:
			break;
		}
		break;
	case 4:
		switch (menu_level_2) {
		case 1: // 자전거 대여
			cout << "자전거 대여" << params[0] << "\n";
			break;
		case 2:
		default:
			break;
		}
		break;
	case 5:
		switch (menu_level_2) {
		case 1: // 자전거 대여 리스트 조회
			cout << "자전거 대여 리스트 조회" << "\n";
			break;
		case 2:
		default:
			break;
		}
		break;
	case 6:
		switch (menu_level_2) {
		case 1: // 프로그램 종료
			program_exit();
			break;
		case 2:
		default:
			break;
		}
		break;
	case 7:
	default:
		break;
	}
}

void program_exit() {
	cout << "6.1. 종료" << endl;
	exit(0);
}
