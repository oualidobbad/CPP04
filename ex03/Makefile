NAME = materia
SRC = AMateria.cpp  Character.cpp  Cure.cpp  Ice.cpp  main.cpp  MateriaSource.cpp
OBJ = $(SRC:.cpp=.o)
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME) clean

$(NAME): $(OBJ)
	$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(CPP) $(CPPFLAGS) -c -o $@ $^

clean:
	rm -rf $(OBJ)

fclean:	clean
	rm -rf $(NAME)

re: fclean all

.PHONY: re clean fclean all