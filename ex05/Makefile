FILES = main.cpp \
	Harl.cpp


CFLAGS = -Wall -Werror -Wextra -std=c++98 -g3

CC = c++

NAME = Harl

all: $(NAME)

$(NAME): 
	$(CC) $(CFLAGS) $(FILES) -o $(NAME)

clean:
	rm -rf $(NAME)

re: clean all

.PHONY: all clean re
