NAME = Animals
CPP = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
INC = Animal.hpp Dog.hpp Cat.hpp Brain.hpp WrongAnimal.hpp WrongCat.hpp
SRC = Animal.cpp Dog.cpp Cat.cpp main.cpp Brain.cpp WrongAnimal.cpp WrongCat.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(INC)
	$(CPP) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
