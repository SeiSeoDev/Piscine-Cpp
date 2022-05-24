CC = c++

NAME = brain

SRCS = main.cpp

OBJS = $(SRCS:.cpp=.o)

FLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) $(FLAGS) -o $(NAME)

$(OBJS): $(SRCS)
	$(CC) -c $(SRCS) $(FLAGS)

bonus: all

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all