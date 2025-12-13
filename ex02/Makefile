NAME = ex02
SRC = Animal.cpp  Brain.cpp  Cat.cpp  Dog.cpp  main.cpp  WrongAnimal.cpp  WrongCat.cpp
OBJ = $(SRC:.cpp=.o)
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

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