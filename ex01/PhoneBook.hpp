#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class	PhoneBook
{
	public:
		Contact	c[8];

		void	add();
		void	search();

		PhoneBook(void);

	private:
		int		pos;
		int		contact_count;
		void	display_contact(int idx);
		void	list_contact(int idx);
};
#endif
