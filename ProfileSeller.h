#pragma once
#include "Profile.h"

class ProfileSeller :public Profile
{

	private:
		string address_work ;
	public:

		ProfileSeller(ProfileSeller&& c);
		ProfileSeller(const ProfileSeller& c);
		ProfileSeller(string N, string F, string AH, string UN, string P, string AW, int id, int sen);
		~ProfileSeller();
		//////////
		void set_address_W(string);
		/////
		string get_address_W();
		/////
		void change_profile();
	
};

