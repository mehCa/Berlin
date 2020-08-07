#pragma once
#include<string.h>
#include <tchar.h>
#include<direct.h>
#include<iostream>
using namespace std;
#include<time.h>
class Profile
{
private:
	string first_name;
	string last_name;
	time_t  vorood;
	time_t khorooj;
	string password;
	int hoghoogh_sabet;
	//int hoghoogh_padash;
public:
	Profile(string first_name, string last_name, time_t  vorood, time_t khorooj, int hoghoogh_sabet /*,int hoghoogh_padash*/);
	void setFirstName(string fname);
	void setLastName(string lname);
	void setVorood(time_t vorood);
	void setKhorooj(time_t Khorooj);
	void setHoghooghSabet(int sabet);
	/*void setHoghooghPadash(int padash);*/
	void setPassword(string pass);

	string getFirstName();
	string getLastName();
	time_t getVorood();
	time_t getKhorooj();
	int getHoghooghSabet();
	/*int getHoghooghPadash();*/
	string getPassword();
};

