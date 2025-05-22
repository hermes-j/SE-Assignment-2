#pragma once
#include <string>
using namespace std;

/// <summary>
/// Member Entity Class
/// </summary>
class Member {
private:
	string id;
	string pw;
	string phone;
public:
	Member(const string& id, const string& pw, const string& phone);
	string getID() const;
	string getPW() const;
	string getPhone() const;
	bool authenticate(const string& inputID, const string& inputPW) const;
};