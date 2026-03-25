NAME = megaphone

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

IFLAGS = 

CC = c++

SRC = megaphone.cpp

OBJ = $(SRC:.cpp=.o)

%.o: %.cpp 
	$(CC) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(CPPFLAGS) $(IFLAGS) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
