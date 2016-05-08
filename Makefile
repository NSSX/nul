NAME = rtv1

CC = gcc

INCLUDES = "libft/includes"

FLAGS = 

MLXFLA = -lmlx -framework OpenGL -framework AppKit

SRC =	*.c

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) :
		$(CC) $(FLAGS) -c $(SRC)
		$(CC) $(FLAGS) -o $(NAME) $(SRC) $(MLXFLA)

clean :
	rm -f $(OBJ)

fclean : clean
		rm -f $(NAME)

re : fclean all
