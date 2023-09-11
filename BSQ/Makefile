NAME = bsq

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC = main.c run.c info.c map.c square.c

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -o $(NAME) $(SRC)
clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all