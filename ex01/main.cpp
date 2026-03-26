#include <iostream>
#include <string>
#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook		book1;
	std::string		input;

	std::cout << "This is your super duper usefull phonebook!\n";
	std::cout << "use ADD to add a contact, SEARCH to find a contact and EXIT if u are don\n";
	while (true)
	{
		std::cin >> input;
		if (input == "ADD")
			book1.add();
		else if (input == "SEARCH")
			book1.search();
		else if (input == "EXIT")
			return (0);
		input.clear();
	}
	return (0);
}
