#include "Admin.h"
Admin::Admin(Profile pro)
{
	this->profile.set_name(pro.get_name());
	this->profile.set_address_H(pro.get_address_H());
	this->profile.set_age(pro.get_age());
	this->profile.set_family(pro.get_family());
	this->profile.set_ID(pro.get_ID());
	this->profile.set_password(pro.get_password());
	this->profile.set_Phone(pro.get_Phone());
	this->profile.set_username(pro.get_username());
	return;
}


Admin::Admin(const Admin& a)
{
	Profile p = a.profile;
	return;
}


Admin::Admin(Admin&& a)
{
	this->profile.set_address_H(a.profile.get_address_H());
	this->profile.set_age(a.profile.get_age());
	this->profile.set_family(a.profile.get_family());
	this->profile.set_ID(a.profile.get_ID());
	this->profile.set_name(a.profile.get_name());
	this->profile.set_password(a.profile.get_password());
	this->profile.set_Phone(a.profile.get_Phone());
	this->profile.set_username(a.profile.get_username());

	a.profile.set_address_H(NULL);
	a.profile.set_age(NULL);
	a.profile.set_family(NULL);
	a.profile.set_ID(NULL);
	a.profile.set_name(NULL);
	a.profile.set_password(NULL);
	a.profile.set_Phone(NULL);
	a.profile.set_username(NULL);
	return;
}
