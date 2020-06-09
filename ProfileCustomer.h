#pragma once
#include "Reccords.h"
#include "Profile.h"
class ProfileCustomer:public Profile
{
private:
	Reccords Rec;
public:
	ProfileCustomer(ProfileCustomer&& c);
	ProfileCustomer(const ProfileCustomer& c);
	ProfileCustomer(string N, string F, string AH, string UN, string P, Reccords rec, int id, int sen);
	~ProfileCustomer();
	//////////


	void change_profile();

};
