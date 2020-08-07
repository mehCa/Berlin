#include "profile.h"

Profile::Profile(string first_name, string last_name, time_t vorood, time_t khorooj, int hoghoogh_sabet/*, int hoghoogh_padash*/)
{
	this->first_name = first_name;
	this->last_name = last_name;
	this->vorood = vorood;
	this->khorooj = khorooj;
	this->hoghoogh_sabet = hoghoogh_sabet;
	/*this->hoghoogh_padash = hoghoogh_padash;*/
}

void Profile::setFirstName(string fname)
{
	this->first_name = fname;
}

void Profile::setLastName(string lname)
{
	this->last_name = lname;
}

void Profile::setVorood(time_t vorood)
{
	this->vorood = vorood;
}

void Profile::setKhorooj(time_t Khorooj)
{
	this->khorooj = khorooj;
}

void Profile::setHoghooghSabet(int sabet)
{
	this->hoghoogh_sabet = sabet;
}

//void Profile::setHoghooghPadash(int padash)
//{
//	this->hoghoogh_padash = padash;
//}
void Profile::setPassword(string pass)
{
	this->password = pass;
}
string Profile::getFirstName()
{
	return this->first_name;
}

string Profile::getLastName()
{
	return this->last_name;
}

time_t Profile::getVorood()
{
	return this->vorood;
}
time_t Profile::getKhorooj()
{
	return this->khorooj;
}

int Profile::getHoghooghSabet()
{
	return this->hoghoogh_sabet;
}

//int Profile::getHoghooghPadash()
//{
//	return this->hoghoogh_padash;
//}

string Profile::getPassword()
{
	return this->password;
}
