#pragma once
#include "product.h"
#include "ProfileSeller.h"


class Seller
{
private:
	ProfileSeller profile;
public:


	Seller(ProfileSeller pro);
	Seller(const Seller& a);
	Seller( Seller&& a);
	~Seller();
	///////

	void add_product_list(string fileName ,KM obj);
	void delete_product_list(string fileName,KM obj);
	void change_ProfileSeller();
	void Delete_account();
	

};

