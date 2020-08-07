#pragma once
#include <iostream>
#include<string.h>
using namespace std;
class Kala {
	string name;
    long int code;
	static long int last_code;
	double q_kharid;
	double q_foroush;
	double takhfif;
	time_t t;
	int mowjoodi;
public:
	Kala(char _name[100], long int _code, double _q_kharid, double _q_foroush, double _takhfif, time_t _t, int _mowjoodi);
	void set_name(char* _name);
	char get_name();
	//void set_code();
	long int get_code();
	void set_q_kharid(double _q_kharid);
	double get_q_kharid();
	void set_q_foroush(double _q_foroush);
	double get_q_foroush();
	void set_takhfif(double _takhfif);
	double get_takhfif();
	//string expire(time_t now);
};
long int Kala::last_code = 999;