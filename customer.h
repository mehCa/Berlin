#pragma once
#include "ProfileCustomer.h"
#include "Reccords.h"
#include "Kharid.h"
class customer
{
private:
	ProfileCustomer profile;
public:

	customer(const customer& a);      //va converter ham mizarim age bekhaim////////////////////////////////////set operator ha 
	customer( customer&& a);
	customer(ProfileCustomer pro);
	~customer();
	///



	ProfileCustomer get_profile();
	///
    void get_profile(ProfileCustomer);
	///
	Reccords get_shopping_records();

	void Delete_account();

	void change_ProfileCustomer();  

	Kharid kharid;


};

