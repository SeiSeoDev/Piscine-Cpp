CC = c++

NAME = Fixed

DIR_S = srcs/

SOURCES =	main.cpp		\
			Fixed.cpp

HEADER = Fixed.hpp

INC = inc/

SRCS = $(addprefix $(DIR_S),$(SOURCES))

OBJS = $(SOURCES:.cpp=.o)

FLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) $(FLAGS) -o $(NAME)

$(OBJS): $(SRCS) $(INC)$(HEADER)
	$(CC) -c $(SRCS) $(FLAGS) -I $(INC)

bonus: all

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all
