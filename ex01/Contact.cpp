#include <iostream>
#include <string>
#include "Contact.hpp"

int	Contact::create(void)
{
	Contact	c;

	std::cout << "##Creating a new Contact\n";
	std::cout << "enter the first name" << std::endl;
	std::getline(std::cin, c.first_name);
	std::getline(std::cin, c.first_name);
	std::cout <<  "enter the last name of "<< c.first_name << std::endl;
	std::getline(std::cin, c.last_name);
	std::cout <<  "enter the nickname of "<< c.first_name << std::endl;
	std::getline(std::cin, c.nickname);
	std::cout <<  "enter the phone number of "<< c.first_name << std::endl;
	std::getline(std::cin, c.phone_number);
	std::cout <<  "enter the darkest secret of "<< c.first_name << std::endl;
	std::getline(std::cin, c.darkest_secret);

	if (c.has_no_empty_entry())
	{
		std::cout <<  "##phonebook entry complete\n" << std::endl;
		*this = c;
		return (0);
	}
	else
	{
		std::cout << "##One ore more fields are emtpy. Contact will not be added\n" << std::endl;
		return (1);
	}
}

bool	Contact::has_no_empty_entry(void)
{
	if (first_name.empty())
			return (false);
	if (last_name.empty())
			return (false);
	if (nickname.empty())
			return (false);
	if (phone_number.empty())
			return (false);
	if (darkest_secret.empty())
			return (false);
	return (true);
}
