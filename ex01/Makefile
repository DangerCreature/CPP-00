NAME = phonebook

SRC  = main.cpp
SRC += PhoneBook.cpp
SRC += Contact.cpp

FLAGS = -Wall -Wextra -Werror -pedantic -std=c++98

CC = c++

OBJ = $(SRC:.cpp=.o)

%.o: %.cpp 
	$(CC) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(FLAGS) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	
re: fclean all

.PHONY: all clean fclean re
