#include"KalaDetails.h"
 

Kala::Kala(char _name[100], long int _code, double _q_kharid, double _q_foroush, double _takhfif, time_t _t, int _mowjoodi)
{
	
	strcpy_s(this->name , _name);
	last_code++;
	_code = last_code;
	this->code = _code;
	this->q_kharid = _q_kharid;
	this->q_foroush = _q_foroush;
	this->takhfif = _takhfif;
	this->mowjoodi = _mowjoodi;
	this->t = _t;
	
}//constructor

void  Kala::set_name(char* _name)
{
	this->name;
}
char Kala::get_name() { return this->name[100]; }
long int Kala:: get_code() { return this->code; }
void Kala:: set_q_kharid(double _q_kharid)
{
	this->q_kharid = _q_kharid;
}
double Kala::get_q_kharid()
{
	return this->q_kharid;
}
void Kala:: set_q_foroush(double _q_foroush)
{
	this->q_foroush = _q_foroush;
}
double Kala::get_q_foroush()
{
	return this->q_foroush;
}
void Kala:: set_takhfif(double _takhfif)
{
	this->takhfif = _takhfif;
}
double Kala:: get_takhfif()
{
	return takhfif;
}
/*string Kala:: expire(time_t now)
{
	if (now >= t)
		return "has expire!!";
	else
		return ":)";
}*/