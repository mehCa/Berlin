#pragma once
using namespace std;
#include<string>
#include "product.h"
class Reccords
{
private:
	string Date;
	product Product;
	KM info;
public:
	//set e con des oper ha/////////////// tooye con asli sakhatan dare
	Reccords(string date, product pro, KM f);
	Reccords(const Reccords& a);
	Reccords( Reccords&& a);
	~Reccords();
	////////

	product get_reccoerd();


};

