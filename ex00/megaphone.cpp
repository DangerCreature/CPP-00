#include <iostream>

void	capitalize(char *str)
{
	while (*str)
	{
		*str = std::toupper(*str);
		str ++;
	}
}

int	main(int c, char **v)
{
	int	idx;

	idx = 0;
	if (c == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		while (c - idx++ > 1)
		{
			capitalize(v[idx]);
			std::cout << v[idx];
		}
		std::cout << std::endl;
	}

	return (0);
}
