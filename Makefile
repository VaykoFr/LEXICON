makefile:

SRC 	=    main.cpp 		\
			 game.cpp		\
			 my_error.cpp	\
			 player.cpp		\

OBJ 	=    $(SRC:.cpp=.o)

NAME 	=    my_lexicon

CC 		=	g++

CFLAGS	=	-Wall -Wextra -Werror

DESTDIR = ./

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(DESTDIR)$(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: flcean all