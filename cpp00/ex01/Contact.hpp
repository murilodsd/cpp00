#pragma once
#include <iostream>
#include <string>

class Contact
{
	private:
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _phone_number;
		std::string _darkest_secret;
	public:
		Contact();
		Contact(std::string _first_name, std::string _last_name, std::string _nickname, std::string _phone_number, std::string _darkest_secret);
		void show_all_contact_info();

		std::string get_first_name();
		std::string get_last_name();
		std::string get_nickname();
		std::string get_phone_number();
		std::string get_darkest_secret();
		
		void set_first_name(std::string first_name);
		void set_last_name(std::string last_name);
		void set_nickname(std::string nickname);
		void set_phone_number(std::string phone_number);
		void set_darkest_secret(std::string darkest_secret);
		
};