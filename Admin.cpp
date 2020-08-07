#include "Admin.h"


using namespace std;

void Admin::set_daramad(int d)
{
	daramad = d;    return;
}

int Admin::get_daramad()
{
	return daramad;
}

//

void Admin::add_employee(Employee taze)
{
	_chdir("C:\\Root");
	string str = "mkdir ";
	//str = str + (taze.get_pro().getFirstName()) + space + (taze.get_pro().getLastName());
	//system(str);
	{//be list ezafe shea
		ofstream fout;
		fout.open("List.txt", ios::app);
		//fout << (taze.get_pro().getFirstName()) + space + (taze.get_pro().getLastName()) << endl;
		//fout<<    pass
		fout.close();
	}

	{
		_chdir("taze.get_pro().getfirstname())+space+ (taze.get_pro().getlastname()");
		ofstream fout;
		fout.open("pro.txt", ios::app);
		//fout << (taze.get_pro().getfirstname()) << endl<<(taze.get_pro().getlastname()) << endl/////edemash
		fout.close();

	}

}
void Admin::add_admin(Admin taze)
{
	_chdir("c:\\root");
	string str = "mkdir ";
	//str = str + (taze.get_pro().getfirstname())+space+ (taze.get_pro().getlastname());
	//system(str);
	{
		_chdir("taze.get_pro().getfirstname())+space+ (taze.get_pro().getlastname()");
		ofstream fout;
		fout.open("pro.txt", ios::app);
		//fout << (taze.get_pro().getfirstname()) << endl<<(taze.get_pro().getlastname()) << endl/////edemash
		fout.close();

	}

	{//be list ezafe she
		ofstream fout;
		fout.open("list.txt", ios::app);
		//fout << (taze.get_pro().getfirstname()) + space + (taze.get_pro().getlastname()) << endl;
		//fout<<    pass
		fout.close();
	}

//Profile Admin::get_profile()
//{
//	return Profile();
//}


