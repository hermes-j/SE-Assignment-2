#pragma once
#include <vector>
#include <string>
#include "Member.h"
using namespace std;

/// <summary>
/// Member Collection Class
/// </summary>
class MemberCollection {
private:
	vector<Member*> members;
public:
	MemberCollection() = default;
	void addMember(Member* member);
	Member* findByID(const string& id) const;
};