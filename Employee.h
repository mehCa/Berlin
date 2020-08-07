#pragma once
#include"KalaDetails.h"
#include <fstream> 
#include "profile.h"

struct kala_tedad
{
	Kala P;
	int tedad;
};

class Employee//: public Profile
{
private:
	Profile profile;
	//int Hoghoogh;


public:
	void set_pro(Profile P);
	Profile  get_pro(); 
	void kamkon(int ted,Kala j);
	void ezafekon(int ted, Kala j);
	void sabt_kharid(/**/);
};

