#pragma once
#include "ProfileCustomer.h"
#include "Profile.h"
#include "ProfileSeller.h"
class Admin
{
private :
	Profile profile;
public:

	Admin(Profile pro);
	Admin(const Admin& a);
	Admin(Admin&&a);
	~Admin();
	///////////

	void SignUpKon_customer(ProfileCustomer a);
	void SignUpKon_seller(ProfileSeller a);///////////////////////////
	void Delete_customer(ProfileCustomer a);
	void Delete_seller(ProfileSeller a);

	void new_Admin(Profile);



};

