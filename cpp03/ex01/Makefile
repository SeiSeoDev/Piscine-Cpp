CC = c++

NAME = ScavTrap

DIR_S = srcs/

SOURCES =	main.cpp		\
			ClapTrap.cpp	\
			ScavTrap.cpp

HEADER =	ClapTrap.hpp	\
			ScavTrap.hpp

INC = inc/

SRCS = $(addprefix $(DIR_S),$(SOURCES))

OBJS = $(SOURCES:.cpp=.o)

FLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) $(FLAGS) -o $(NAME)

$(OBJS): $(INC)$(HEADER) $(SRCS)
	$(CC) -c $(SRCS) $(FLAGS) -I $(INC)

$(INC)$(HEADER):
	$(CC) -c $(SRCS) $(FLAGS) -I $(INC)

bonus: all

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all