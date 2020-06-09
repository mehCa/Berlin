#pragma once
using namespace std;
#include<string>
template< class x> 
class TF_List 
{
private:

public:
	TF_List();
	TF_List(const TF_List& a);
	TF_List( TF_List&& a);
	~TF_List();
	////

	TF_List(string listName);
	void Add_list(string listName, x obj, int i = 1);   
	void Delete_list(string listName, x obj, int i = 1);
	x search_TFlist(string listName, x obj);

};
