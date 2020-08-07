#include "Employee.h"

void Employee::set_pro(Profile P)
{
	profile = P;
}

Profile Employee::get_pro()
{
	return Profile();
}

void Employee::kamkon(int ted, Kala j)
{
	kala_tedad b = {} ;
	{
		_chdir("C:\\Root");
		fstream fout;
		fout.open("AllKala.txt", ios::out | ios::in | ios::binary);
		{
			while (true)
			{
				fout.read(b, sizeof(kala_tedad));
				if (b.P.get_name() == j.get_name())
				{
					b.tedad = b.tedad - ted;
					fout.seekg(-(sizeof(kala_tedad)), ios::cur);
					fout.write(b, sizeof(kala_tedad));
					break;
				}
			}
		}
		fout.close();
	}
		//_chdir("C:\\Root"+Get);   bargard be directorish

}

void Employee::ezafekon(int ted, Kala j)
{
	bool check = true;

	_chdir("C:\\Root");
	fstream fout;
	fout.open("AllKala.txt", ios::out | ios::in | ios::binary);
	{
		while (! EOF )///doroste?
		{
			fout.read(b, sizeof(kala_tedad));
			if (b.P.get_name() == j.get_name())
			{
				b.tedad = b.tedad + ted;
				fout.seekg(-(sizeof(kala_tedad)), ios::cur);
				fout.write(b, sizeof(kala_tedad));
				check = false;
				break;
			}
		}
		if (check == true)
		{
			fout.write(b, sizeof(kala_tedad));
		}
	}
	fout.close();

//_chdir("C:\\Root"+Get);   bargard be directorish
}

void Employee::sabt_kharid()
{

}
