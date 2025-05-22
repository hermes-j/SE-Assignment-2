/*
	C011181 ������ - ����2 (�����ڵ�: 20179)
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
/// ���� ���� �Լ�. input ���� �ε� �� ���� �� doTask ����
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
		case 1: // ȸ������
			
			break;
		case 2:
		default:
			break;
		}
		break;
	case 2:
		switch (menu_level_2) {
		case 1: // �α���
			cout << "�α���" << params[0] << params[1] << "\n";
			break;
		case 2: // �α׾ƿ�
			cout << "�α׾ƿ�" << "\n";
			break;
		case 3:
		default:
			break;
		}
		break;
	case 3:
		switch (menu_level_2) {
		case 1: // ������ ���
			cout << "������ ���" << params[0] << params[1] << "\n";
			break;
		case 2:
		default:
			break;
		}
		break;
	case 4:
		switch (menu_level_2) {
		case 1: // ������ �뿩
			cout << "������ �뿩" << params[0] << "\n";
			break;
		case 2:
		default:
			break;
		}
		break;
	case 5:
		switch (menu_level_2) {
		case 1: // ������ �뿩 ����Ʈ ��ȸ
			cout << "������ �뿩 ����Ʈ ��ȸ" << "\n";
			break;
		case 2:
		default:
			break;
		}
		break;
	case 6:
		switch (menu_level_2) {
		case 1: // ���α׷� ����
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
	cout << "6.1. ����" << endl;
	exit(0);
}
