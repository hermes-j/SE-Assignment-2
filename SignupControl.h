#pragma once
#include "MemberCollection.h"
#include <vector>

/// <summary>
/// Signup Control Class
/// </summary>
class SignupControl {
private:
	MemberCollection* memberCollection;
public:
	SignupControl(MemberCollection* memberCollection) : memberCollection(memberCollection) {}
	void Signup(const string& id, const string& pw, const string& phone);
};