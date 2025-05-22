#pragma once
#include "MemberCollection.h"
#include "Session.h"
#include <vector>

/// <summary>
/// Login Control Class 
/// </summary>
class LoginControl {
private:
	MemberCollection* memberCollection;
	Session* session;
public:
	LoginControl(MemberCollection* memberCollection, Session* session)
		: memberCollection(memberCollection), session(session) {}
	void login(const string& id, const string& pw);
};