NAME = Zombie
CPP = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = newZombie.cpp randomChump.cpp Zombie.cpp main.cpp
INC = Zombie.hpp
OBJ = $(SRCS:.cpp=.o)

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

.PHONY: all clean fclean re