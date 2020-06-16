#include<iostream>
using namespace std;

#include "ProfileSeller.h"



ProfileSeller::ProfileSeller(ProfileSeller&& c): Profile(std::move(c ))
{
	address_work = c.address_work;
}

ProfileSeller::ProfileSeller(const ProfileSeller& c):Profile (c)
{
	address_work = c.address_work;
}

ProfileSeller::~ProfileSeller()
{
}

