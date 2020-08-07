#pragma once
#include"Employee.h"
class Admin
{
private:
	//Profile pro;
	int daramad;

public:
	void set_daramad(int d);
	int get_daramad();
	void add_admin(Admin taze);
	void add_employee(Employee taze);
	void delete_employee(Employee p);
	//Profile get_profile();
	//void add_kala(int ted, Product j);

};

