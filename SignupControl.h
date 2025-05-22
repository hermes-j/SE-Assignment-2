#pragma once
#include "Member.h"
#include <vector>

/// <summary>
/// Signup Control Class
/// </summary>
class SignupControl {
private:
	vector<Member>* memberList;
public:
	SignupControl(vector<Member>* memberList) : memberList(memberList) {}
	void Signup(const string& id, const string& pw, const string& phone);
};