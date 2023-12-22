NAME = Weapon
CPP = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = Weapon.cpp main.cpp HumanA.cpp HumanB.cpp
INC = Weapon.hpp HumanA.hpp HumanB.hpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(INC)
	$(CPP) $(FLAGS) -o $@ -c $<

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean re
