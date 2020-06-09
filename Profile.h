#pragma once
using namespace std;
#include<string>
class Profile
{
private:
	string name;  
	string family_name;
	string address_home;
	string username;
	string password;
	long int Phone;
	int ID;
	int age;

public:
	Profile(Profile&& c);
	Profile(const Profile& c);
	Profile(string N, string F, string AH, string UN, string P, int id, int sen);
	virtual ~Profile();
	//////

	void set_name(string); 
	void set_family(string);
	void set_address_H(string);
	void set_username(string);
	void set_password(string);
	void set_Phone (long int);
	void set_ID(int);
	void set_age(int);
	////
	string get_name();
	string get_family();
	string get_address_H();
	string get_username();
	string get_password();
	long int get_Phone();
	int get_ID();
	int get_age();
	///
virtual	void change_profile();

};

