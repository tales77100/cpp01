FILES =	main.cpp \
		Harl.cpp

OBJDIR = obj
OBJ = $(FILES:%.cpp=$(OBJDIR)/%.o)

CFLAGS = -Wall -Wextra -Werror -std=c++98 -g3
CC = c++

NAME = Harl

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJDIR)/%.o: %.cpp
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re