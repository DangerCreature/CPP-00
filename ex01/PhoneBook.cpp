#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.hpp"
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
		:pos(0), contact_count(0)
{
}

void	PhoneBook::add(void)
{
	if (c[pos].create() != 0)
		return ;

	if (contact_count < 8)
			contact_count ++;
	pos ++;
	if (pos > 7)
			pos = 0;
}

void	PhoneBook::display_contact(int idx)
{
	if (idx >= contact_count)
	{
		std::cout << "the Index: " << idx;
		if (idx > 7)
			std::cout << " is out of range" << std::endl;
		else
			std::cout << " is yet to be created" << std::endl;
		return ;
	}

	std::cout << "Contact with index: " << idx << std::endl;
	std::cout << "First Name: " << c[idx].first_name << std::endl;
	std::cout << "Last Name: " << c[idx].last_name << std::endl;
	std::cout << "Nickname: " << c[idx].nickname << std::endl;
	std::cout << "Phone number: " << c[idx].phone_number << std::endl;
	std::cout << "Darkest secret: " << c[idx].darkest_secret << std::endl;
	std::cout << std::endl;
}

void	list_contact_entry(std::string in)
{
	std::cout << std::setw(10);
	if (in.length() > 10)
	{
			in = in.substr(0, 9);
			in += ".";
	}
	std::cout << in;
}

void	PhoneBook::list_contact(int idx)
{
	std::cout << std::setw(10) << idx << "|";
	list_contact_entry(c[idx].first_name);
	std::cout << "|";
	list_contact_entry(c[idx].last_name);
	std::cout << "|";
	list_contact_entry(c[idx].nickname);
	std::cout << std::endl;
}

void	PhoneBook::search(void)
{
	int	idx;

	idx = 0;
	while (idx < contact_count)
			list_contact(idx ++);

	std::cout << "Display Conntact with idx: ";
	if (!std::cin >> idx)
	{
		std::cout << "\nNon numeric index \n\n";
		return ;
	}

	std::cout << std::endl;
	display_contact(idx);
}
