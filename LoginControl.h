#pragma once
#include "Member.h"
#include "Session.h"
#include <vector>

/// <summary>
/// Login Control Class 
/// </summary>
class LoginControl {
private:
	vector<Member>* memberList;
	Session* session;
public:
	LoginControl(vector<Member>* memberList, Session* session)
		: memberList(memberList), session(session) {}
	void login(const string& id, const string& pw);
};