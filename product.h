#pragma once
#include "TFList.h"

struct KM 
{
	string sellerName;
	double price;
	int tedad;
};
class product
{
private:
	string Name;
	string Category;
	
public:
	
	product(string name, string cat);
	product(const product& a);
	product(product&& a);
	~product();
	////////
	///////
	void set_name(string); 
	void set_Category(string);
	///////
	string get_name();
	string get_Category();

	void Add_KM(KM a);
	void Delete_KM(KM a);
	void print_KiaMifrooshan();
	void add_AllKala_list();
	void delete_AllKala_list();


};

