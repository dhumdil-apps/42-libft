NAME = libft.a
SRC = *.c

all: $(NAME)

$(NAME):
	gcc -c -Wall -Werror -Wextra -I libft.h $(SRC)
	ar rc $(NAME) *.o

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
	gcc -c -Wall -Werror -Wextra -I $(LIB) $(SRC)
		ar rc $(NAME) *.o
